/*
Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user which
rectangle has the greater area, or if the areas are the same.
*/

#include <iostream>

using namespace std;

int main()
{
	float length1, width1, length2, width2; //holds variables

	//gets rectangle 1 length and width
	cout << "Enter the length of the first rectangle: ";
	cin >> length1;
	
	cout << "Enter the width of the first rectangle: ";
	cin >> width1;

	//calculates the area of the first rectangle
	cout << "The area of the first rectangle is: " << length1 * width1 << endl;

	//gets rectangle 2 length and width
	cout << "Enter the length of the second rectrangle: ";
	cin >> length2;

	cout << "Enter the width of the second rectangle: ";
	cin >> width2;

	//calculates the area of the second rectangle
	cout << "The area of the second rectangle is: " << length2 * width2 << endl;

	//sets conditions to decide which rectangle is bigger or if they are the same
	if (length1 * width1 > length2 * width2)
		cout << "Rectangle 1 has a greater area than rectangel 2.";
	
	else if(length1 * width1 < length2 * width2)
		cout << "Rectangle 2 has a greater area than rectangel 1.";

	else if (length1 * width1 == length2 * width2)
	cout << "Rectangle 1 and 2 have the same area.";

		return 0;

}