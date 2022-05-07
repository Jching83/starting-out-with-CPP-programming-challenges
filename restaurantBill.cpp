/*
Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
*/

#include <iostream>
#include <iomanip> //used to set precision with decimal places

using namespace std;

int main()
{
	float meal, tax, tip, total, taxTotal, tipTotal, taxTipTotal;// hold all variables

	meal = 88.67; // meal cost
	tax = 0.0675; //tax of 6.75%
	tip = 0.20; //tip of 20%

	taxTotal = meal * tax; // multiple to get tax amount
	tipTotal = meal * tip; // multiple to get tip amount
	taxTipTotal = taxTotal + tipTotal; // add tax and tip amounts together
	total = taxTipTotal + meal; // add all values to get the total cost of the meal

	cout << "meal cost: $" << meal << endl; //output meal cost
	cout << fixed << setprecision(2) << "tax amount: $" << taxTotal << endl; //output tax amount
	cout << fixed << setprecision(2) << "tip amount: $" << tipTotal << endl; //output tip amount
	cout << fixed << setprecision(2) << "total bill: $" << total << endl; // output total cost of the meal

	return 0;
}