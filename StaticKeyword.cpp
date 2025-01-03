/*


*/



#include <iostream>
#include <string>

using namespace std;


//Example Static variables inside the function
void update_count()
{
	static int Count = 0;
	Count++;

	cout << Count << endl;
}

class Car
{
public:
	string Brand;
	static int Milage;

	static void PrintMilage()
	{
		cout << Milage << ",  Running now .." << endl;
	}

	Car()
	{
		cout << "Car is Born !";
		++Milage;
	}


};

//initialise the default value for static variable
int Car::Milage = 4000;

int main()
{

	//Example - 1
	//Static Variable inplemented in function
	for (int i = 0; i <= 10; i++)
	{
		update_count();
	}


	//Example - 2
	//Static Class Object
	if (true)
	{
		Car c1;
		c1.Brand = "Mercedes";
	}
	
	//Static Function inside the class can be called directly as below
	Car::PrintMilage();


	//
	Car* c2 = new Car;
	//c2->Milage = 100;
	c2->PrintMilage();

	system("pause");

}