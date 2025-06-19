// ----------- File Information -----------
// File			: Person.cpp
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: Implementation of the Person class.
// ----------------------------------------

#include <sstream>
#include "Person.h"

Person::Person()
{
	name = "";
	age = 0;
}

// How do you differentiate between the variables in this constructor and the member variables?
// 'this' contains the memory location of the current object, and is used to access the member variables of the class.
Person::Person(string name, int age)
{
	this->name = name; // 'this' is used to refer to the member variable
	this->age = age;   // 'this' is a pointer to the current object

	cout << "Location of this object: " << this << endl;
}

string Person::getInfo()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
