// Full Name:Matthew Fernandes
//Student# 400237897

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
	double x[100] = {  };
	//Display all values
	srand((unsigned)time(0));

	for (int i = 100; i < 200; i++) {
		x[i] = (rand());
		cout << i << endl;
	}
}

