#pragma once
#include <iostream>
#include <string>
using namespace std;


class Car
{
public:
	string Brand;
	int Milage;

	Car();
	Car(string brand, int milage);

	void Start();
};