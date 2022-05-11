/*
Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income generated
from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is always displayed.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	// set constants variables
	const double classA = 15;
	const double classB = 12;
	const double classC = 9;

	//Variables
	double num_Of_Class_A, num_Of_Class_B, num_Of_Class_C;
	double sum;

	//Output of Class A
	cout << "How many tickets were sold for Class A seating? ";
	cin >> num_Of_Class_A;
	
	sum = classA * num_Of_Class_A;
	cout << fixed << setprecision(2) << "The income of Class A tickets: $" << sum << endl;

	//Output of Class B
	cout << "How many tickets were sold for Class B seating? ";
	cin >> num_Of_Class_B;

	sum = classB * num_Of_Class_B;

	cout << fixed << setprecision(2) << "The income of Class B tickets: $" << sum << endl;

	//Output of Class C
	cout << "How many tickets were sold for Class C seating? ";
	cin >> num_Of_Class_C;

	sum = classC * num_Of_Class_C;

	cout << fixed << setprecision(2) << "The income of Class C tickets: $" << sum << endl;

	return 0;
}