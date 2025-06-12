// --------------------- Project Information ---------------------
// Project		: UserInput
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring user input in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter your name: " << flush;			// Prompt the user for name
	string inputName;								// Declare a string variable to hold user input
	cin >> inputName;								// Read user input from standard input (cin is the extraction operator)
	cout << "You entered: " << inputName << endl;	// Output the user's name

	cout << "Enter your age: " << flush;			// Prompt the user for age
	int inputAge;									// Declare an integer variable to hold user input for age
	cin >> inputAge;								// Read user input for age
	cout << "You entered: " << inputAge << endl;	// Output the user's age

	return 0; // Return 0 to indicate successful execution
}
