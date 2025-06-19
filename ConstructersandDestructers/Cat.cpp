// ----------- File Information -----------
// File			: Cat.cpp
// Author		: Rune Dirk Willén
// Date			: 17-06-2025
// Description	: Implementation of the Cat class.
// ----------------------------------------


#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat() // Cat constructor
{
	cout << "Cat constructor called." << endl;
	isHappy = true; // Default state
	cout << "Cat created!" << endl;
}

Cat::~Cat() // Cat destructor
{
	cout << "Cat destructor called." << endl;
	cout << "Cat destroyed!" << endl;
}

void Cat::speak()
{
	if (isHappy)
	{
		cout << "Meow!" << endl;
	}
	else
	{
		cout << "Hiss!" << endl;
	}
}
