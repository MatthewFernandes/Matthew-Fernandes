// Matthew Fernandes, 400237897
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int const ROWS = 20, COLS = 100;
// Function Prototypes
void countingDNAnt(char[], int*, int*, int*, int*, int);
char DNAtoRNAconverter(char[], int, int);
int main()
{
	//VARAIBLE DECLARAION pretty huge 
	ifstream inDNAFile;
	ofstream outRNAFile;
	char DNA[COLS], RNA[ROWS][COLS];
	//counters 
	int totalA = 0;
	int	totalC = 0;
	int totalG = 0;
	int totalT = 0;    
	int strA = 0;
	int	strC = 0;
	int	strG = 0;
	int	strT = 0;
	//Open Files
	inDNAFile.open("DNAdata.txt");//opening DNA FILE
	outRNAFile.open("RNAseq.txt");//opening RNA FILE 
	cout << setw(10) << "Strand #" << setw(10) << "A" << setw(10) << "C" << setw(10) << "G" << setw(10) << "T" << endl;//Header for the outputs 
	cout << "----------------------------------------------------------------------------------------------" << endl;//header for the outputs
	//Check File
	if (!inDNAFile)
		cout << "File does not exist" << endl;//file does not exsit the basic stuff
	//Processing
	else {//for loops too read the files 
		for (int i = 0; i < ROWS; i++) {//reads rows
			for (int j = 0; j < COLS; j++) {//trads cols 
				inDNAFile >> DNA[j];//put the row in the  data file 
				countingDNAnt(DNA, &strA, &strC, &strG, &strT, j);// calling function into  main
				if (DNA[j] == 'A')//checcks for the a in the file 
					totalA++;//counts how many As there is 
				else if (DNA[j] == 'C')//cehcks for the C in the file 
					totalC++;//counts how many Cs there is 
				else if (DNA[j] == 'G')//checcks for the a in the file
					totalG++;//counts how many Gs there is 
				else if (DNA[j] == 'T')
					totalT++;//counts how many Ts there is 

				RNA[i][j] = DNAtoRNAconverter(DNA, i, j);
				outRNAFile << RNA[i][j];
			}
			//Table of counts
			cout << setw(10) << (i + 1) << setw(10) << totalA << setw(10) << totalC << setw(10) << totalG << setw(10) << totalT << endl;
			totalA = 0;
			totalC = 0;
			totalG = 0;
			totalT = 0;
			outRNAFile << endl;
		}
		//Counts for each letter
		cout << endl;
		cout << "Total A: " << strA << endl;
		cout << "Total C: " << strC << endl;
		cout << "Total G: " << strG << endl;
		cout << "Total T: " << strT << endl;
	}
	//Close Files
	inDNAFile.close();
	outRNAFile.close();
	system("pause");
	return 0;
}
//Function 1 counts strands
void countingDNAnt(char DNA[], int* strA, int* strC, int* strG, int* strT, int j) {
	if (DNA[j] == 'A')
		(*strA)++;
	else if (DNA[j] == 'C')
		(*strC)++;
	else if (DNA[j] == 'G')
		(*strG)++;
	else if (DNA[j] == 'T')
		(*strT)++;
}
//Function 2 converts letters to swap DNA to RNA
char DNAtoRNAconverter(char DNA[], int i, int j) {
	char RNA[ROWS][COLS];
	RNA[i][j] = DNA[j];
	if (DNA[j] == 'T')
		RNA[i][j] = 'U';
	return RNA[i][j];
}
