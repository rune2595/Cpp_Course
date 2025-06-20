// --------------------- Project Information ---------------------
// Project		: Static
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring static class members in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;


// Normally sone in header file (.h)
class Test
{
public:
    static int const MAX = 99;

private:
    int id;
    static int count;

public:
    Test() { id = ++count; } // ++ added as prefix to increment before using value, as a suffix the increment happens after use.
    int getId() { return id; }
    static void showInfo() { cout << count << endl; } // Static methods can only handle other static types
    
};

// Functions and variables are normally declared in .cpp file
int Test::count = 0;


int main()
{
    
    cout << Test::MAX << endl;
    Test::showInfo();

    Test test1;
    cout << "Object 1 ID: " << test1.getId() << endl;
    Test::showInfo();
    

    Test test2;
    cout << "Object 2 ID: " << test2.getId() << endl;
    Test::showInfo();

    return 0;
}

/* Notes:
 * Declaring a variable as static will make it const for all objects created from the class 
 * 
 */



