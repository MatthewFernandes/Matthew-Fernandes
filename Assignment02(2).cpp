

// Name: Matthew Fernandes
	//Student# 400237987
#include <iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
	using namespace std;
void analyzeData(int patientNum, double* avgHalfLife, int* numMeasurements);
double halfLife(double C0, double Ct, double t);
void thetwohighesthalflifes(double* patient1, double* halflife1, double* patient2, double* halflife2, double* halflifeavg);
//Variable Declaration 
double  patientNum, choice;
int main()
{
	//variable declaration
	int patientNum; 
	double HalfLifeavg;
	int numMeasurements;
	double patient1;
	double patient2;
	double halflife1;
	double halflife2;

	//Menu 
	do {
		cout << " What info do you want(Pick the number)" << endl;
		cout << "---------------------------------------" << endl;
		cout << "[1] Patient Data(Co, ct, k, halflife) \n[2] The 2 Patient with the greatest halftime data \n[3] Exit " << endl;
		cin >> choice;
		//user choice options if they choose 1 the following is done 
		if (choice == 1) {
			cout << "Pick which Patient# Data you would like to see" << endl;
			cout << "Enter the Patient#(1-5):";//lets user enter patient number 
			cin >> patientNum;
			//function protocol
			analyzeData(patientNum, &HalfLifeavg, &numMeasurements);
			//output
			cout << "Half-life of patient#" << patientNum << " is " << fixed << setprecision(2) << HalfLifeavg << " hrs, using " << numMeasurements << " measurements.\n";
		}
		//user choice options if they choose 1 the following is done 
		else  if (choice == 2) {
			//function protocol
			thetwohighesthalflifes(&patient1, &halflife1, &patient2, &halflife2, &HalfLifeavg);
			cout << "the patient with the two highest half life avg are:" << endl;
			cout << "Patient #" << patient1 << "\n" << "Halflife:"<<halflife1 << endl;
			cout<<  "Patient #" << patient2 << "\n" << "Halflife:"<< halflife2 << endl;
		}
		//if it not choice 1 or 2 then exists
	} while ((choice == 1) || (choice == 2));
	return 0;
}
void analyzeData(int patientNum, double* halflifeavg, int* numMeasurements)
{
	//Varible Declation 
	double C0, Ct, t, thalf;
	double sumHalfLifes = 0;
	int patient;
	*numMeasurements = 0;
	//Opens the file 
	ifstream fin;
	fin.open("Patient.txt");
	//takes values from file 
	if (fin)
	{
		//while loop: if conditions met 
		while (fin >> patient >> C0 >> Ct >> t)
		{
			//if the pateint=patient Num analyzeData = true 
			if (patient == patientNum)
			{
				//calculations 

				thalf = halfLife(C0, Ct, t);
				*numMeasurements = *numMeasurements + 1;
				sumHalfLifes = sumHalfLifes + thalf;
				*halflifeavg = sumHalfLifes / *numMeasurements;
			}
		}
	}
	else {
		
		cout << "Error opening File";
	}
}
//this is just calculation function 
double halfLife(double C0, double Ct, double t)
{
	///Calculation and returns it to analyze data 
	double k, thalf;
	k = -log(Ct / C0) / t;
	thalf = log(2) / k;
	return thalf;
	
}
void thetwohighesthalflifes(double* patient1, double* halflife1, double* patient2, double* halflife2, double* avgHalfLife)
{
	//variable delcaration 
	*halflife1 = 0;
	*halflife2 = 0;
	double HalfLifeavg = 0;
	int numMeasurements;
	//loops pateitn number
	for (int i = 1; i <= 5; i++) {
		analyzeData(i, avgHalfLife, &numMeasurements);
		//takes the highest value when conditions are met 
		if (*halflife1 < *avgHalfLife) {
			*halflife2 = *halflife1;
			*patient2 = *patient1;
			*patient1 = i;
			*halflife1 = *avgHalfLife;
		}
		//else takes the second highest value;
		else if (*halflife2 < *avgHalfLife) {
			*halflife2 = *avgHalfLife;
			*patient2 = i;
		}
	}
}
