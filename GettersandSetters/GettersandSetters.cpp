// --------------------- Project Information ---------------------
// Project		: GettersandSetters
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring getters and setters in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1;

	person1.setName("John Doe");
	person1.setAge(41);

	cout << person1.details() << endl;

	cout << "Name: " << person1.getName() << endl;
	cout << "Age: " << person1.getAge() << endl;

    return 0;
}

// Best to avoid getters and setters in C++ unless necessary, as they might be stored differently.