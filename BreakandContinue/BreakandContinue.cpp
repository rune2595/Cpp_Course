// --------------------- Project Information ---------------------
// Project		: BreakandContinue
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring 'break' and 'continue' in loops in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	// Example of using 'break' in a loop
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "iteration: " << i + 1 << endl;

	//	if(i == 3)
	//	{
	//		break; // exit the loop when i equals 3
	//	}

	//	cout << "looping..." << endl;
	//}

	// Example of using 'continue' in a loop
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Iteration: " << i + 1 << endl;

	//	if (i == 3)
	//	{
	//		continue; // skip the rest of the loop when i equals 3
	//	}

	//	cout << "Looping..." << endl;
	//}

	const string password = "hello";				// Define the correct password

	string input;									// Declare a string variable to hold user input

	do
	{
		cout << "Enter password: " << flush;		// Prompt user for input
		cin >> input;								// Read user input

		if(input == password)
		{
			break;
		}
		else
		{
			cout << "Password incorrect!" << endl;	// If input does not match, print error message
		}
	} while(true);

	cout << "Password accepted!" << endl;			// If it matches, print access granted
	cout << "Loop terminated." << endl;

	return 0;
}