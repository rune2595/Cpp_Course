// --------------------- Project Information ---------------------
// Project		: IfElse
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring else statements in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Please enter your choice: " << flush;
	int userChoice = 0;
	cin >> userChoice;
	bool adminRights = false;

	if (userChoice < 3 && !adminRights)
	{
		cout << "Admin rights missing!" << endl;
	}
	else if (userChoice == 1)
	{
		cout << "Adding new record..." << endl;
	}
	else if (userChoice == 2)
	{
		cout << "Deleting record..." << endl;
	}
	else if (userChoice == 3)
	{
		cout << "Viewing record..." << endl;
	}
	else if (userChoice == 4)
	{
		cout << "Searching record..." << endl;
	}
	else if (userChoice == 5)
	{
		cout << "Quitting program..." << endl;
	}
	else
	{
		cout << "Invalid choice." << endl;
	}

	return 0;
}