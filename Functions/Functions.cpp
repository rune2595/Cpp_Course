// --------------------- Project Information ---------------------
// Project		: Functions
// Author		: Rune Dirk Willén
// Date			: 16-06-2025
// Description	: A simple program exploring functions, returning, and parameters in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

// Function prototypes (if needed) can be declared here
void displayMenu()	// Function to display the menu options
{
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Add Record" << endl;
	cout << "4. Delete Record" << endl;
	cout << "5. Update Record" << endl;
	cout << "6. Exit" << endl;
}
int getUserInput() // Function to get user input
{
	cout << "Enter Selection: " << flush;

	int input = 0;	// Variable to store user input
	cin >> input;

	return input;	// Return the user input
}
void processInput(int input)	// Function to process the user input
{
	// Switch statement to handle different cases based on the value
	switch(input)
	{
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Adding..." << endl;
		break;
	case 4:
		cout << "Deleting..." << endl;
		break;
	case 5:
		cout << "Updating..." << endl;
		break;
	case 6:
		cout << "Exiting..." << endl;
		break;
	default:
		cout << "Invalid input!" << endl;
		break;
	}
}
void endProgram()	// Function to end the program
{
	cout << "Thank you for using the program!" << endl;	// Thank the user
	cout << "Program has been succesfully divided into functions." << endl;
}
// As opposed to Matlab, functions are defined before the main function in C++.
// Void functions are used to perform actions without returning a value, while functions that return a value (i.e., int, float, etc.) can be used to compute and return results.

int main()
{
	displayMenu();					// Call the function to display the menu

	int selection =	getUserInput();	// Call the function to get user input

	processInput(selection);		// Call the function to process the input

	endProgram();					// Call the function to end the program

	return 0;
}