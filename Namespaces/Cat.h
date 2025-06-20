// --------------------- Information ---------------------
// File			: Cat.h
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A header file for class 'Cat'.
// -------------------------------------------------------

#pragma once
#include <iostream>
using namespace std;

namespace cats
{

const string CATNAME = "Freddy";

class Cat
{
public:

	Cat();
	virtual ~Cat();
	void speak();
};

}

