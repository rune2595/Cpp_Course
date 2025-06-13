// --------------------- Project Information ---------------------
// Project		: WhileLoops
// Author		: Rune Dirk Willén
// Date			: 13-06-2025
// Description	: A simple program exploring while loops in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

int main()
{
	int maxIter = 5;																				// Variable to hold the maximum number of iterations
	cout << "While Loop Example. How many times should I print 'Hello!'? (Default is 5) " << flush;	// Print a message to the console
	cin >> maxIter;																					// Read the maximum number of iterations from user input

	int i = 0;																						// Initialize a counter variable

	while(i < maxIter)
	{
		cout << i+1 << ". Hello!" << endl;
		
		i++;																						// Increment the counter variable by 1
	}

	cout << "Loop finished! 'Hello' printed " << i << " times." << endl;							// Indicate that the loop has finished and number of iterations

	return 0;
}

