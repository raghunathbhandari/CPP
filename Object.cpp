#include <iostream>
#include <string>
#include "Object.h"
using namespace std;

Car::Car()
{
	cout << "Car Object is created!" << endl;
}

Car::Car(string brand, int milage)
{
	Brand = brand;
	Milage = milage;
}

void Car::Start()
{
	cout << Brand << " - Car Started !" << endl;
}
