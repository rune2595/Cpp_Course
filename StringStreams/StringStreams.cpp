// --------------------- Project Information ---------------------
// Project		: StringStreams
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring string streams in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string helloWorld = "Hello World!";
	int method = 2;

	stringstream ss;

	ss << "This prints '";
	ss << helloWorld;
	ss << "' using a ";
	ss << method;
	ss << "nd method of concatenation.\n";
	ss << "Interestingly, the number '";
	ss << method;
	ss << "' is declared as an integer, but it is converted to a string automatically.";
	
	string HelloWorld = ss.str(); // Convert the stringstream to a string

	cout << HelloWorld << endl; // Output the concatenated string

	return 0;
}

// String streams let you concatenate strings and other data types easily.
// Streams in programming are used to read and write data in a sequential manner.