// --------------------- Project Information ---------------------
// Project		: DoWhileLoops
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring do-while loops in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	const string password = "hello";				// Define the correct password
	
	string input;									// Declare a string variable to hold user input

	do
	{
		cout << "Enter password: " << flush;		// Prompt user for input
		cin >> input;								// Read user input

		if(input != password)
		{
			cout << "Password incorrect!" << endl;	// If input does not match, print error message
		}

	} while(input != password);

	cout << "Password accepted!" << endl;			// If it matches, print access granted


	// Using 'const' ensures that variable cannot be changed in the program.
	// Using a traditional while loop leads to repeated prompts until the correct password is entered.
	// The do-while loop ensures that the user is prompted at least once and no code is repeated unnecessarily.

	return 0;
}

