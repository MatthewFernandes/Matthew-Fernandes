//Matthew Fernandes, 400237897
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include<cstdlib>
using namespace  std;
int main()
{
	//variable declaration
	char plate[7];//array declaration 
	bool loop =false;// loop to detect 0
	int count = 0;//counter 
	ofstream PlateFile; // Input File stream object
	PlateFile.open("plates.txt"); // Open the file
	//cout << "Enter a value for the licence place you want:" << endl;
	//While loop to make the header complete 
	while (loop==false)
	{
		cout << "Enter a value for the licence place you want:" << endl;//Output
		cin >> plate[0];//input  forvalues 
		if (plate[0] == '0')//if the first value is 0 
		{
			cout << "Plates inputted: " << count << endl;// states the values 
			loop = true;// loop is true so it breaks out
			return 0;// returns 0;
		}
		else {
			cin  >> plate[1] >> plate[2] >> plate[3] >> plate[4] >> plate[5] >> plate[6];// inputs the value 
			count++;//counter 
			PlateFile << plate[0] << plate[1] << plate[2] << plate[3] << plate[4] << plate[5] << plate[6];//assigns them to the file
			PlateFile << endl;
		}
	}
	PlateFile.close();//close files
	return 0;
}