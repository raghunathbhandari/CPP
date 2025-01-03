#include <iostream>
#include <string>
using namespace std;


class Car
{
  public:
	Car(); //Constructor
	Car(string brand, int year, int milage); //Constructor Overloading

	string Brand;
	int Year;
	int Milage;

	void Start();


  private:

};
//Style 1 of Constuctor
Car::Car()
{
	cout << "Default Car Created" << endl;
}



//Style 2 of Constuctor
/*Car::Car(string brand, int year, int milage)
{
	Brand = brand;
	Year = year;
	Milage = milage;
}*/

//Style 3 of Constuctor
Car::Car(string brand, int year, int milage):
	Brand(brand), Year(year), Milage(milage) 
{ 
	Start();
}

//Start Function for Car Class
void Car::Start()
{
	cout << "Car - " << Car::Brand << " Started.. Milage = " << Milage << endl;
}

//New Person Class
class Suvcar: public Car
{
public:
	Suvcar();
	Suvcar(string brand, int year, int milage);

};

Suvcar::Suvcar()
{
	cout << "SUV Car Created!" << endl;

}

Suvcar::Suvcar(string brand, int year, int milage)
{
	Car c1(brand, year, milage);
}




int main()
{

    // Example -1 , Creating Class Object without default value so default constructor will be called in this case.
	//Car c1;

	//c1.Brand = "Mercedes";
	//c1.Year = 2010;
	//c1.Milage = 4000;
	//c1.Start();


	//Example -2, Creating Class Obj with Value and Overload method will be call in this case.
	//Car c2 = { "Ford", 2010, 5000 };
	//c2.Start();


	//SUV Car Created
	Suvcar suv1("Mercedes GLC", 2018, 4000);
	suv1.Start();

	system("pause");
}

