/*
Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage
of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
*/

#include<iostream>
#include<iomanip> //for setprecision

using namespace std;

int main()
{
	double males, females, total; //variables

	// output prompting user for number of males input
	cout << "how many males are in the registered class? "; 
	cin >> males;

	// output prompting user for number of females input
	cout << "how many females are in the registered class? ";
	cin >> females;

	total = males + females;//calculates total number of students

	//outputs total number of students
	cout << "There are " << total << " students in the class." << endl;

	//calculates and outputs percentage of male students
	cout << setprecision(2) << "The percentage of males in the class is: " << (float)males / (float)total * 100 << "%" << endl;

	//calculates and outputs percentage of female students
	cout << setprecision(2) << "The percentage of females in the class is: " << (float)females / (float)total * 100 << "%" << endl;

	return 0;
}