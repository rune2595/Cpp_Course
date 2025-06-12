// --------------------- Project Information ---------------------
// Project		: Strings
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring string output in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

// Initialize main function
int main()
{
	string text1 = "Hello, this is a string! ";		// Example string
	string text2 = "More text can be added here.";	// Another string
	string text3 = text1 + text2;					// Concatenate text1 and text2

	cout << text1 << text2 << endl;					// Output text to the console
	cout << text3 << endl;							// Output the concatenated string

	return 0; // Return 0 to indicate successful completion
}

