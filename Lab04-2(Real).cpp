//  Student#:400237897
//  Name:Matthew Fernandes

#include <iostream>
#include <cmath>
#include <iomanip>
#include <istream>
bool calculateBox(double, double, double, double*, double*);
using namespace std;


int main()
{
	//Variable Declaration 
	double length;
	double width;
	double height;
	double surfaceArea;
	double volume;
	//User Input 
	cout << "Enter length of box(cm): " << endl;
	cin >> length;
	cout << "Enter width of box(cm):  " << endl;
	cin >> width;
	cout << "Enter height of box(cm): " << endl;
	cin >> height;
	//Calls function if the value comes back true 
	if (calculateBox( length,  width,  height,  &surfaceArea,  &volume) == true) {
		//Outputs the surface area and volume value from function
		cout << "Your Surface Area is:" << surfaceArea <<"cm^2"<<fixed<<endl;
		cout << "Your Volume is:" <<volume<<"cm^3" <<fixed<< endl;
	}
	//else tells user that they did a bad value 
	else {
		cout << "Error! incorrect values";
	}
}
//Bool function 
bool calculateBox(double length, double width, double height, double* surfaceArea, double* volume)
{
	//Variable Declaration
	double vol;
	double surfarea;
	//Length width height all have to be greater then zero then preforms calculations of  SA and volume and then returns true
	if (((length > 0) && ((width > 0)) && ((height > 0)))) {
	 //Calculations
		surfarea = 2*((length * width) +( width * height) + (length * height));
		vol = (length * width * height);
		*volume = vol;
		*surfaceArea = surfarea;
		return true;
	}
	//if not true returns false 
	else {
		return false;
	}
}