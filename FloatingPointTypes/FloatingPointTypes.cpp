// --------------------- Project Information ---------------------
// Project		: FloatingPointTypes
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program to explore floating point types in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <iomanip> // For std::setprecision if needed

using namespace std;

// Initialize main function
int main()
{
	float fValue = 123.456789; // Single precision floating point
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Single precision floating point value: " << setprecision(20) << fixed << fValue << endl;
	// Can output value in scientific notation or fixed notation. 
	// Sometimes it switches to scientific notation automatically if the value is too large or too small.
	// To control the precision, you can use std::setprecision with fixed or scientific if needed.

	double dValue = 123.456789; // Double precision floating point
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Double precision floating point value: " << setprecision(20) << fixed << dValue << endl;
	// Double is typically used for more precision than float.

	long double ldValue = 123.456789876543210; // Extended precision floating point (if supported)
	cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
	cout << "Long double precision floating point value: " << setprecision(20) << fixed << ldValue << endl;

	return 0;
}

