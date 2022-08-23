/*Sum of Numbers
Write a program that asks the user for a positive integer value. The program should use
a loop to get the sum of all the integers from 1 up to the number entered. For example,
if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
Input Validation: Do not accept a negative starting number.
*/

#include <iostream>

using namespace std;

int main()
{
	int number; //varialbe to hold value 

	cout << "Please enter a positive integer: ";
	cin >> number; //get input from the user

	//input validation
	if (number < 0)
		cout << "Value cannot be negative!" << endl;

	//loop used to accumulate and calulate the sum 
	for (int count = 1; count <= number; count++) {
		cout << "the current sum is: " << count + number << endl;
	}

	return 0;
}