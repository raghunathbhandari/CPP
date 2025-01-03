#include <iostream>
#include <string>
using namespace std;


struct Car
{	
	string Brand;
	float milage;
	int RegYear;


	void Start();
};
void Car::Start()
{
	cout << "Car - " << Brand << " Started and Runnung Now ...." << endl;
}


int main() 
{

	Car c1, c2;
	c1.Brand = "Mercedes";
	c1.Start();

	c2.Brand = "Land Rover";
	c2.Start();


	system("pause");
}