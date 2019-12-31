// Student #400237897
// Name: Matthew Fernandes 

#include <iostream>
#include <string>
using namespace std;
void titleData(string);
int main()
{
	string title; //strings the variable title.

	cout << "Enter Title: ";//telsa 
	getline(cin, title); //counts user title 
	cout <<"Your Title:  "<< title << endl;// outputs users title 
	cout <<"Your Title lenght:  "<< title.length() << endl; //outputs user title lenght
	titleData(title);//used for void  function 
	return 0;
}
void titleData(string title)// void function
{
	cout << title << endl;//prints out title 
	int size = title.length(); //declares size varaible
	for (size = 0; size < title.length(); size++)//for loop to determine = length
	{
		cout << "=";// prints out = signs 
	}
	cout << endl;
}

//notes 
/*apply length functions 
 use photo 
 2nd question 
 calculate coefficiet of rest of tuition 
 if numbers are valed then calculate, then output -1
 question 3 
 user enters 3 numbers, find number closest too zero print the one that comes first in the list. 
 if you want to terminate add 3(0, 0 , 0) 
 */
