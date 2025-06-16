// --------------------- Project Information ---------------------
// Project		: DataMembers
// Author		: Rune Dirk Willén
// Date			: 16-06-2025
// Description	: A simple program exploring data members in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
	Cat Garfield;			// Create an instance of Cat
	Garfield.makeHappy();	// Call the makeHappy function
	Garfield.meow();		// Call the meow function

	Cat Bob;				// Create another instance of Cat
	Bob.makeSad();			// Call the makeSad function
	Bob.meow();				// Call the meow function


	return 0;
}

