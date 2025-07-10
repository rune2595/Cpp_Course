// --------------------- Project Information ---------------------
// Project		: BitwiseComparison
// Author		: Rune Dirk Willén
// Date			: 10-07-2025
// Description	: A simple program exploring bitwise comparison
//                operations in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
	int color = 0x123456; // Example color in hexadecimal

	unsigned char red = (color & 0xFF0000) >> 16;   // Extract red component
	unsigned char green = (color & 0x00FF00) >> 8; // Extract green component
	unsigned char blue = (color & 0x0000FF);      // Extract blue component

	cout << "Red\t: " << hex << (int)red << endl;
	cout << "Green\t: " << hex << (int)green << endl;
	cout << "Blue\t: " << hex << (int)blue << endl;

	// Simplified bitwise operations
	unsigned char red2 = color >> 16; // Extract red component
	unsigned char green2 = color >> 8;  // Extract green component
	unsigned char blue2 = color;         // Extract blue component

	cout << "Red2\t: " << hex << (int)red2 << endl;
	cout << "Green2\t: " << hex << (int)green2 << endl;
	cout << "Blue2\t: " << hex << (int)blue2 << endl;


	// Bitwise and: &
	// color	: 1001101010101010100011100101
	// mask		: 1111111100000000000000000000
	// result	: 1001101000000000000000000000

	// Bitwise or: |
	// color	: 1001101010101010100011100101
	// mask		: 1111111100000000000000000000
	// result	: 1111111110101010100011100101

	return 0;
}

