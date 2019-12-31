// Full name: Matthew Fernandes
//Student# 400237897

#include <iostream>
#include <fstream> //For file I/O operations;  
using namespace std;

int main()
{
	int num, total = 0, count = 0;
	ifstream inFile; //Define file object
	inFile.open("Random.txt"); //make connection
	if (!inFile) //check existence

		cout << "File does not exist";
	else {
		while (!inFile.eof()) { //read until end of file
			inFile >> num; //read one data value
			total += num; //running total
			count++; //count number in file
		} //end of while
		//Outputs
		cout << "The number of numbers=" << (double)count << endl;//number of numbers output 
		cout << "The running total/sum =" << (double)total << endl;//sum output
		cout << "Average=" << (double)total / count << endl;//average output
	} 
	inFile.close(); //file close 
	cin.get();
	return 0;
}



