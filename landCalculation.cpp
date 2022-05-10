/*
Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates
the number of acres in a tract of land with 391,876 square feet.
*/

#include <iostream>

using namespace std;

int main()
{
	double sqFt, acreage, totalAcres; // holds variables

	//assigns value to the variables
	acreage = 43560; 
	sqFt = 391876;

	totalAcres = sqFt / acreage; // calculates acreage using provided information

	cout << "The number of acres in a tract of land with " << sqFt << " is: " << totalAcres << endl; // outputs calculation

	return 0;
}