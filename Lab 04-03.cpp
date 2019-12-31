// Student#400237897
// Name: Matthew Fernandes 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 
//Variable Delarcation 
int closest;
int closest1;
int closest2;
int trueclosest;
//Function
int findClosest(int, int, int);
//Main
int main()
{
	//loops the values and menu until user enters 3 0's
	do 
	  {
		//user inputs
		cout << "Choose a Interger Number: " << endl;
		cin >> closest;
		cout << "Choose a Interger Number: " << endl;
		cin >> closest1;
		cout << "Choose a Integer Number:  " << endl;
		cin >> closest2;
		trueclosest = findClosest(closest, closest1, closest2);//gets values from the function
		//if the values dont = zero prints out the following
		if ((closest1 != 0) && (closest2 != 0) && (closest != 0))
		{
			cout << "Closest Number To Zero:  " << trueclosest << "\n" << "Enter Three 0's To Break Out Of Loop!" << endl;
		}
		else//if the values are 0 then programs terminates
		{
			return 0;
		}
	  }
	//if the values are 0 then programs terminates
	 while ((closest1 != 0) && (closest2 != 0) && (closest != 0));
	  { 
		return 0;
	  }
}
//Function Class
int findClosest(int closest, int closest1, int closest2)//int variables 
{
	//compares the input values to each other and the least value (closet) returns to main function
	if ((abs(closest) <= abs(closest1) && (abs(closest) <= abs(closest2))))
	{
		return closest;
	}
	//compares 2 and 3 input if the second on is lower 2nd value is return to main 
	else if ((abs(closest2) >= abs(closest1)))
	{
		return closest1;
	}
	//if none of the following statements are met option 3 is returned to main
	else
	{
		return closest2;
	}
}

