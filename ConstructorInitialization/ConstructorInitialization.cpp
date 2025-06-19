// --------------------- Project Information ---------------------
// Project		: ConstructorInitialization
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring constructor initialization in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person person1;
	Person person2("Alice", 30);
	Person person3("Bob", 25);

	cout << person1.getInfo() << endl;
	cout << person2.getInfo() << endl;
	cout << person3.getInfo() << endl;

	return 0;
}


// &person1, &person2, &person3 are used to print the memory addresses of the objects.
