/*


*/

#include <iostream>
#include <string>
using namespace std;

struct Car
{
	string Brand;
	float Milage;
	Car();
};

Car::Car()
{
	Brand = "Ford";
	Milage = 5000.0f;
}

int main()
{
	// Example - 1
	//Below example is to create Obj and assign value in calling time.
	for (int i = 0; i <= 10; i++)
	{
		Car* c1 = new Car();
		c1->Brand = "Mercedes";
		c1->Milage = 4000.0f;
		cout << c1->Brand << endl;

		delete c1;
	}

	//Example - 2 Dynamic memory and pointer 
	//This example will call the constructor and create object with default values.
	for (int i = 0; i <= 10; i++)
	{
		Car* c2 = new Car();
		cout << c2->Brand << endl;

		delete c2;
	}

	system("pause");
}


