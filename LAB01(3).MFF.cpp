//Name: Matthew Fernandes 
//Student# 400237897
#include <iostream>
#include <cmath>
#include <string>
#include <cmath>
using namespace std;

int main()//main 
{
	//Input
	//ask user for a number 
	//Variable Declaration 
	int inputnumber;
	int userchoice;

	cout << "Please enter a integer: ";//user inputs their integer 
	cin >> inputnumber; 
	cin.ignore();
	//Option 
	cout << "1. Number divisible by 3?" << endl; //gives user a choicce 
	cout << "2. Number between 10 and 100?" << endl;//gives user a choice
	cout << "Please enter your choice: ";//user input their choice
	cin >> userchoice;
	cin.ignore();

	//output
	switch (userchoice)//switch statement on "userchoice
	{
	case 1: if (inputnumber % 3 == 0) //if number gives a remainder of 0 when divide by 3 say the value is divisible by 3
		cout << "Your value is divisible by 3" << endl;
			else cout << "Your value is not divisible by 3" << endl;//if number gives a remainder not equal to zero then tells user that value is not divisble by 3
		break;
	case 2: {
		if (10 > inputnumber)//  input number is less then 10  displays line 36
		cout << "Your number is less than 10" << endl;
		else if ((inputnumber<100)&&(inputnumber>10))// if input numbers value is between 10 and 100 displays line 38
		cout << "Your number is between 10 and 100" << endl;
		else if (inputnumber > 100)//if input nubmer value is greater then 100 displas line 40
		cout << " Your number is greater than 100" << endl;
		break;
	 default:
		cout << "invalid choice, value is not a menu item" << endl; //if user chooses invalid choice will display message
	}
			cin.get();
			return 0;
	}
}


