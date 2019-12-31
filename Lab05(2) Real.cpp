// Lab05(2) Real.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 
int main()
{
	//Variable Delcaration 
	double l;
	double a ;
	double deltal;
	long double f;
	int const SIZE = 6;
	long double const BIGNUM = 10000000000;
	//array declaration
	string materials[SIZE] = { "Aluminum", "Brass", "Copper", "Nylon", "Steel","Teflon" };
	double valueofy[SIZE] = { 6.9,9.0,11.0,0.37,21.0,0.037 };
	//userinput
	cout << "enter a value for L between 10 and 20" << "\n" << "enter a value for A between 0.01 and 0.2" << "\n" << "enter a value of deltal between 0 and 0.0015" << endl;
	cin >> l >> a >> deltal;
	while (((l < 10) || (l > 20)) || ((a < 0.01) || (a > 0.2))||  ((deltal < 0) || (deltal > 1.5E-3))) {
			cout << "One  or more of your values is an Invalid Entry, Try Again:" << endl;
			cin >> l >> a >> deltal;
		}
	//tablular form header
	cout << "Your Values for L, a and Deltal (in order):"  << l << "m  " << a << "m^2  " << deltal << "m  " << endl;
	cout<< setw(20) << "Materials" << setw(20) << "Y(m)" << setw(20) << "F(newtons)" << setw(20)<<endl;
	cout << "-----------------------------------------------------------------------" << endl;
	//for loop the values:
	for (int i=0; i < SIZE; i++)
	{
		f = valueofy[i]*BIGNUM*(deltal / l)*a;
		cout<<setprecision(3)<<setw(20) << materials[i] << setw(20) << valueofy[i]<< setw(20) << f << setw(20)<< endl;
	}
}
	

