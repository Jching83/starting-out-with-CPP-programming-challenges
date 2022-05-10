/*
Stock Commission
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
stockbroker a 2 percent commission for the transaction. Write a program that calculates
and displays the following:
• The amount paid for the stock alone (without the commission)
• The amount of the commission
• The total amount paid (for the stock plus the commission)
*/

#include <iostream>

using namespace std;

int main()
{
	double shares, stockPrice, commission, total, stockTotal, commissionTotal; // holds place of all variables

	// assigns value to variables
	shares = 750;
	stockPrice = 35.00;
	commission = .02;
	
	// performs necessary calculations
	stockTotal = shares * stockPrice;
	commissionTotal = stockTotal * commission;
	total = stockTotal + commissionTotal;

	// displays desired output
	cout << "The amount paid for the stock before commission: $" << stockTotal << endl;
	cout << "The amount of commision: $" << commissionTotal << endl;
	cout << "The amount paid after commission: $" << total << endl;

}
