// Student#:400237897
//Name:Matthew Fernandes

#include <iostream>
#include <cmath>
#include<iomanip>
//Variable Declaration 
using namespace std; 
double lowerbound;
double higherbound;
double increment;
//Function
double sinc(double x);
//Main
int main()
{
	//Variable Delcaration
	double x;
	//UserInput for lower, higher bound and increment 
	cout << "Enter Lower Bound:" << endl; 
	cin >> lowerbound;
	cout << "Enter Higher Bound:" << endl; 
	cin >> higherbound;
	cout << "Enter an Increment:" << endl; 
	cin >> increment;
	//Header for x and sinc
	cout << setw(8) << "x" << setw(20) << "sinc(x)" << endl;
	cout << "--------------------------------------------"<< endl;
	//For Loop 
	for (double i = lowerbound; i <= higherbound; i += increment) {
		cout << setprecision(2) << fixed << setw(8) << i;
		cout << setprecision(5) << fixed << setw(20) << sinc(i) <<endl;
	}
}
//sinc Function
double sinc(double x)
{
	//so the value of x cant be zero
	if (x == 0)
		return 1;
	return(sin(x)) / x;
} 