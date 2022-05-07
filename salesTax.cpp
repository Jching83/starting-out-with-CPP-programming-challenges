/*
Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.
*/

#include <iostream>
#include <iomanip> // used to set decimal place precision
using namespace std;

int main()
{

	double purchase, salesTax, stateTax, salesTaxTotal, stateTaxTotal, total; // holds variables

	purchase = 95; //purchase total
	salesTax = 0.02; // sales tax percentage
	stateTax = 0.04; // state tax percentage

	salesTaxTotal = purchase * salesTax; // gets the total sales tax
	stateTaxTotal = purchase * stateTax; // gets the total state tax
	total = purchase + salesTaxTotal + stateTaxTotal; // adds all calculated values together to get the total


	cout << "The total sales tax is $" << setprecision(2) << fixed << salesTaxTotal << endl; // outputs sales tax total with two decimal places
	cout << "The total state tax is $" << setprecision(2) << stateTaxTotal << endl; // outputs state tax total with two decimal places
	cout << "The total with tax is $" << setprecision(2) << total << endl; // outputs overall total with two decimal places

	return 0;
}