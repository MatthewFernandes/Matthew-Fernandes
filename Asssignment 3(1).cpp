//MatthewFernandes 400237897

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std; 
int main()
{
	bool locker[101] = { false };
	int count = 0;
	int student3 = 3;
	int value=2;
	//update all the values to true since student 1 opens all the lockers=
	for (int i = 0; i <= 100; i++) {
		locker[i] = false;
		locker[0] = true;
		count++;
		for (int j = 4; j <= 100; j + 4) {
			locker[j] = false;
			if (locker[i] == false and locker[j] == false)
			{
				locker[i] = true;

			}
			else {
				locker[i] = true;
			}
			for(int k = 5; k <= 100; k + 5) {
				if (locker[i] == false && locker[j] == false && locker[k]==false )
				{
					locker[i] = true;

				}
				else {
					locker[i] = true;
				}
				count++;
			}
		}
	}
	if (locker[100] == false)
	{
		cout << locker[100] << endl;
	}
}
