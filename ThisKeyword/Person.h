// ----------- File Information -----------
// File			: Person.h
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: Header file for the Person class.
// ----------------------------------------

#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person();
	Person(string name, int age);
	string getInfo();
};

