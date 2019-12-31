//Name: Matthew Fernadnes 
//Student#400237897

#include <iostream>
#include <iostream> 
#include <ctime> 
#include <iomanip>
using namespace std; 
//constant declaration
int const ROWS = 9;
int const COLS = 9;
int const MAX = 10;
int const MIN = 0;
//bool header
bool consecutive(int[][COLS], int);
//main function
int main()
{
	//variable declaration
	int rando[ROWS][COLS];
	int num; 
	int placeholder;
	srand(time(0));//random timer
	for (int i = 0; i < ROWS; i++) {//setting up 2d array rows
		for (int j = 0; j < COLS; j++) {//setting up 2d array column
			rando[i][j] = MIN + (double)rand() / RAND_MAX * (MAX - MIN);//gives me random values for  2d array
		}
	}
	cout << " Please enter a number between 0-9 to see if it repears four consercutive times:" << endl;//user input 
	cin >> num; //takes in user input
	if (num < 0 || num >9) {//makes sure that value is in the required ranger
		cout << "INVALID INTERGER SORRY" << endl;//error output
		return 0;
	}
	if (consecutive(rando, num) == true) {//if the bool function returns true the number has appear 4 times and output message is printed
		cout << num << " is the number appears 4 excutive times! Congrats! " << endl; //output message
		for (int i = 0; i < ROWS; i++) {//setting up 2d array rows
			for (int j = 0; j < COLS; j++) {//setting up 2d array column
				cout << setw(5) << setprecision(1) << fixed << rando[i][j] << "  ";//gives me random values for  2d array
			}
			cout << endl;
		}
	}
	else {//if the bool function does not return true the number does not repear 4 times and therefore this output message telling user that prints
		cout << num << " does not appear 4 excutive times! :(  " << endl;	//output message
		//printing out the 2d array for user to see
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				cout << setw(5) << setprecision(1) << fixed << rando[i][j] << "  ";
			}
			cout << endl;
		}
	}
	return 0;
}
//end of main 
//bool function
bool consecutive(int rando[][COLS], int numberx) {//bool variable declaration
	int numero = rando[0][0];//variable and array declaration its called numero cause im spanish and my english is bad
	numero = 0;//variable place holder value 
	for (int i = 0; i < ROWS; i++) {//reading the rows of array
		for (int j = 0; j < COLS; j++) {//reading the column of array
			if (numberx == rando[i][j]) {//if num x is equal to the array it starts to count 
				numero++;//counter
				if (numero == 4) {//if the number is == to 4 break) 
					break;
				}
			}
			else {// else the number is equal to 0
				numero = 0;
			}
		}
	}
	if (numero == 4) {//if the number does in fact =4 that means  that the value repears 4 times so it returns true
		return true;
	}
	else {//else the number doesnt matter so returns 0 since it doesnt matter what other value it is 
		numero = 0;
		for (int i = 0; i < ROWS; i++) {//this is the same thing just testing vertically 
			for (int j = 0; j < COLS; j++) {//checking verticall
				if (numberx == rando[j][i]) {//counting the numb
					numero++;//counter
					if (numero == 4) {//if values vertically = 4 then it breaks out 
						break;
					}
				}
				else {// else numero = 0 since count doesnt matter at that point 
					numero = 0;
				}
			}
		}
	}
	if (numero == 4) {// if numero vertically repeats 4 time returns true
		return true;
	}
	else {//else it just returns false or nothing 
		return false;
	}
}//end of bool function 