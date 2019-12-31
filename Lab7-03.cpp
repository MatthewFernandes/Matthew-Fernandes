//MatthewFernandes, 400237897
#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
//Main
int main()
{
	//Variable Delcaration
	string userpassword;
	int length;
	bool theacceptablepassword = false;
	bool uppercase = false;
	bool lowercase = false;
	bool numberdigit = false;
	//do loops until all of the requirement are met in the code 
	do
	{
		cout << "Enter a password.\n";//user output 
		getline(cin, userpassword);// takes values cin statement ofc 
		length = userpassword.length();//making it equal to the lenght
		if (length < 6){//checks if value is long enough
			cout << " Your password must be at least 6 characters :)" << endl;//error message
		}
		//for loop to test the properties of required code 
		for (int i = 0; i < length; i++){
			if (isupper(userpassword[i])){// checks upercase using isupper functio n
				uppercase = true;
			}
			if (islower(userpassword[i])){//checks lower case using is lower function
				lowercase = true;
			}
			if (isdigit(userpassword[i])){//checks for digits using is digit fucntion 
				numberdigit = true;
			}
		}
		// these next few lines are basically error messages that give all the possible cases of which a user couldve have met up and it tell thems where they messed up there was alot of cases so there is alot of if statements 
		if (uppercase == false && lowercase == true && numberdigit == true) {
			theacceptablepassword = false;
			cout << "You need a uppercase in your password :)" << endl;
		}
		if (uppercase == true && lowercase == false && numberdigit == true) {
			theacceptablepassword = false;
			cout << "You need a lowercase in your password :)" << endl;
		}
		if (uppercase == true && lowercase == true&& numberdigit == false) {
			theacceptablepassword = false;
			cout << "You need a digit in your password :)" << endl;
		}
		if (uppercase == false && lowercase == false && numberdigit == true) {
			theacceptablepassword = false;
			cout << "You need a uppercase and lowercase in your password :)" << endl;
		}
		if (uppercase == false && lowercase == true && numberdigit == false) {
			theacceptablepassword = false;
			cout << "You need a uppercase and a number digit in your password :)" << endl;
		}
		if (uppercase == true && lowercase == false && numberdigit == false) {
			theacceptablepassword = false;
			cout << "You need a lower case and a number digit in your password :)" << endl;
		}
		if (uppercase == true && lowercase == true && numberdigit == true) {
			theacceptablepassword = true;
		}
		//finally if all the conditions are finally met then we output the acceptable password.
	} while (theacceptablepassword == false);
	cout << "Your password is acceptable.\n";
	return 0;
}