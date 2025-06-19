// --------------------- Project Information ---------------------
// Project		: ThisKeyword
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring "This" keyword in C++.
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

	cout << person1.getInfo() << ", memory location: " << &person1 << endl;
	cout << person2.getInfo() << ", memory location: " << &person2 << endl;
	cout << person3.getInfo() << ", memory location: " << &person3 << endl;

	return 0;
}


// &person1, &person2, &person3 are used to print the memory addresses of the objects.
