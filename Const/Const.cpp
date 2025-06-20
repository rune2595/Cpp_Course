// --------------------- Project Information ---------------------
// Project		: Const
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring const in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

class Animal
{
private:
	string name;


public:
	void setName(string name){ this->name = name; }
	
	// This method is declared as const, meaning it does not modify the state of the object.
	void speak() const { cout << "My name is: " << name << endl; }
};


int main()
{
	const double PI = 3.14159; // Declare a constant variable for PI
	cout << "The value of PI is: " << PI << endl;

	Animal animal;
	animal.setName("Leo the Lion");
	animal.speak();

	int value = 8;

	// This is read as "pointer to an int that is constant". We cannot change the value of the int through this pointer, but we can change where the pointer points to.
	const int *pValue = &value; // Pointer to value

	// This is read as "constant pointer to an int". We can change the value of the int through this pointer, but we cannot change where the pointer points to.
	int *const pConstValue = &value; // Pointer to an int

	// This is read as "constant pointer to a constant int". We cannot change the value of the int through this pointer, and we cannot change where the pointer points to.
	// The int value is still mutable, therefore, in this script pConstValue2 will adopt the value of pConstValue, which is the address of value or value, depending on which is modified last.
	const int *const pConstValue2 = &value; // Pointer to an int

	cout << *pValue << endl; // Print the address of value
	cout << *pConstValue << endl; // Print the address of value
	cout << *pConstValue2 << endl; // Print the address of value

	int number = 11;
	pValue = &number; // Change pointer to point to a different variable.
	*pConstValue = 5; // Dereference pointer and change the value of number
	value = 2;

	cout << *pValue << endl; // Print the address of number
	cout << *pConstValue << endl; // Print the value of number
	cout << *pConstValue2 << endl; // Print the value of number



	return 0;
}

/* Notes:
 * 'const' is a keyword in C++ that indicates that a variable's value cannot be changed after it has been initialized.
 * If a variable is declared as 'const', any attempt to modify it will result in a compilation error.
 * Constant variables are often declared with uppercase letters to distinguish them from regular variables.
 * 
 * If a method is known to not modify the state of the object, it can be declared as 'const'. This reduced the potential for bugs and makes the code clearer.
 * 
 * It is possible to change either where a pointer points to or the value it points to.
 */
