// --------------------- Project Information ---------------------
// Project		: CopyConstructers
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring copy constructers in C++.
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
	Animal(const Animal& other): name(other.name) { cout << "Animal created by copying" << endl; }
	// Copy constructor: This is called when a new object is created from an existing object. 
	// Adding name(other.name) initializes the new object's name with the existing object's name using a initializer list.
	// This can also be done using the assignment operator in the body of the constructor, but using an initializer list is more efficient.
	// It is only possible to call const methods within the copy constructor, as the object being copied is not yet fully constructed.

	void setName(string name) { this->name = name; }

	// This method is declared as const, meaning it does not modify the state of the object.
	void speak() const { cout << "My name is: " << name << endl; }
};

int main()
{
	Animal animal1;					// Create an instance of Animal
	animal1.setName("Bob");			// Set the name of the animal

	Animal animal2 = animal1;		// Copy construct a new Animal object from animal1. '=' calls the copy constructor.
	animal2.speak();				// Call speak on the copied animal
	animal2.setName("Alice");		// Change the name of the copied animal

	animal1.speak();				// Call speak on the original animal
	animal2.speak();				// Call speak on the copied animal

	Animal animal3(animal1);		// Another way to copy construct an Animal object. This uses the copy constructor directly.
	animal3.speak();				// Call speak on the newly copied animal

	return 0;
}


/* Notes:
 * Creating a copy of an object using the assignment operator does not call the constructor. Instead, it implicitly calls a copy constructor.
 * 
 * 
 */
