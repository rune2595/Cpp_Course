// --------------------- Project Information ---------------------
// Project		: MultiDimensionalArrays
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring multi-dimensional arrays in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	int table[10][10]; // Declare a 2D array with 10 rows and 10 columns

	for(int i = 0; i < 10; i++) // Loop through each row
	{
		for (int j = 0; j < 10; j++) // Loop through each column
		{
			table[i][j] = (i+1) * (j+1); // Assign the product of the indices to the array element
		}
	}

	// Output the contents of the 2D array
	cout << "Multiplication Table (10x10):" << endl;
	cout << "=============================" << endl;
	

	for(int i = 0; i < 10; i++) // Loop through each row
	{
		for (int j = 0; j < 10; j++) // Loop through each column
		{
			cout << table[i][j] << "\t"; // Print the element with a tab space
		}
		cout << endl; // New line after each row
	}


	return 0;
}