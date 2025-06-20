// --------------------- Project Information ---------------------
// Project		: ReturningObjectsfromFunctions
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring returning objects from functions in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

class Animal
{
private:
	string name;


public:
	Animal() { cout << "Animal created." << endl; }
	Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying" << endl; }
	~Animal() { cout << "Destructor called!" << endl; }

	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is: " << name << endl; }
};


// Some compilers might call the copy constructor twice when using the function below. This is very inefficient.
// The particular compiler used here, optimizes the copies out.
//Animal createAnimal()
//{
//	Animal a;
//	a.setName("Freddy");
//	return a;
//}


// This is more efficient than above, as it is a pointer that is passed around rather than copies of the object.
// For small objects, the program should still run smoothly with above, but large objects will make it slow and inefficient.
// 'new' is neccesary for the pointer to not go out of scope when the function completes. Thereby, the pointer is still valid in main, but 'delete' is neccesary.
Animal *createAnimal()
{
	Animal *pAnimal = new Animal();
	pAnimal->setName("Freddy");
	return pAnimal;
}


int main()
{
	Animal *pFrog = createAnimal();

	pFrog->speak();

	delete pFrog;

    return 0;
}

/* Notes:
 * Normally, C++ will create a temporary object to return a value.
 * 
 * There are two basic areas of memory in a C++ program: (1) the stack, (2) the heap.
 * (1) Are of memory associated with local variables. Local variables and function calls adds memory on the stack.
 * (2) All the memory available on the computer. Calling 'new' allocates memory on the heap instead of the stack.
 * 
 * Putting too much in the stack will create a stack overflow.
 * 
 */

