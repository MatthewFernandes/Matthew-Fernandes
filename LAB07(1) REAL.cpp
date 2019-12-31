//Matthew Fernandes, 400237897
#include <iomanip>
#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//Variable Delcarations 
	int x;
	int y = 0;
	int count = 0;//counters
	int ToxicCount = 0;//counters 
	ifstream inputFile; // Input File stream object
	inputFile.open("CO.txt"); // Open the file
	ofstream ToxicFile; // Input File stream object
	ToxicFile.open("toxicCO.txt"); // Open the file
	//loopy for the files 
	while (!inputFile.eof())
	{
		inputFile >> x;//inputs file to variable
		if (x > 35) {
			ToxicCount++;//counting
			ToxicFile << x << endl;// output file to another file 
		}
		count++;//counting 
	}
	cout << "Amount of values that are toxic and need changing:" << ToxicCount << endl << "Total amount:" << count << endl;//outputing values 
}