//Name: Matthew Fernandes 
//Student# 400237897	

#include <iostream>
#include <string>
using namespace std;
int main()//Main 
{
	//Variable Delcaration 
	string  firstname; //Declaring "firstname" Variables
	string  gender;//Declaring "gender" Variables
	double age, hourlywage;//Declaring "age" Variables

	//Input 
	cout << "Please enter your first name:"; // First name input
	cin >> firstname;
	cout << "Enter your age:";// Age Input 
	cin >> age;
	cout << "Enter your hourly wage($): "; // hourly wage input
	cin >> hourlywage;
	cout << "Please enter your gender (M or F): "; //gender input
	cin >> gender;

	//Output(s)
	cout << "Name:" <<firstname << endl;//First name output  
	cout << "Age:" << age << endl;  //Age output 
	cout << "Hourly Wage:$" <<hourlywage << endl; //hourly wage output
	cout << "Gender:" << gender << endl;//gender output 

	
	system("pause");   
	return 0;
	//end 

}

