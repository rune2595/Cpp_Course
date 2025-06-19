// --------------------- Project Information ---------------------
// Project		: CharArrays
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring char array in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
	char text[] = "hello";

	// sizeof returns 6 instead of 5 because it counts the null terminator '\0' at the end of the string.
	// The null terminator is automatically added by the compiler when you use double quotes for a string literal.
	for(int i = 0; i<sizeof(text); i++)
	{
		cout << i << ": " << text[i] << endl;
	}
	cout << endl;

	int k = 0;

	while (true)
	{
		if(text[k] == 0) // Check for the null terminator to avoid going out of bounds
		{
			break; // Exit the loop if we reach the end of the string
		}
		cout << text[k] << flush;

		k++;
	}


	return 0;
}

