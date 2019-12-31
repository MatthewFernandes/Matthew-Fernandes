// Student# 400237897
// Matthew Fernades 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Variable Delcaration 
double bounceheight;
double dropheight;
double cr;
//function double
double calculateCr(double,double);

//main
int main()
{
	//user inputs, user inputs drop value and bounce value 
	cout << "Insert bounce height" << endl;
	cin >> bounceheight;
	cout << "Insert drop height" << endl;
	cin >> dropheight;
	cr = calculateCr(bounceheight, dropheight);//function returns to main 
	//if cr= -1 outputs error message
	if (cr == -1) {
		cout << "Error" << endl;
	}
	//if cr = anything else, prints out the cr value
	else { 
		  cout << setprecision(3) << fixed << "Your  coefficient of restitution: " << cr << endl; 
	}
	
}
//Double function for calculateCr
double calculateCr(double bounceheight, double dropheight)//Variables
{
	//compares values of bounce and drop height if both are greater then 0 and drop height is greater then bounce height does calc
	if (((bounceheight > 0) && (dropheight > 0))&&(dropheight>=bounceheight))
	{
		return sqrt((bounceheight / dropheight));
	}
	//else cr value will be -1
	else return -1;
}
