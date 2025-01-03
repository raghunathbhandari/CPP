/*


Three kinds of Scope is available in c++ 

private : will be allowed 
protected : 
public : Will allow to acces from other class or functions



*/

#include <iostream>
#include <string>
using namespace std;


class Car
{
public:
	string Brand;
	int Year;
	int Milage;

	void Start()
	{
		cout << "Car " << Brand << " Starting .." << endl;
	}


	void CheckMilage();
	


	//Create Seter and Geter to Access the protected variable from outside of the Class
	void SetCreatedOn(string createdOn) { CreatedOn = createdOn;}
	void SetCreatedBy(string createdBy) { CreatedBy = createdBy; }
	//Geter
	string GetCreatedOn() { return CreatedOn; }
	string GetCreatedBy() { return CreatedBy; }

private:
	string CreatedOn; // Protected Variable
	string CreatedBy;


protected:
	int BrandRanking;
	string Founder;

};

class Saloon: public Car
{
public:
	Saloon();
};

Saloon::Saloon()
{
	cout << "Saloon Created" << endl;
	Brand = "Ford";

	SetCreatedBy("John");
	cout << "CreatedBy:" << GetCreatedBy() << endl;
}


void Car::CheckMilage()
{
	if (Milage <= 4000.0f)
	{
		cout << "Average Milage" << endl;
	}
	else
	{
		cout << "High Milage" << endl;
	}
}


int main()
{
	Car c1;
	c1.Brand = "Mercedes";
	c1.Milage = 5000.0f;
	c1.Start();

	c1.SetCreatedOn("Jan 10");
	c1.SetCreatedBy("Raghu");

	cout << c1.GetCreatedBy() << endl;
	cout << c1.GetCreatedOn() << endl;

	c1.CheckMilage();

	Saloon s1;
	s1.Brand = "Ford";
	s1.Milage = 2000.0f;
	s1.CheckMilage();

	s1.SetCreatedBy("Ford Man");
	cout << s1.GetCreatedBy() << endl;


	system("pause");

}

