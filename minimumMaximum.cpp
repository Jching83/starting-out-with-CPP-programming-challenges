/*
Minimum/Maximum
Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.
*/

#include<iostream>

using namespace std;

int main()
{

	double num1, num2; //variables

	//gets first input from user
	cout << "Enter a number: ";
	cin >> num1;	

	//gets second input from user
	cout << "Enter another number: ";
	cin >> num2;

	//determines which value is larger
	if (num1 > num2)
		cout << num1 << " is larger than " << num2 << endl;
	else
		cout << num2 << " is larger than " << num1 << endl;

	return 0;
}