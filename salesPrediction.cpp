/*
Sales Prediction
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.
*/

#include <iostream>

using namespace std;

int main()
{
	double salesPercentage = 0.58; // holds the value of the sales percentage
	double generatedSales = 8600000; //holds the value of generated sales

	int total; // holds total


	total = salesPercentage * generatedSales; // multiplies sales percentage and generated sales together

	cout << "The East Coast division will generate $" << total <<  " in sales" << endl; //outputs total sales value

	return 0;

}