// --------------------- Project Information ---------------------
// Project		: HeadersandPrototypes
// Author		: Rune Dirk Will�n
// Date			: 16-06-2025
// Description	: A simple program exploring headers and prototypes in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "utils.h"		// Include a header file for utility functions	
using namespace std;



int main()
{
	doSomething(); // Call the function defined above
	doSomething(); // Call the function again to demonstrate reusability

	return 0;
}


void doSomething() // Function definition
{
	cout << "Doing something!" << endl;
}
