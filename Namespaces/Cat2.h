// --------------------- Information ---------------------
// File			: Cat2.h
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A header file for class 'Cat' as part of a namespace.
// -------------------------------------------------------

#pragma once
#include <iostream>
using namespace std;

namespace rdw
{

const string CATNAME = "Garfield";

class Cat
{

public:
	Cat();
	virtual ~Cat();
	void speak();
};

}

