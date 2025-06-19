// ----------- File Information -----------
// File			: Person.cpp
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: Implementation of the Person class.
// ----------------------------------------

#include <sstream>
#include "Person.h"

string Person::getInfo()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
