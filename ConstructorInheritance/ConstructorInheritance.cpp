// --------------------- Project Information ---------------------
// Project		: ConstructorInheritance
// Author		: Rune Dirk Willén
// Date			: 20-06-2025
// Description	: A simple program exploring constructor inheritance in C++.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
using namespace std;

class Machine
{
private:
    int id;

public:
    Machine(): id(0) { cout << "Machine no-argument constructor called!" << endl; }
    Machine(int id) : id(id) { cout << "Machine constructor called!" << endl; }
    void info() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine
{
public:
    Vehicle() { cout << "Vehicle no-argument constructor called!" << endl; }
    Vehicle(int id): Machine(id) { cout << "Vehicle constructor called!" << endl; }
};

class Car : public Vehicle
{

public:
    Car(): Vehicle(999) { cout << "Car no-argument constructor called!" << endl; }
    Car(int id): Vehicle(id) { cout << "Car constructor called!" << endl; }
};

int main()
{
    Car car(123);
    car.info();

    Car car2;
    car2.info();

    return 0;
}

/* Notes:
 * To call a super class private command, one needs to specify which constructors are called in its parent class.
 */

