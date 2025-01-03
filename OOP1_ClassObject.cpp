/*
Author: Raghu
This is learnig content 

Free to download and use
*/


#include <iostream>
#include <string>
using namespace std;

class Player
{
public:

	//Constructor
	Player()
	{
		Name = "Ronaldo";
		Age = 39;
		Health = 101.f;
	}
	
	string Name;
	int Age;
	float Health;

	//Function inside the Class
	void Run()
	{
		cout << "Player: '" << Name << "' is Running Now ...." << endl;
	}
	void GameStart();
};
//Function Outside the Class
void Player::GameStart()
{
	cout << "Player: '" << Player::Name << "' Game Loading ...." << endl;
}

int main()
{
	system("cls");

	//Player - 1 
	Player PL_Raghu;
	PL_Raghu.Name = "Raghu";
	PL_Raghu.Age = 40;
	PL_Raghu.Health = 50.0f;
	PL_Raghu.Run();
	PL_Raghu.GameStart();

	//Player -2 Object is created with Class
	Player PL_Shaivi;
	PL_Shaivi.Name = "Jaya";
	PL_Shaivi.Age = 35;
	PL_Shaivi.Health = 20.5f;
	PL_Shaivi.Run();
	PL_Shaivi.GameStart();

	system("pause");
}





