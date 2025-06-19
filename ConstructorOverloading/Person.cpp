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
	cout << "Default constructor called." << endl;
	
	name = "Undefined";
	age = 0;
}

Person::Person(string newName)
{
	cout << "Constructor with name called." << endl;

	name = newName;
	age = 0;
}

Person::Person(string newName, int newAge)
{
	cout << "Constructor with name and age called." << endl;

	name = newName; 
	age = newAge;
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
