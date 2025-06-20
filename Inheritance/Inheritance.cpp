// --------------------- Project Information ---------------------
// Project		: Inheritance
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring inheritance in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

class Animal
{

public:
    void speak() { cout << "Grrr!" << endl; }
};

class Cat: public Animal // Cat is defined as a subclass of Animal, thereby, functionalities of Animal are transferred to Cat. Methods unique to Cat can then be added.
{

public:
    void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger : public Cat // Subclasses can also be divided into subsubclasses and so on...
{

public:
    void roar() { cout << "ROAR!" << endl; }
};


int main()
{
    Animal a;
    a.speak();
    
    Cat cat;
    cat.speak();
    cat.jump();

    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.roar();

    return 0;
}

