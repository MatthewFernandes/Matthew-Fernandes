//Name: Matthew Fernandes 
//Student #400237897

#include <iostream>
#include <string>
#include<iomanip>

using namespace std;
int main()//Main Program 
{
	//Variable Delcaration 
	double radianAngle, degreeAngle, lengthofarc ; //radian, degree and arclenght delcaration 
	//Constant Delcaration 
	const double PI = 4 * atan(1.0) ; //PI constant
	const double r = 5;  // radius

	//Input 
	cout << "Enter Angle in Degrees"; //Degree Input
	cin >> degreeAngle;

	//Radian and arclength Processing 
	radianAngle = degreeAngle * PI / 180;//degree to radian converter	
	lengthofarc = r * radianAngle;//radian to arclenght converter
	
	//Output/Display 
	cout << "Your answer in Radians is: " << radianAngle << endl;//Angle in Radian Output
	cout << "Your answer when cos is (in radians) " << acos(radianAngle) << endl;//Angle cos Output
	cout << "Your answer when sin is (in radians) " << asin(radianAngle) << endl;//Angle sin Output
	cout << "Your answer when tan is (in radians) " << atan(radianAngle) << endl;//Angle tan Output 
	cout << "Your arclength is (in radians) " << lengthofarc << endl; //arclength Output
	//end 
	
	
	return 0;
}

