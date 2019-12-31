//  Student#:400237897
//  Name:Matthew Fernandes

#include <iostream>
#include <cmath>
#include <iomanip>
#include <istream>
//Variable Declaration 
using namespace std; 
double num1;
double num2;
void read2Values(double*, double*);
//Main 
int main()
{
	//Brings Values from the function 
	read2Values(&num1, &num2);
	//Outputs the number value
	cout << "your First number values are: " << num1<< endl;
	cout << "your Second number values are: " << num2 << endl;
	cin.get();
}
//Void Function
void read2Values(double* v1, double* v2)
{
	do //will ask user to  enter a value in this loop first
	{
		cout << "enter 1st value greater then 0:"<<endl;
		cin >> *v1;
		//v1 has to be greater then 0 
	} while (*v1 < 0);
	do
	{
		//userinput
		cout << "enter 2nd value greater then 0:"<<endl ;
		cin >> *v2;
	} while (*v2 < 0);
}
