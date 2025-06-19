// --------------------- Project Information ---------------------
// Project		: Arithmetic
// Author		: Rune Dirk Willén
// Date			: 19-06-2025
// Description	: A simple program exploring arithmetic in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precedence
 */

// c++ does not do floating point division by default for integers. One number must be a float or double for it to do floating point division.
// A way to circumvent this is to cast one of the numbers to a float or double, like this: (float)num1 / num2 or static_cast<float>(num1) / num2

int main()
{
	double value1 = 7/2; // Integer division, result will be 3
	cout << "Integer division: " << value1 << endl;

	double value2 = 7.0/2; // Floating point division, result will be 3.5
	cout << "Floating point division: " << value2 << endl;

	double value3 = (double)7/2; // Also floating point division, result will be 3.5
	cout << "Floating point division with cast: " << value3 << endl;

	int value4 = 7.3; // Implicit conversion, result will be 7 (fractional part is discarded)
	cout << "Implicit conversion from double to int: " << value4 << endl;

	int value5 = 8;
	value5 += 1; // Using the += operator (equivalent to value5 = value5 + 1, when adding 1 also to value5++)
	cout << "Using += operator: " << value5 << endl;

	int value6 = 10;
	value6 /= 5; // Using the /= operator (equivalent to value6 = value6 / 5, but shortened)
	cout << "Using /= operator: " << value6 << endl;

	int value7 = 13 % 5; // Using the % operator to get the remainder of 13 divided by 5 (mod-operator)
	cout << "Using % operator: " << value7 << endl;

	double equation = ((5/4)%2)+(2.3*6);
	cout << "Equation with precedence: " << equation << endl; // Precedence is respected, division and multiplication are done before addition (PEMDAS/BODMAS rules)

	cout << "==========================================================" << endl;
	cout << "Exercise 1: Convert seconds to hours, minutes and seconds." << endl;
	int totalSeconds = 125465; // Example total seconds
	int hours = totalSeconds/3600; // Calculate hours
	int minutes = (totalSeconds%3600)/60; // Calculate remaining minutes
	int seconds = totalSeconds%60; // Calculate remaining seconds

	cout << totalSeconds << " seconds is equal to: " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
	cout << "Check: " << hours << " * 3600 + " << minutes << " * 60 + " << seconds << " = " << (hours * 3600 + minutes * 60 + seconds) << endl;
	if(totalSeconds == (hours * 3600 + minutes * 60 + seconds)) {
		cout << "The calculation is correct!" << endl;
	} else {
		cout << "The calculation is incorrect!" << endl;
	}

	cout << "=======================================" << endl;
	cout << "Exercise 2: For loop using mod operator" << endl;
	cout << "---------------------------------------" << endl;

	cout << "Get out every nth iteration. Choose n: " << flush;
	int iterations;
	cin >> iterations;

	for (int i = 0; i < 10001; i++) {
		if (i % iterations == 0)
		{
			cout << "i = " << i << endl; // Print i every 1000 iterations
		}
	}

	return 0;
}

