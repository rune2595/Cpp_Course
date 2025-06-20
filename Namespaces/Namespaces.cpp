// --------------------- Project Information ---------------------
// Project		: Namespaces
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring namespaces in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include "Cat.h"
#include "Cat2.h"
using namespace std;

// It is possible to define a default namespace
using namespace cats;

int main()
{
    // Using class 'Cat' from two different namespaces. Functions belonging to the object will automatically know the correct namespace to use.

    Cat cat1;
    cat1.speak();

    cats::Cat cat2;
    cat2.speak();

    rdw::Cat cat3;
    cat3.speak();

    cout << CATNAME << endl;
    cout << cats::CATNAME << endl;
    cout << rdw::CATNAME << endl;

    return 0;
}
