/*
Energy Drink Consumption
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 58 percent of
them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more
  energy drinks per week

• The approximate number of customers in the survey who prefer citrus-flavored energy
  drinks
*/

#include <iostream>

using namespace std;

int main()
{
	double surveyed, oneOrMore, preferredCitrus, total1, total2; //holds variables 

	//assigned value to each variable
	surveyed = 16500;
	oneOrMore = .15;
	preferredCitrus = .58;

	//performs calculations 
	total1 = surveyed * oneOrMore;
	total2 = surveyed * preferredCitrus;

	//displays information required
	cout << surveyed << " customers were surveyed." << endl;
	cout << "Number of customers who purchased one or more energy drinks per week: " << total1 << endl;
	cout << "Number of customers who prefer cirtrus-flavored energy drinks : " << total2 << endl;

	return 0;
}