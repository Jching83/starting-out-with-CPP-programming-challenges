/*
Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:

  • The number of millimeters higher than the current level that the ocean’s level will be
    in 5 years

  • The number of millimeters higher than the current level that the ocean’s level will be
    in 7 years

  • The number of millimeters higher than the current level that the ocean’s level will be
    in 10 years
*/

#include <iostream>

using namespace std;

int main()
{
    double fiveYears, sevenYears, tenYears; //holds variables

    fiveYears = 1.5 * 5; //calculates ocean levels after five years
    sevenYears = 1.5 * 7; //calculates ocean levels after seven years
    tenYears = 1.5 * 10; //calculates ocean levels after ten years

    // provides output for ocean levels in millimeters for each of the given time periods
    cout << "In five years the ocean levels will be: " << fiveYears << "mm" << endl; 
    cout << "In seven years the ocean levels will be: " << sevenYears << "mm" << endl;
    cout << "In ten years the ocean levels will be: " << tenYears << "mm" << endl;

    return 0;

}