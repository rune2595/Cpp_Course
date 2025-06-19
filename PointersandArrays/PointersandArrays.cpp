// --------------------- Project Information ---------------------
// Project		: PointersandArrays
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring pointers and arrays in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
	string numbers[] = { "one", "two", "three", "four", "five" };
	cout << sizeof(numbers) / sizeof(string) << " elements in the array." << endl;
	int numbersSize = sizeof(numbers) / sizeof(string);

	// The pointer only knows that it points to a string, not the amount of strings in the array.
	string *pNumbers = numbers;

	for(int i = 0; i < numbersSize; i++)
	{
		cout << numbers[i] << " " << flush;
	}
	cout << endl;

	cout << "Elements via pointer: " << flush;
	for (int i = 0; i < numbersSize; i++)
	{
		cout << pNumbers[i] << " " << flush;
	}
	cout << endl;

	cout << "Elements via pointer dereferencing (wrong way): " << flush;
	// The pointer only knows the first value...
	for (int i = 0; i < numbersSize; i++)
	{
		cout << *pNumbers << " " << flush;
	}
	cout << endl;

	cout << "Elements via pointer dereferencing (right way): " << flush;
	for (int i = 0; i < numbersSize; i++, pNumbers++)
	{
		cout << *pNumbers << " " << flush;
	}
	cout << endl;

	string *pElement = &numbers[0];
	// [] operator has a higher precedence than the * operator, so it will be evaluated first.
	string* pEnd = &numbers[numbersSize-1];

	while (true)
	{
		cout << *pElement << " " << flush;
		
		if(pElement == pEnd)
		{
			break;
		}
		pElement++;
	}


	return 0;
}

