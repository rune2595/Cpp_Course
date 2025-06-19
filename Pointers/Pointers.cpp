// --------------------- Project Information ---------------------
// Project		: Pointers
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring pointers in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

void manipulate1(double value)
{
	cout << "2. Value of int in manipulate: " << value << endl;
	value = 10.0;
	cout << "3. Value of int in manipulate: " << value << endl; // Output the value of the local variable
}

void manipulate2(double *value)
{
	cout << "5. Value of int in manipulate: " << *value << endl;
	*value = 10.0;
	cout << "6. Value of int in manipulate: " << *value << endl; // Output the value of the local variable
}


int main()
{
	// Memory allocated for an integer variable
	int nValue = 42; // Declare an integer variable

	// Pointer to the integer variable. 'p' prefix is a common convention for pointer variables.
	// '&' is used to get the address of the variable and should be read as memory address of VARIALBLE.
	int* pnValue = &nValue; // Pointer to the integer variable

	cout << "Value of nValue: " << nValue << endl; // Output the value of nValue
	cout << "Address of nValue: " << pnValue << endl; // Output the address of nValue

	// Dereferencing the pointer to get the value it points to.
	cout << "Int value via pointer: " << *pnValue << endl; // Output the address of nValue

	cout << "===========================" << endl; // Separator for clarity
	double dValue = 3.14; // Declare a double variable

	cout << "1. Value of dValue: " << dValue << endl;
	manipulate1(dValue); // Call the function to manipulate the value
	cout << "4. Value of dValue: " << dValue << endl;
	manipulate2(&dValue); // Call the function to manipulate the value
	cout << "7. Value of dValue: " << dValue << endl;

	// By dereferencing the pointer, we can access and modify the value it points to inside a function.

	return 0;
}

