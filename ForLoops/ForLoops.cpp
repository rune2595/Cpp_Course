// --------------------- Project Information ---------------------
// Project		: ForLoops
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring for loops in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	cout << "How many iterations do you want to run? " << flush;
	int iterations = 1;
	cin >> iterations;

	for(int i=0; i<iterations; i++)
	{
		cout << "Iteration: " << i + 1 << endl;
	}

	cout << "All iterations completed!" << endl;

	return 0;
}