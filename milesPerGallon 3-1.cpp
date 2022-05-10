/*
Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.
*/

#include <iostream>

using namespace std;

int main()
{
	int gallonsOfGas, milesDriven, totalMPG; // holds variables

	// prompts user for input to get gallons of gas 
	cout << "How many gallons of gas can the car hold? ";
	cin >> gallonsOfGas;

	// prompts user for input of miles the car can be driven on a full tank of gas
	cout << "How many miles can the car be driven on a full tank? ";
	cin >> milesDriven;

	totalMPG = milesDriven / gallonsOfGas; // performs calculations to get MPG

	cout << "The car gets " << totalMPG << " mpg" << endl; //displays the calculated MPG 

	return 0;
}