#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Saloon.h"


int main()
{

	//Example - 1
	Saloon* c1 = new Saloon;
	c1->Brand = "Ford";
	c1->Start();

	//Example - 2
	Car c2("Ford", 3000);
	c2.Start();

	system("pause");
}

