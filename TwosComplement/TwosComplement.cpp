// --------------------- Project Information ---------------------
// Project		: TwosComplement
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring twos complement in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

int main()
{
    char value = 127; // Maximum value a char can contain

    cout << (int)value << endl;

    value++; // Breaks limit for char

    cout << (int)value << endl; // Will yield the smallest value possible for char (-128, 0 takes up space on the positive side)
                                // This is due to modern computers using the two's complement system.

    return 0;
}

