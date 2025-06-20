// --------------------- Project Information ---------------------
// Project		: TheNewKeyword
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring the "new" keyword in C++.
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

int main()
{
	Animal *pCat1 = new Animal();
	pCat1->setName("Garfield");
	pCat1->speak();
	delete pCat1;

	cout << sizeof(pCat1) << endl;

    return 0;
}

/* Notes:
 * The '.'-operator has higher precedance than the '*'-operator. Therefore, it is not possible to use methods on dereferenced pointers.
 * A workaround is to put '()' around, but better methods exist... Fx. '->'
 * 
 * Destructor is not called automatically when using 'new'. Remember to call the destructor using 'delete'. Otherwise, the allocated memory will be filled.
 */


