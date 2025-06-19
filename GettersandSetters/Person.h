// ----------- File Information -----------
// File			: Person.h
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: Header file for person class.
// ----------------------------------------

#pragma once

// Needed for string class
#include <iostream>
using namespace std;


class Person
{
private:
	string name;
	int age;

public:
	Person();
	string details();
	void setName(string newName);
	string getName();
	void setAge(int newAge);
	int getAge();
};

