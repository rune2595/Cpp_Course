// --------------------- Project Information ---------------------
// Project		: ComparingFloats
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring float comparison in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <iomanip> // For std::setprecision if needed
using namespace std;

int main()
{
	float value1 = 1.1; // First float value

	if (value1 < 1.11) // Compare with a float literal
	{
		cout << "TRUE!" << endl; // Output if equal
	}
	else
	{
		cout << "FALSE!" << endl; // Output if not equal
	}

	cout << setprecision(10) << value1 << endl; // Set precision for output

	// Note: The comparison may not work as expected due to floating-point precision issues.
	// It is generally recommended to use a tolerance value for float comparisons.

	return 0;
}