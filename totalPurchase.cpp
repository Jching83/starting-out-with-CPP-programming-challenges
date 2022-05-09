/*
Total Purchase
A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $12.95
Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 7%.
*/

#include <iostream>
#include <iomanip> // used to set precision of all values to 2 decimal places

using namespace std;

int main()
{
	double price1, price2, price3, price4, price5, subtotal, tax, salesTax, total; //holds place for all variables

	//value of each variable
	price1 = 15.95;
	price2 = 24.95;
	price3 = 6.95;
	price4 = 12.95;
	price5 = 3.95;
	tax = 0.07; // tax of 7%

	subtotal = price1 + price2 + price3 + price4 + price5; // calculates subtotal
	salesTax = subtotal * tax; //calculates sales tax amount
	total = subtotal + salesTax; // calculates total

	//outputs values of all items, subtotal, sales tax amount, and total
	cout << fixed << setprecision(2) << "Item 1. $" << price1 << endl;
	cout << fixed << setprecision(2) << "Item 2. $" << price2 << endl;
	cout << fixed << setprecision(2) << "Item 3. $" << price3 << endl;
	cout << fixed << setprecision(2) << "Item 4. $" << price4 << endl;
	cout << fixed << setprecision(2) << "Item 5. $" << price5 << endl << endl;

	cout << fixed << setprecision(2) << "The subtotal is $" << subtotal << endl;
	cout << fixed << setprecision(2) << "The amount of sales tax is $" << salesTax << endl;
	cout << fixed << setprecision(2) << "The total cost is $" << total << endl;

	return 0;
}