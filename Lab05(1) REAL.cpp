// Full Name:Matthew Fernandes
//Student# 400237897

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
//void prototype
void maxValue(double[], double*, double* );
int main()
{
	//Variable  Declaration  and array declaration
		const int SIZE = 100;
		double num[SIZE];
		double sum = 0;
		double avg = 0;
		double pos;
		double max;
		srand(time(0));
		//for loop to check all the values
		for (int i = 0; i < 100; i++) {
			num[i] = 100 + rand() % 101;
			sum += num[i];
			avg = sum / 100;
		}
		//outputs 
		cout << "the SUM is: " << sum << "\n" << "the AVG is: " << avg << endl;
		maxValue(num,&pos,&max);
		cout << "the MAXVALUE is: " << max << endl;
		cout << "the POSITION of the maxvalue is: " << pos << endl;
		system("pause");

}



///void function 
void maxValue(double num[], double *pos, double *max) {
	//pointer variables 
	*pos = 0;
	 *max = num[0];
	 //for loop  to check values 
	for ( int i=1; i <100; i++)
	{
		if (*max < num[i])
		{
			*max = num[i];
			*pos = i;
		}
	}

}
/*expectation 
if you want to : 1.5E-3*/