// --------------------- Project Information ---------------------
// Project		: ConstructersandDestructers
// Author		: Rune Dirk Willén
// Date			: 17-06-2025
// Description	: A simple program exploring constructors and destructors in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
	cout << "Starting program..." << endl;

	{ // Create a new scope for Garfield
		Cat Garfield;		// Create an instance of Cat
		Garfield.speak();	// Call the speak method
	} // Garfield goes out of scope here, and the destructor will be called

	cout << "Ending program..." << endl;
	
	return 0;
}

// The destructor will be called automatically when Garfield goes out of scope, i.e., at the end of main{}, after the program ends.
// This can be changed by adding curly braces around the Garfield object, which will create a new scope. The destructor will then be called at the end of that scope instead of at the end of main{}.
