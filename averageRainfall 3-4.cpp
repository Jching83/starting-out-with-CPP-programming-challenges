/*
Average Rainfall
Write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	string month1,month2,month3;

	double rainfall1,rainfall2,rainfall3,sum;

	cout << "Enter a month: ";
	cin >> month1;
	cout << "Enter the amount of rainfall in inches for " << month1 << ": ";
	cin >> rainfall1;

	cout << "Enter a 2nd month: ";
	cin >> month2;
	cout << "Enter the amount of rainfall in inches for " << month2 << ": ";
	cin >> rainfall2;

	cout << "Enter a 3rd month: ";
	cin >> month3;
	cout << "Enter the amount of rainfall in inches for " << month3 << ": ";
	cin >> rainfall3;

	sum = rainfall1 + rainfall2, rainfall3;
	
	cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month3 << " is " << sum / 3 << endl;

	return 0;
}