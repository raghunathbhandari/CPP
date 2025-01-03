/*

*/


#include <iostream>
#include<string>
using namespace std;


class Car
{
public:
	virtual void Start();
	void func_add(int a, int b);

};

class Saloon: public Car
{
public:
	virtual void Start() override;
	void func_add(int a, int b);
};

class Suv: public Saloon
{
public:
	virtual void Start() override;
	void func_add(int a, int b);
};



//Multiple Inheritance
class A
{
public:
	void sum(int a, int b);
};
class B: public A
{
public:
	void sum(int a, int b);
};
class C: public A, B
{
public:
	void sum(int a, int b);
};





int main()
{

	//Example - 1
	Car* car1 = new Car;
	Saloon* sal1 = new Saloon;
	Suv* suv1 = new Suv;

	Car* CarArray[] = {car1, sal1, suv1 };

	for (int i = 0; i < 3; i++)
	{
		CarArray[i]->Start();
		CarArray[i]->func_add(12, 22);
	}

	//Example - 2
	C c;
	c.sum(12, 33);


	//Example - 3 
	//Dynamic Cast
	for (int i = 0; i < 3; i++)
	{
		Car* car = CarArray[i];
		Car* car2 = dynamic_cast<Saloon*>(car);


		if (car2)
		{
			car2->func_add(1, 2);
		}

		Saloon* sal2 = dynamic_cast<Saloon*>(car);
		if (sal2)
		{
			sal2->func_add(12, 55);
		}
	}



	system("pause");
}

void Car::Start()
{
	cout << "Car Started !" << endl;
}

void Car::func_add(int a, int b)
{
	cout << "Car-Sum is: " << (a + b) << endl;
}

void Saloon::Start()
{
	cout << "Saloon Started !" << endl;
}

void Saloon::func_add(int a, int b)
{
	cout << "Saloon-Sum is: " << (a + b) << endl;
}

void Suv::Start()
{
	cout << "Suv Started !" << endl;
}

void Suv::func_add(int a, int b)
{
	cout << "SUV-Sum is: " << (a + b) << endl;
}

void C::sum(int a, int b)
{
	cout << "C-Sum is: " << (a + b) << endl;
}

void B::sum(int a, int b)
{
	cout << "B-Sum is: " << (a + b) << endl;
}

void A::sum(int a, int b)
{
	cout << "A-Sum is: " << (a + b) << endl;
}
