// ----------- File Information -----------
// File			: Cat.cpp
// Author		: Rune Dirk Willén
// Date			: 16-06-2025
// Description	: Implementation of the Cat class.
// ----------------------------------------


#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::meow()
{
	if (happy)
	{
		cout << "Meow!" << endl;
	}
	else
	{
		cout << "Hiss!" << endl;
	}
}

void Cat::makeHappy()
{
	happy = true;
}

void Cat::makeSad()
{
	happy = false;
}
