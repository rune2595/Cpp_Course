// --------------------- Project Information ---------------------
// Project		: ReversingaString
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring reversing strings in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
    	cout << "-------------------------" << endl;  // Print a separator line
	cout << "Reversing a string in C++ using while loop" << endl;  // Print the title of the program

	char text1[] = "hello, world!";

	int nChars1 = sizeof(text1) - 1;		// Calculate the number of characters in the string (-1 for null terminator)

	cout << nChars1 << endl;

	cout << "Original string: " << text1 << endl;  // Print the original string
	
	char *pStart1 = text1;  // Pointer to the start of the string
	char *pEnd1 = text1 + nChars1 - 1;  // Pointer to the end of the string (excluding null terminator)

	while (pStart1 < pEnd1)
	{
		char dummy1 = *pStart1;	// Store the character at the start pointer
		*pStart1 = *pEnd1;		// Swap the character at the start pointer with the character at the end pointer
		*pEnd1 = dummy1;			// Assign the stored character to the end pointer

		pStart1++;				// Move the start pointer forward
		pEnd1--;				// Move the end pointer backward
	}

	int nCharsAfter = sizeof(text1) - 1;  // Calculate the number of characters in the string after reversal
	cout << nCharsAfter << endl;  // Print the number of characters after reversal

	cout << "Reversed string: " << text1 << endl;  // Print the reversed string

	cout << "-------------------------" << endl;  // Print a separator line
	cout << "Reversing a string in C++ using for loop" << endl;  // Print the title of the program

	char text2[] = "hello, world!";

	int nChars2 = sizeof(text2) - 1;  // Calculate the number of characters in the string (-1 for null terminator)

	cout << nChars2 << endl;

	cout << "Original string: " << text2 << endl;  // Print the original string

	for(int i = 0; i < (nChars2)/2; i++)
	{
		char dummy2 = text2[i];  // Store the character at the current index
		text2[i] = text2[nChars2 - i -1];

		text2[nChars2 - i - 1] = dummy2;
	}

	int nCharsAfter2 = sizeof(text2) - 1;  // Calculate the number of characters in the string after reversal
	cout << nCharsAfter2 << endl;  // Print the number of characters after reversal

	cout << "Reversed string: " << text2 << endl;  // Print the reversed string

    return 0;
}

