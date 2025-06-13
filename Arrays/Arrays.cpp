// --------------------- Project Information ---------------------
// Project		: Arrays
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring arrays in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	// Initialize an array of integers
	cout << "Array of integers" << endl;
	cout << "-----------------" << endl;
	
	int values[3];																	// Declare an array of integers with 3 elements

	values[0] = 10;																	// Assign value to the first element
	values[1] = 20;																	// Assign value to the second element
	values[2] = 30;																	// Assign value to the third element

	cout << "The first value is\t: " << values[0] << endl;							// Output the first element
	cout << "The second value is\t: " << values[1] << endl;							// Output the second element
	cout << "The third value is\t: " << values[2] << endl;							// Output the third element

	// Declare and initialize an array of doubles
	cout << endl << "Array of doubles" << endl;
	cout << "----------------" << endl;

	double numbers[4] = {4.5, 2.3 ,7.2, 8.1};										// Declare an array of doubles with 4 elements

	for(int i = 0; i < 4; i++) {													// Loop through the array
		cout << "The value at index " << i << " is\t: " << numbers[i] << endl;		// Output each element
	}

	// Initialize an array with 0 values
	cout << endl << "Initializing an array with 0 values" << endl;
	cout << "-----------------------------------" << endl;

	int numberArray[5] = {};														// Declare an array of integers with 5 elements, initialized to 0

	for (int i = 0; i < 5; i++) {													// Loop through the array
		cout << "The value at index " << i << " is\t: " << numberArray[i] << endl;	// Output each element
	}

	// Initialize array of strings
	cout << endl << "Initializing an array with strings" << endl;
	cout << "----------------------------------" << endl;

	string names[] = { "Alice", "Bob", "Charlie" };									// Declare an array of strings with 3 elements

	for (int i = 0; i < 3; i++) {													// Loop through the array
		cout << "The name of person " << i+1 << " is\t: " << names[i] << endl;		// Output each element
	}

	// Displaying the 12 times table
	cout << endl << "Displaying the 12 times table" << endl;
	cout << "-----------------------------" << endl;
	
	int table12[13];																// Declare an array to hold the 12 times table
	for(int i = 0; i < 13; i++) 
	{
		table12[i] = 12 * i;														// Calculate the 12 times table
	}

	for(int i = 0; i < 13; i++) 
	{
		cout << "12 * " << i << "\t= " << table12[i] << endl;						// Output the 12 times table
	}


	// c++ does not stop you from using an array out of bounds, but it is undefined behavior.
	// This is a bad practice and should be avoided as it can lead to bugs and crashes.
	// Always ensure you access elements within the bounds of the array and make necessary checks.

	return 0;
}
