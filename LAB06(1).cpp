// Student:Matthew Fernandes
// Student#:400237897
#include <iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
//variable constant
int const ROWS = 50;
int const COLS = 6;
//function headers
void closesttrue(double[ROWS][COLS], double*, int*, int*);
double  smallestvalue(double[][COLS], int*);
//mainfunction
int main()
{
	//a very very long list of variable declaration
	double score[ROWS][COLS];
	double sumofcol = 0;
	double sumofrow = 0;
	double highestplacement = 0;
	int maxSum = INT_MIN;
	int minSum = INT_MAX;
	int idx = 0;
	int idx1 = 0;
	double closest = 0;
	int colIndex = 0;
	int rowIndex = 0;
	double closestx;
	ifstream inputFile; // Input File stream object
	inputFile.open("score.txt"); // Open the file
	if (!inputFile)//if the file cant be opened
		cout << "Unable to read file " << endl;// if no file this doesnt work 
	else {//calling array
			for (int cols = 0; cols < COLS; cols++) {//setting up array from file
				double sum = 0;/// checking  row values
				for (int rows = 0; rows < ROWS; rows++) {//checking row values
					inputFile >> score[rows][cols];// putting input file into array
					sum += score[rows][cols];// reads all values 
				}
				if (sum > maxSum) {// if sum is greater then max  then following comes 
					maxSum = sum;
					idx = cols;
					sumofcol = sum;
				}
			}
	}
	//system outputs
		sumofrow = smallestvalue(score, &idx1);//call from sum of smallest
		cout << "Column of Highest total score:" << idx << setw(30) << "Highest Total Col Score:" << sumofcol << endl;//outputs highest score and col of it 
		cout << "Row of Smallest total score:" << idx1 << setw(30) << "Lowest  Total Row Score:" << sumofrow << endl;//outputs smallest score and row of it 
		closesttrue(score, &closest, &colIndex, &rowIndex);// function prototype
		cout << "Value closest to 50: " << closest << endl << "Row of value:" << colIndex << endl <<"Column of value:"<< rowIndex << endl;// values for the value closest to 50
}
//end of main
void closesttrue(double score[ROWS][COLS], double* closest1, int* coloumnsIndex, int* rowsIndex)
{
	double length = DBL_MAX;//variable declaration
	for (int i = 0; i < COLS; i++)//calling array col
	{//calling array rows
		for (int j = 0; j < ROWS; j++)//calling array rows 
		{
			if (fabs((score[j][i] - 50)) < length)//checking for value if its close to 50
			{
				length = fabs(score[j][i] - 50);//if satisfactions are met then variables and prototypes are assigned to the followings 
				*closest1 = score[j][i];//assigning pointers
				*coloumnsIndex = i;//assigning pointers
				*rowsIndex = j;//assigning pointers
			}
		}
	}
}
//SMALLEST VALUE CALCULATOR all is pretty much same for finding highest column just modified for smallest row
double smallestvalue(double score[][COLS],  int*idx1) {
	int minSum = INT_MAX;
	double sumofrow = 0;
	ifstream inputFile; // Input File stream object
	inputFile.open("score.txt"); // Open the file
	if (!inputFile)
		cout << "Unable to read file " << endl;
	else {
		for (int row = 0; row < ROWS; row++) {
			double sum1 = 0;
			for (int col = 0; col < COLS; col++) {
				inputFile >> score[row][col];
				sum1 += score[row][col];
			}
			if (sum1 < minSum) {
				minSum = sum1;
				*idx1 = row;
				sumofrow = sum1;
			}
		}
		return sumofrow;
	}
}
//check the array calling fucntion and then go slowly through if else statements 

/*a. Print the column number and total (start your column count at 0) of the column with the
highest total.
b. Print the row number (start your row count at 0) of the row with the lowest total.
c. Write a function that will accept 2D array and return the column index, row index and the
number that is closest to 50. (Hint: you may find the fabs function useful for this part).
Do not write cout statement in this method.*/