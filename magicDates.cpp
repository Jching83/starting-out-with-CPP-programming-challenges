/*
Magic Dates
The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day is
equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.
*/

#include<iostream>

using namespace std;

int main()
{
	double day, month, year; // holds variables

	//get input for the month.
	cout << "Enter a month: ";
	cin >> month;

	//get input for the day
	cout << "Enter a day: ";
	cin >> day;

	//get input for the year
	cout << "Enter a two-digit year: ";
	cin >> year;

	
	//check conditions to see if the date entered is a magic date.
	if (month * day == year)
		cout << "This is a magic date.";
	else
		cout << "This is NOT a magic date.";

	return 0;

}