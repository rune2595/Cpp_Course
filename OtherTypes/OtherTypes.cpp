// --------------------- Project Information ---------------------
// Project		: OtherTypes
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring other types in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	bool bValue = true; // Boolean type
	cout << "Boolean value: " << bValue << endl;

	char cValue1 = 55; // Character type
	cout << "Character value: " << cValue1 << endl;
	char cValue2 = 'g'; // Character type
	cout << "Character value: " << cValue2 << endl;
	// Note: The value 55 corresponds to '7' in ASCII. 'char' is typically used for single characters and is built on the ASCII table.
	// Putting (int)cValue converts the character to its ASCII integer value for display.
	// The size of 'char' is 1 byte, which can hold values from -128 to 127 in signed form or 0 to 255 in unsigned form.

	wchar_t wValue = 'i'; // Wide character type
	cout << "Wide character value: " << (char)wValue << endl;
	// Note: 'wchar_t' is used for wide characters, which can represent a larger set of characters than 'char'.
	// The size of 'wchar_t' is typically 2 bytes, allowing it to hold a wider range of characters, including Unicode characters.

	return 0;
}

