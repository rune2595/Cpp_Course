// --------------------- Project Information ---------------------
// Project		: ConstructorOverloading
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring constructer overloading in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Person.h"
using namespace std;

int main()
{

	Person person1;
	cout << person1.getInfo() << endl;

	Person person2("Bob");
	cout << person2.getInfo() << endl;

	Person person3("Alice", 30);
	cout << person3.getInfo() << endl;

	return 0;
}

