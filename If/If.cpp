// --------------------- Project Information ---------------------
// Project		: If
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring if statements in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	string password = "password123";			// Define a password
	cout << "Enter the password: " << flush;	// Prompt user for input

	string userInput;							// Variable to store user input
	cin >> userInput;							// Read user input

	if (userInput == password)					// Check if input matches the password
	{
		cout << "Access granted." << endl;		// If it matches, grant access
	} 
	else										// If it does not match
	{
		cout << "Access denied." << endl;		// Deny access
	}

	return 0;
}