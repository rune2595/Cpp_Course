// --------------------- Project Information ---------------------
// Project		: ArraysandFunctions
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring arrays and functions in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

void show1(const int nElements, string texts[])
{
    cout << "Running show1." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << texts[i] << endl;
    }
}

// Equivalent to show1
void show2(const int nElements, string *texts)
{
    cout << "Running show2." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << texts[i] << endl;
    }
}

// Only works for arrays of a specific length (in this case 3).
void show3(string (&texts)[3])
{
    cout << "Running show3." << endl;
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++)
    {
        cout << texts[i] << endl;
    }
}


int main()
{
    
    string texts[] = { "apple", "orange", "banana" };

    int lengthTexts = sizeof(texts) / sizeof(string);

    show1(lengthTexts, texts);

    show2(lengthTexts, texts);

    show3(texts);


    return 0;
}
