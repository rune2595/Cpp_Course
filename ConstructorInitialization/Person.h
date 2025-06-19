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
	// Using an initializer list is more efficient for initializing member variables through 'this' pointer.
	// The initializer list can also be defined in the .cpp file.
	// Since the code is simple, we can define it directly in the header file.
	// This is the inline definition of the constructor. Only constructor definitions can be inline.
	Person(): name("Undefined"), age(0) {};
	Person(string name, int age) : name(name), age(age) {};

	string getInfo();
};
