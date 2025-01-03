/*


*/


#include <iostream>
#include <string>
using namespace std;


class Animals
{
public:

	//Variable
	string AnimalTypes;

	//Pointer 
	int* Legs;
	string* BirthType;
	
	Animals();
	~Animals();

};


Animals::Animals()
{
	Legs = new int(4);
	BirthType = new string("Egg");

	cout << AnimalTypes << " Class is Created!" << endl;
}

Animals::~Animals()
{
	delete Legs;
	delete BirthType;
	cout << AnimalTypes << " Class is Deleted!" << endl;
}


int main()
{

	Animals* a1 = new Animals;
	a1->AnimalTypes = "Domestic Animals";

	delete a1;

	system("pause");

}


