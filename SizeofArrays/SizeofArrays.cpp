// --------------------- Project Information ---------------------
// Project		: SizeofArrays
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring size of arrays in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	int values[] = {1, 2, 3, 4};

	cout << "Size of values array: " << sizeof(values) << " bytes" << endl;
	cout << "Size of one int: " << sizeof(int) << " bytes" << endl;

	for(int i = 0; i < sizeof(values)/sizeof(int); i++)
	{
		cout << values[i] << " " << flush;
	}

	cout << endl;

	// Apparetly, sizeof(values) returns the size of the entire array in bytes, not the number of elements.
	// To get the number of elements, we divide the total size by the size of one element.
	// That seems stupid, but it is how it works in C++.

	return 0;
}