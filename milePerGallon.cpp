/*
Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven/Gallons of Gas Used
*/

#include <iostream>

using namespace std;

int main()
{
	float gallonsHeld, milesDriven, mpg; // holds variables

	gallonsHeld = 15; // value of gallons the car can hold
	milesDriven = 375; // value of miles drive
	mpg = milesDriven / gallonsHeld; // calculates miles per gallon

	cout << "This car gets " << mpg << " mpg" << endl; // output MPG

	return 0;

}