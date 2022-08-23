/*
Body Mass Index
Write a program that calculates and displays a person’s body mass index (BMI). The
BMI is often used to determine whether a person with a sedentary lifestyle is overweight
or underweight for his or her height. A person’s BMI is calculated with the
following formula:
BMI = weight * 703 / height^2
where weight is measured in pounds and height is measured in inches. The program
should display a message indicating whether the person has optimal weight, is underweight,
or is overweight. A sedentary person’s weight is considered to be optimal if his
or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
to be underweight. If the BMI value is greater than 25, the person is considered
to be overweight.
*/

#include <iostream>
#include <cmath> //needed for exponent calculation

using namespace std;

int main()
{
	double weight, height, bmi; //variables

	cout << "What is your weight in pounds?" << " ";
	cin >> weight;

	cout << "What is your height in inches?" << " ";
	cin >> height;

	bmi = weight * 703 / pow(height, 2.0); // calculations to determine a persons BMI

	cout << "your bmi is " << bmi << endl;

	// conditional statements to determine if an individuals BMI is under, over, or optimal.
	if (bmi <= 18.5)
		cout << "You are underweight.";
	else if (bmi >= 25)
		cout << "You are overweight.";
	else
		cout << "Your weight is optimal.";

	return 0;
}