// ----------- File Information -----------
// File			: Person.cpp
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: Implementation of the person class.
// ----------------------------------------


#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


Person::Person()
{
	name = "George";
	age = 30;
}

string Person::details()
{
	return "This person is called " + name + " and he is " + to_string(age) + " years old.";
}

void Person::setName(string newName)
{
	name = newName;
}

void Person::setAge(int newAge)
{
	if (newAge >= 0) // Ensure age is not negative
	{
		age = newAge;
	}
	else
	{
		cout << "Age cannot be negative." << endl;
	}
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}