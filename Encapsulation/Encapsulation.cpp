// --------------------- Project Information ---------------------
// Project		: Encapsulation
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring encapsulation in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

class Frog
{
private:
    string name;

private:
    string getName() { return name;  }

public:
    Frog(string name) : name(name) {}
    void identify() { cout << "Hi, I am " << getName() << " the frog." << endl; }
};


int main()
{
    Frog frog("Kaj");
    frog.identify();

    return 0;
}

/* Notes:
 * Make everything private if possible! Ensures no user interference.
 */
