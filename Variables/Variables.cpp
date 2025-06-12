// --------------------- Project Information ---------------------
// Project		: Variables
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring the use of variables in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

// Initialize main function
int main()
{
    
	int numberCats = 5; // Declare and initialize an integer variable
	int numberDogs = 3; // Declare and initialize another integer variable

	cout << "I have " << numberCats << " cats." << endl;						// Output information to the console
	cout << "I have " << numberDogs << " dogs." << endl;						// Output more information to the console
	cout << "In total, I have " << numberCats + numberDogs << " pets." << endl;	// Output the total number of pets

	cout << "New dog aquired!" << endl;											// Output a message indicating a new dog has been acquired
	numberDogs++;																// Increment the number of dogs by 1

	cout << "Now I have " << numberDogs << " dogs." << endl;					// Output the updated number of dogs

	return 0; // Return 0 to indicate successful execution of the program
}
