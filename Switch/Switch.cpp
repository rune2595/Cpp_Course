// --------------------- Project Information ---------------------
// Project		: Switch
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring switches in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	int value = 0;

	cout << "Enter a value between 1 and 5: " << flush;
	cin >> value;

	// Switch statement to handle different cases based on the value
	switch(value)
	{
		case 1:
			cout << "Value is 1." << endl;
			break;
		case 2:
			cout << "Value is 2." << endl;
			break;
		case 3:
			cout << "Value is 3." << endl;
			break;
		case 4:
			cout << "Value is 4." << endl;
			break;
		case 5:
			cout << "Value is 5." << endl;
			break;
		default:
			cout << "Value is not between 1 and 5" << endl;
			break;
	}

	return 0;
}