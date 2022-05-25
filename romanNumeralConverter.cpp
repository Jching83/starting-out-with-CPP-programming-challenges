/*
Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
*/

#include<iostream>

using namespace std;

int main()
{
	int num;

	cout << "Enter a number between 1-10: ";
	cin >> num;

	//switch statements to output the roman numerals I-X
	switch (num)
	{
	case 1: cout << "you entered the number: I" << endl;
		break;
	case 2: cout << "you entered the number: II" << endl;
		break;
	case 3: cout << "you entered the number: III" << endl;
		break;
	case 4: cout << "you entered the number: IV" << endl;
		break;
	case 5: cout << "you entered the number: V" << endl;
		break;
	case 6: cout << "you entered the number: VI" << endl;
		break;
	case 7: cout << "you entered the number: VII" << endl;
		break;
	case 8: cout << "you entered the number: VIII" << endl;
		break;
	case 9: cout << "you entered the number: IX" << endl;
		break;
	case 10: cout << "you entered the number: X" << endl;
		break;

	}

	//error cases to prevent numbers less than 1 or greater than 10
	if (num < 1)
		cout << "number cannot be less than 1.";
	if (num > 10)
		cout << "number cannot be greater than 10." << endl;



	return 0;
}