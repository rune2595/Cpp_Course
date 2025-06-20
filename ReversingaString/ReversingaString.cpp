// --------------------- Project Information ---------------------
// Project		: ReversingaString
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring reversing strings in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

void reverseStringWhile(char *charArray, int charArrayLength)	// Function to reverse a character array using a while loop
{																// Void is used as the function modifies the memory address of the character array
	
	cout << "Character array to modify: " << charArray << endl;	// Print the character array passed to the function
	
	char *pStart = charArray;									// Pointer to the start of the character array
	char *pEnd = charArray + charArrayLength - 1;				// Pointer to the end of the character array (pointer size, not actual length)
	
	while (pStart < pEnd)
	{
		char dummy = *pStart;									// Store the character at the start pointer
		*pStart = *pEnd;										// Swap the character at the start pointer with the character at the end pointer
		*pEnd = dummy;											// Assign the stored character to the end pointer

		pStart++;												// Move the start pointer forward
		pEnd--;													// Move the end pointer backward
	}
}

void reverseStringFor(char* charArray, int charArrayLength)		// Function to reverse a character array using a for loop
{																// Void is used as the function modifies the memory address of the character array
	
	cout << "Character array to modify: " << charArray << endl;	// Print the character array passed to the function

	for (int i = 0; i < (charArrayLength)/2; i++)
	{
		char dummy = charArray[i];								// Store the character at the current index
		charArray[i] = charArray[charArrayLength - i - 1];		// Swap the character at the current index with the character at the corresponding index from the end
		charArray[charArrayLength - i - 1] = dummy;				// Assign the stored character to the corresponding index from the end
	}
}


int main()
{
    cout << "==========================================" << endl;	// Print a separator line
	cout << "Reversing a string in C++ using while loop" << endl;	// Print the title of the program
	cout << "------------------------------------------" << endl;	// Print a separator line

	char text[] = "hello, world!";									// Declare a character array with a string
	cout << "Original string: " << text << endl;					// Print the original string

	int nChars = sizeof(text) - 1;									// Calculate the number of characters in the string (-1 for null terminator)

	reverseStringWhile(text, nChars);								// Reverse the string using the while loop function

	int nCharsAfter = sizeof(text) - 1;								// Check the number of characters after reversal
	cout << nCharsAfter << endl;									// Print the number of characters after reversal

	cout << "Reversed string: " << text << endl;					// Print the reversed string

	cout << "========================================" << endl;		// Print a separator line
	cout << "Reversing a string in C++ using for loop" << endl;		// Print the title of the program
	cout << "----------------------------------------" << endl;		// Print a separator line

	reverseStringFor(text, nChars);									// Reverse the string using the for loop function

	cout << "Reversing back using for loop: " << text << endl;		// Print the reversed string after using the for loop

    return 0;
}

