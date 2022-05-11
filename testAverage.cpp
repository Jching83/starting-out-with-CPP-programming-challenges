/*
Test Average
Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//Variable
	double score1, score2, score3, score4, score5, sum, average;
	
	//asks for input from the user
	cout << "Please enter five test scores between 0-100 to be averaged together.\n";
	cout << "Test score 1: ";
	cin >> score1;

	cout << "Test score 2: ";
	cin >> score2;

	cout << "Test score 3: ";
	cin >> score3;

	cout << "Test score 4: ";
	cin >> score4;

	cout << "Test score 5: ";
	cin >> score5;

	//calculates sum and average
	sum = score1 + score2 + score3 + score4 + score5;
	average = sum / 5;

	//outputs the average of all scores
	cout << fixed << setprecision(1) << "The test average is: " << average << endl;

	return 0;
}