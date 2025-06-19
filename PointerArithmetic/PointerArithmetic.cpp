// --------------------- Project Information ---------------------
// Project		: PointerArithmetic
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring pointer arithmetic in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
	const int NSTRINGS = 5;
	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts; // Pointer to the first element of the array

	// Addition and subtraction of pointers
	pTexts += 3;

	cout << *pTexts << endl;

	pTexts -= 2;

	cout << *pTexts << endl;

	// DO NOT READ OR WRITE THIS AS &texts[NSTRINGS] POINTS TO THE MEMORY AFTER THE LAST ELEMENT
	string* pEnd = &texts[NSTRINGS]; // Pointer to the last element of the array
	
	pTexts = &texts[0]; // Reset pointer to the first element

	while(pTexts != pEnd)
	{
		cout << *pTexts << endl;
		pTexts++;
	}

	pTexts = &texts[0]; // Reset pointer to the first element

	// Another way to get length of the array using pointer arithmetic.
	long elements = (long)(pEnd - pTexts);

	cout << elements << endl;

	pTexts = &texts[0]; // Reset pointer to the first element

	pTexts += NSTRINGS / 2; // Will point to element 2 (zero-based index)
	cout << *pTexts << endl;
	
	return 0;
}

