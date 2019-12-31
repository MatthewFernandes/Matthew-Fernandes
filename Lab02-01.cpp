//Full Name: Matthew Fernandes
//Student# 400237897
#include <iostream>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	//Variable Declaration
	double radius;
	double radiusincrement;
	double radiusfinal;
	double const PI = 4 * atan(1.0);
	double volume;
	
	//UserInput
	cout << "Enter Intial Radius"; //prompts user for radius
	cin >> radius;
	cout << "Enter your Increment"; //prompts user for increments
	cin >> radiusincrement;
	cout << "Enter what you want your final radius"; //prompts user for final radius 
	cin >> radiusfinal;
	//header
	cout << "Radius(cm)    Volume(cm^3)\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	//while loop:  loops the value from radius- radius final
	while (radius <= radiusfinal) {
		volume = 4 * pow(radius, 3)*PI / 3; //calculates volume 
		//Outputs
		

		radius += radiusincrement; 
	}

	return 0;

}
