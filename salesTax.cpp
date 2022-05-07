/*
Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	double purchase, salesTax, stateTax, salesTaxTotal, stateTaxTotal, total;

	purchase = 95;
	salesTax = 0.02;
	stateTax = 0.04;

	salesTaxTotal = purchase * salesTax;
	stateTaxTotal = purchase * stateTax;
	total = purchase + salesTaxTotal + stateTaxTotal;


	cout << "The total sales tax is $" << setprecision(2) << fixed << salesTaxTotal << endl;
	cout << "The total state tax is $" << setprecision(2) << stateTaxTotal << endl;
	cout << "The total with tax is $" << setprecision(2) << total << endl;

	return 0;
}