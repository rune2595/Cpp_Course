// --------------------- Project Information ---------------------
// Project		: ComplexConditions
// Author		: Rune Dirk Willén
// Date			: 12-06-2025
// Description	: A simple program exploring complex conditions in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>

using namespace std;

/*
 * ==	:	Equal to
 * !+	:	Not equal to
 * <	:	Less than
 * >	:	Greater than
 * <=	:	Less than or equal to
 * >=	:	Greater than or equal to
 */

int main()
{
	int value1 = 7;
	int value2 = 4;

	if(value1 >= 7)
	{
		cout << "Condition 1: True" << endl;
	}
	else
	{
		cout << "Condition 1: False" << endl;
	}

	if (value1 == 7 && value2 < 3)
	{
		cout << "Condition 2: True" << endl;
	}
	else
	{
		cout << "Condition 2: False" << endl;
	}

	if (value1 == 7 || value2 < 3)
	{
		cout << "Condition 3: True" << endl;
	}
	else
	{
		cout << "Condition 3: False" << endl;
	}

	if ((value2 != 8 && value1 == 10) || value1 < 10)
	{
		cout << "Condition 4: True" << endl;
	}
	else
	{
		cout << "Condition 4: False" << endl;
	}

	// Same as above, but using variables for the conditions
	bool condition1 = (value2 != 8) && (value1 == 10);
	bool condition2 = (value1 < 10);

	if (condition1 || condition2)
	{
		cout << "Condition 5: True" << endl;
	}
	else
	{
		cout << "Condition 5: False" << endl;
	}

	// c++ only checks the first condition, if it is true, it will not check the second condition.
	// Always use parentheses to avoid confusion and check the expected outcome by printing the values.

	return 0;
}