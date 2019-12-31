// Full Name: Matthew Fernandes
//Student# 400237897

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//main
int main()
{
	//Variable Declaration
	double number; 
	//Output
	cout << "Enter a decimal number between 0 and 200 ";//userinputs a value between 0 and 200 
	cin >> number;
	//While loop
	while (cin.bad() || number < 0 || number > 200) {
		cout << "Invalid Entry!, Enter again: ";//if number is not between 0 to 200 repeats this message until user enters values that is in range 
		cin >> number;
	}
	//Outputs
		cout << "Your number is: " << number << endl; //outputs users value
		cout << "This number is in the appropriate range"; //tells user the value is in ranfe 
		cin.ignore(); cin.get();
		return 0;

	
}


