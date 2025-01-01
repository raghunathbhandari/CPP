/*

This is a Learning documents for C++ Programming and Game Development

*/

#include <iostream>
#include <string>

using namespace std;

//Function Declare and Body will be in below
void aWelComeFunc();//welcome message print
int myFuncAdd(int aFirstVal, int aSecondVal); // Add 2 Number 
void printData(int aData); //Print a Number
void printData(float aData); //Print a Number
void printData(char aData); //Print a Number
void printData(string aData); //Print a Number
void aExampleOfConditionalUse(); //Different example of Condition
char getStringFromUser();// Function to Get any input from User
void printResponse(char aVal1);
void exampleOfNumberOperator();//Numeric OPeration
void diffLoops(); //Example of Different Loop
void funcWithPassingByValue(int aVal); //By Value Function 
void funcWithPassingByRef(int & aVal); //By Ref Function

void funcStringExamples(); //Different types of String operations
void funcConstantExamples(); //Different types of Constant operations

void funcArrayExamples();// Example of Different Types of Array 
void funcEnumExamples(); //Example of Enum data types

void funcStructExamples();//Example of Differet type of St


//Main Funtion 
int main() 
{

	// Clear the Screen
	system("cls");
	
	//Print WelCome Message
	aWelComeFunc();
	

	// Start Other Function implementation -----------------
	
	//Example of Differet type of St
	funcStructExamples();


	//Example of Enum data types
	funcEnumExamples(); 


	//Example of Different types of Array
	funcArrayExamples();


	//If Else Example Function
	aExampleOfConditionalUse();
	
	//Example of number Addition
	printData(myFuncAdd(2, 6));


	//Number Example
	exampleOfNumberOperator();

	//Loop
	diffLoops();


	//Call Function with Value or Refrence
		int aCheckNum1 = 1;
		int aCheckNum2 = 1;
		funcWithPassingByValue(aCheckNum1);
		printData(aCheckNum1);

		funcWithPassingByRef(aCheckNum2);
		printData(aCheckNum2);
	//

	//Example of String operations
	funcStringExamples();

	funcConstantExamples();

	//Get String from User and print
	//printResponse(getStringFromUser());

	//Hold the system for user Keypress.
	system("Pause");

	//Scope of the Variable, which is declare inside the Cury Bras, will scope with the Curly Bras

}

//Example of Differet type of Structure
	struct LocationVect
	{
		float x;
		float y;
		float z;
	};
	struct Player
	{
		string Name;
		float Health;
		int Level;
		float Damage;
		float Stamina;

		void Attack()
		{
			cout << Name << " Does " << Damage << " Damage !" << endl;
		}

		int getLevel()
		{
			return Level;
		}

		LocationVect Location = { 0.f, 0.f, 0.f };

		void displayLocationVect() 
		{
			cout << "Location.X = " << Location.x << endl;
			cout << "Location.Y = " << Location.y << endl;
			cout << "Location.Z = " << Location.z << endl;

		}
	};
	void funcStructExamples()
{
	//

	Player pl1;
	pl1.Name = "JOHN";
	pl1.Health = 100.f;
	pl1.Level = 1;
	pl1.Damage = 2.5f;
	pl1.Stamina = 20.f;

	pl1.Attack();
	

	//Another Player Example 
	Player pl2 = { "Reeta ", 100.f, 3, 15.f };
	cout << "Player: " << pl2.Name << ", Level: " << pl2.getLevel();
	pl2.Attack();
	pl2.displayLocationVect();
	
	cout << "Player: " << pl1.Name << ", Level: " << pl1.getLevel();
	pl1.Location = { 12.5, 34.2, 73.2 };
	pl1.displayLocationVect();

}
//End of Struct


//Example of Enum data types
enum playerLevel
{
	PL_low,
	PL_medium,	
	PL_High
};
enum gameLevel
{
	GL_low,
	GL_medium,
	GL_High
};

void funcEnumExamples()
{

	//Example - 1
	playerLevel PL1;
	PL1 = PL_High;

	switch (PL1)
	{
		case PL_High:
			cout << "PL_High=" << PL_High << endl;
			break;

		case PL_medium:
			cout << "PL_medium=" << PL_High << endl;
			break;

		case PL_low:
			cout << "PL_low=" << PL_High << endl;
			break;
	}	

	//Example - 2
	gameLevel GL1 = GL_medium;

	switch (GL1)
	{
		case GL_High:
			cout << "GL_High=" << GL_High << endl;
			break;

		case GL_medium:
			cout << "GL_medium=" << GL_medium << endl;
			break;

		case GL_low:
			cout << "GL_low=" << GL_low << endl;
			break;
	}
}

//  Example of Different Types of Array 
void funcArrayExamples()
{
	//Example - 1
	int aIntArray1[3];
	aIntArray1[0] = 22;
	aIntArray1[1] = 11;
	aIntArray1[2] = 55;
	
	cout << aIntArray1[2] << endl;

	//Example - 2
	float aflArray1[10];
	for (int i = 0; i < 10; i++)
	{
		aflArray1[i] = i + 20;
	}
	cout << aflArray1[0] << endl;

	//Example - 3
	int aIntArr3[3] = { 1, 3, 5 };
	for (int i = 0; i < 3; i++)
	{
		cout << "Arra[" << i << "] = " << aIntArr3[i] << endl;
	}


}

//Different types of String operations
void funcConstantExamples()
{
	const int aNum1 = 120;

	//## Three Error Condition
	//aNum1++; // This line will show error because constant variable can not be changed.
	//funcWithPassingByRef(aNum1); //This Line will also show the error because constant variale can not be sent as refrence type in a function
	//const int aNum2; //This line will also show the error because without value constant variable can not be declared.

	cout << aNum1 << endl;
}

//Example of String Operations
void funcStringExamples()
{
	//Example - 1
	string str1, str2;
	str1 = "Raghu";
	str2 = "Bhandari";

	string strFullName = str1 + " " + str2;

	cout << strFullName << endl;


	//Example - 2
	string customerFirstName("Raghu");
	string customerLastName("Bhandari");
	string strSpace(" ");

	string customerFullName = "Customer Full Name: ";
	customerFullName += customerFirstName;
	customerFullName += strSpace + customerLastName;


	cout << strFullName << endl;
}

//Example of Different Loop
void diffLoops()
{
	int aNum1 = 0;
	int aNum2 = 10;


	//Different types of While - 1
	cout << endl;
	cout << "Different types of While Loop - 1 \n";
	while (aNum2 > aNum1)
	{
		cout << "," << aNum1;
		aNum1 ++;
	}

	//Different types of While - 2
	cout << endl;
	cout << "Different types of While Loop - 2 \n";
	aNum1 = 0;
	while (aNum1 <= 5)
	{
		cout << "," << aNum1;

		if (aNum1 == 3)
			break;

		aNum1++;
	}


	//Different types of Do While - 3
	cout << endl;
	cout << "Different types of Do While Loop - 3 \n";
	aNum1 = 0;
	do
	{
		cout << "," << aNum1;

		if (aNum1 == 3)
			break;

		aNum1++;
	} while (aNum1 <= 10);

	//Different types of Do While - 4
	cout << endl;
	cout << "Different types of Do While Loop - 4 \n";
	aNum1 = 0;
	do
	{
		if (aNum1 != 5)
		{
			cout << "," << aNum1;
		}	

		aNum1++;
	} while (aNum1 <= 20);


	//Different types of For - 5
	cout << endl;
	cout << "Different types of For Loop - 5" << endl;
	aNum1 = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "," << aNum1;

		aNum1++;
	}

	cout << endl;
}

//By Value Function 
void funcWithPassingByValue(int aVal)
{
	aVal++;
}

//By Ref Function 
void funcWithPassingByRef(int & aVal)
{
	aVal++;
}

//Number Operation
void exampleOfNumberOperator()
{
	
	// + , - , * , / , %
	// ++ =
	// = ++
	// * =
	// = *
	
	int aNum1 = 12;
	float aNum2 = 32.45;
	float aRes;


	//Devide
	aRes = aNum2 / aNum1;
	cout << "++ Divide: " << aRes << endl;

	//Multiply
	aRes = aNum2 * aNum1;
	cout << "* Multiply Example: " << aRes << endl;

	//add
	aRes = aNum2 + aNum1;
	cout << "+ Addition Example: " << aRes << endl;

	//Subs
	aRes = aNum2 - aNum1;
	cout << "- Substract Example: " << aRes << endl;

	//Mod
	aRes = aNum1 % aNum1;
	cout << "% Mod Example: " << aRes << endl;

	//= ++, ++=
	aRes  = ++ aNum1 ;
	cout << "++ Example: " << aRes << endl;
	
	aRes = 0;
	aRes = aNum1 ++;
	cout << "++ Example: " << aRes << endl;
	cout << "++ Example: " << aNum1 << endl;

	aRes *= aNum1;
	cout << "*= Example: " << aRes << endl;


}

//Get String from User and print
char getStringFromUser()
{
	cout << "Please provide your answer: y or n \n";
	char aUserInput;
	cin >> aUserInput;
	return aUserInput;
}

void printData(string aData)
{
	cout << aData << endl;
}

//Example of If Else Statement in c++
void aExampleOfConditionalUse()
{
	int a(1);
	int b = 13;


	if (b < a)
	{
		cout << "b is less than a.\n" << endl;
	}
	else if (a == b)
	{
		cout << "b is equal to a.\n" << endl;
	}
	else
	{
		cout << "b is Greater than a.\n" << endl;


		int aSmall = 11;
		cout << "Local Scope Variable\n";
	}
}

//Print Welcome Message
void aWelComeFunc() 
{
	std::cout << " Good Luck For Game Development! \n";
}

//Example Fucntion to add 2 int values 
int myFuncAdd(int aFirstVal, int aSecondVal)
{
	return aFirstVal + aSecondVal;
	//return aResult;
}

//Print any Int Number 
void printData(int aData)
{
	cout << aData << endl;
}

void printData(float aData)
{
	cout << aData << endl;
}

void printData(char aData)
{
	cout << aData << endl;
}

//Print any Char 
void printResponse(char aVal1)
{
	cout << "You have entered:" << aVal1 << endl;
}


