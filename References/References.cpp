// --------------------- Project Information ---------------------
// Project		: References
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring references in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

void changeDouble(double &doubleValue)
{
	doubleValue = doubleValue / 2.3; // Change the value of the reference
}

void changeString(string &stringValue)
{
	stringValue = "Changed"; // Change the value of the reference
}

int main()
{
	double value = 10.0; // Original variable
	cout << "Original value: " << value << endl; // Print the original value

	changeDouble(value); // Pass the variable by reference
	cout << "Changed value: " << value << endl; // Print the changed value

	string text = "Original"; // Original string
	cout << "Original text: " << text << endl; // Print the original string

	changeString(text); // Pass the string by reference
	cout << "Changed text: " << text << endl; // Print the changed string

	return 0;
}

/* Notes:
 * Different from python, C++ does not modify the original when redefining a copy of the variable.
 * The '&' creates an alias for the original variable, meaning that any changes made to the reference will affect the original variable.
 */

