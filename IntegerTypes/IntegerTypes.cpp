// --------------------- Project Information ---------------------
// Project		: IntegerTypes
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring integer types in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	int value = 54656;														// Declare an integer variable
	cout << "Value: " << value << endl;										// Output the value

	cout << "Max int value: " << INT_MAX << endl;							// Output the maximum value of an integer
	cout << "Min int value: " << INT_MIN << endl;							// Output the minimum value of an integer
	cout << "Max long int value: " << LONG_MAX << endl;						// Output the maximum value of a long integer
	cout << "Max short int value: " << SHRT_MAX << endl;					// Output the maximum value of a short integer
	
	long int longIntValue = 3147483647;										// Declare a long integer variable
	cout << "Long int value: " << longIntValue << endl;						// Output the long integer value

	short int shortValue = 32767;											// Declare a short integer variable
	cout << "Short int value: " << shortValue << endl;						// Output the short integer value

	cout << "Size of int: " << sizeof(int) << "bytes." << endl;				// Output the size of an integer
	cout << "Size of short int: " << sizeof(short int) << "bytes." << endl;	// Output the size of a short integer
	cout << "Size of long int: " << sizeof(long int) << "bytes." << endl;	// Output the size of a long integer

	unsigned int unsignedValue = 4294967295;								// Declare an unsigned integer variable
	cout << "Unsigned int value: " << unsignedValue << endl;				// Output the unsigned integer value

	// Apparently, the size of an integer can vary between systems. On this particular system, int and long int are the same size.
	// Unsigned integers can hold larger values than signed integers, but they cannot represent negative values. 
	// This is due to the sign NOT taking up a bit in the representation of the number.
}

