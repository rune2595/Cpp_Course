// --------------------- Project Information ---------------------
// Project		: SizeofMultiDimArrays
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring size of multi-dimensional arrays in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	int values[][3] = 
	{ 
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << "Size of values array: " << sizeof(values) << " bytes" << endl;
	cout << "Size of row in values array: " << sizeof(values[0]) << " bytes" << endl;
	cout << "Size of one int: " << sizeof(int) << " bytes" << endl;

	for (int i = 0; i < sizeof(values)/sizeof(values[0]); i++)
	{	
		for(int j = 0; j < sizeof(values[0])/sizeof(int); j++)
		{
			cout << values[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}