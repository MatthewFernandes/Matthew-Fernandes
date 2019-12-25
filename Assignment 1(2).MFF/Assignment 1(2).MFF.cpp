//FUll Name: Fernandes Matthe
//|Student# 400237897

#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;
int main()
{
	//Variable Declaration 
	int crewmember;
	double weight1;
	double weight2;
	double weight3;
	double weightofcargo;
	double centerofgravity;
	double intialweight;
	double finalweight;
	double increment;
	double  moment;
	//Values of Variables
	moment = 0;
	weightofcargo = 0;
	intialweight = 0;
	finalweight = 5000;
	increment = 500;
	weight1 = 0;
	weight2 = 0;
	weight3 = 0;
	//Inputs
	cout << "Enter the amount of crew members between 1 and 2: ";//UserInputs value for crewmember
	cin >> crewmember;
	//While Loop
	while ((crewmember < 1 || crewmember > 2))//range from 1 and 2 
	{
		cout << "Invalid Answer Try Again!: ";
		cin >> crewmember;
	}
	if (crewmember == 1)//if value is one then gives them 1 weight option
	{
		cout << "Enter weight of crew member(85-400): ";
		cin >> weight1;
		//while loop
		while ((weight1 < 85 || weight1 > 400))//range of  85 to 400
		{
			cout << "Invalid Value!(weight1) Try Again:";
			cin >> weight1;
		}
	}
	//if value of 2 runs this part of the code
	else if (crewmember == 2)
	{
		cout << "weight of crew member 1(85-400): ";//user inputs value in range
		cin >> weight2;
		//Loops user until they enter appropriate range
		while ((weight2 < 85 || weight2 > 400))
		{
			cout << "Invalid Value! Try Again: ";
			cin >> weight2;
		}
		cout << "Enter weight of crew member 2(85-400): ";
		cin >> weight3;
		//Loops user until they enter approriate range
		while ((weight3 < 85 || weight3 > 400))
		{
			cout << "Invalid Value! Try Again:";
			cin >> weight3;
		}
	}
	//Outputs
	//if crew member amount is 1 outputs if statement 
	cout << "Amount of Crew Member: " << crewmember << endl;
	if (crewmember == 1)
	{
		cout << "Crew Member 1 Weight(lb): " << weight1 << endl;
	}
	//if crew member amount is 2 outputs else if statement
	else if(crewmember==2)
	{
		cout << "Crew Member 1 Weight(lb): " << weight2 << endl;
		cout << "Crew Member 2 Weight(lb): " << weight3 << endl;
	}
	//Header for chart
	cout << setw(8) << "Weight(lb)" << setw(35) << "Center of gravity " << endl;
	cout << "-----------------------------------------------" << endl; 
	//Loops and create chart
	while (intialweight <= finalweight){
		//calculation 
		moment = ((2751405 + 1169167.3 + intialweight * 345 + (weight2 + weight3 + weight1) * 120));
		weightofcargo= ((weight2 + weight3 + weight1) + 12639 + intialweight);
		centerofgravity = moment / weightofcargo;
		//Outputs chart
		cout << setprecision(1)<<setw(8) << fixed << intialweight << setw(30)<<fixed << setprecision(3) << fixed << centerofgravity  << fixed;
		//if centerofgravity is greate then 315 then astrick printed
		if (centerofgravity > 315)
		{
			cout << "*" << endl;
		}
		else
		{
			cout << endl;
		}
		intialweight += increment;
	}
	//end of main 






}






	
	

