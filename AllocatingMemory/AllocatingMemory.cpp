// --------------------- Project Information ---------------------
// Project		: Allocat
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring returning objects from functions in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

class Animal
{
private:
	string name;


public:
	Animal() { cout << "Animal created." << endl; }
	Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying" << endl; }
	~Animal() { cout << "Destructor called!" << endl; }

	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is: " << name << endl; }
};

int main()
{
	Animal* pA = new Animal[10]; // Creates 10 instances of 'Animal'

	pA[5].setName("George"); // Names only the 6th instance of animal
	pA[5].speak();
	pA[6].speak();

	delete[] pA; // The '[]' are needed to destruct all instances created

	char *pMem = new char[1000];
	delete[] pMem;

	cout << "========================" << endl;
	// Exercise: Create 26 instances of animal, name them according to the letters of the alphabet, and print.
	cout << "Exercise" << endl;
	cout << "------------------------" << endl;

	int lengthArray = 26;
	Animal *pAnimal = new Animal[lengthArray];

	char c = 'a';
	for (int i = 0; i < lengthArray; i++, c++)
	{
		string nameI(1, c);

		pAnimal[i].setName(nameI);

		cout << "Animal " << i + 1 << " says:" << endl;
		pAnimal[i].speak();
	}

	delete[] pAnimal;











    return 0;
}

