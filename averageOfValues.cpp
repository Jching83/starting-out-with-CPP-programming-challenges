/*
Average of Values
To get the average of a series of values, you add the values up and then divide the sum
by the number of values. Write a program that stores the following values in five different
variables: 28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum . Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen.
*/

#include <iostream>

using namespace std;

int main()
{
	float num1, num2, num3, num4, num5, sum, average; //holds all variables

	// stores the value for all variables
	num1 = 28;
	num2 = 32;
	num3 = 37;
	num4 = 24;
	num5 = 33;

	sum = num1 + num2 + num3 + num4 + num5; // adds all the values to get the sum
	average = sum / 5; // calculates the average of all number

	cout << "the average of 28, 32, 37, 24, and 33 = " << average << endl; // displays the average

	return 0;

}