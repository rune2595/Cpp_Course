// --------------------- Project Information ---------------------
// Project		: Classes
// Author		: Rune Dirk Willén
// Date			: 16-06-2025
// Description	: A simple program exploring classes in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
	Cat cat1;		// Create an instance of the Cat class

	cat1.speak();	// Call the speak method on the cat1 instance
	cat1.jump();	// Call the jump method on the cat1 instance

	return 0;
}


// The function prototype for speak is declared in the header file "Cat.h".
