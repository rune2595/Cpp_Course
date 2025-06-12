// --------------------- Project Information ---------------------
// Project		: OutputtingText
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program to output text to the console.
// ---------------------------------------------------------------

#include <iostream>				// Include the iostream header for input/output operations
using namespace std;			// Use the standard namespace to avoid prefixing std::

int main()						// Main function where the program execution starts
{
	cout << "Starting program..." << flush;								// Output the string "Starting program..." and flush the output buffer (i.e., no newline yet)
	cout << "STRING" << endl;											// Output the string "STRING" followed by a newline
	cout << "ANOTHER STRING" << endl;									// Output another string "ANOTHER STRING" followed by a newline
	cout << "Fruits:" << "Banana, " << "Apple, " << "Orange." << endl;	// Output a list of fruits in a single line
	return 0;															// Return 0 to indicate successful execution
}
