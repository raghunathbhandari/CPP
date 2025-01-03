/*

*/



#include <iostream>
#include <string>

using namespace std;

//New Class 
class Car
{
public:
	virtual void Start();
};

class SportsCar : public Car
{
public:
	virtual void Start() override;
};

class SaloonCar : public SportsCar
{
public:
	virtual void Start() override;
};


//Class Function
void Car::Start()
{
	cout << "Car Started!" << endl;
}
// Class Function
void SportsCar::Start()
{
	cout << "Sports Car Started!" << endl;
}
void SaloonCar::Start()
{
	Car::Start();
	SportsCar::Start();
	cout << "Saloon Car Started!" << endl;

}



int main()
{
	
	//Car* c1 = new Car;
	//c1->Start();


	//SportsCar* Spc1 = new SportsCar;
	//Spc1->Start();

	//Callling Calls with Pointer Object
	SaloonCar* Sal1 = new SaloonCar;
	Sal1->Start();


	//Calling Class Object Directly
	SaloonCar sl1;
	sl1.Start();

	//delete Obj
	//delete c1;
	//delete Spc1;
	delete Sal1;
	
	system("pause");
}

