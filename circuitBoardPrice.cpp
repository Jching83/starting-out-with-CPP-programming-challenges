/*
Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. Write a program that
will calculate the selling price of a circuit board that costs $14.95. Display the result
on the screen.
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	double profit, cost, total; // holds variables

	profit = 0.35; //sets profit value at 35%
	cost = 14.95; // sets circuit board value before profit
	total = profit * cost; // calculates the profit amount

	cout << fixed << setprecision(2) << "profit $" << total + cost << endl; //outputs the total profit of the circuit board

}