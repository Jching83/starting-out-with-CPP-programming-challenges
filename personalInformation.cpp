/*
Personal Information
Write a program that displays the following pieces of information, each on a separate line:
Your name
Your address, with city, state, and ZIP code
Your telephone number
Your college major
Use only a single cout statement to display all of this information.
*/

#include <iostream>

using namespace std;

int main()
{
	string name, address, phone, major; //hold variable

	//All variable with the required information
	name = "Jason Ching";
	address = "555 willow lane, nowehere, AL, 36618";
	phone = "(555)555-5555";
	major = "Applied Computer Science";

	//outputs the information each on a seperate line
	cout << "Name: " + name << "\nAddress: " + address << "\nPhone Number: " + phone << "\nCollege Major: " + major << endl;

	return 0;

}