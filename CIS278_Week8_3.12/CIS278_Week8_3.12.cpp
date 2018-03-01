/*************************************************************************
* Title: Date Class
* File: CIS278_Week8_3.12.cpp
* Author: James Eli
* Date: 1/17/2018
*
* Exercise 3.12 on page 101, Date Class
* Create a class called Date that includes three pieces of information as 
* data members—a month (type int), a day (type int) and a year (type int). 
* Your class should have a constructor with three parameters that uses the 
* parameters to initialize the three data members. For the purpose of this 
* exercise, assume that the values provided for the year and day are 
* correct, but ensure that the month value is in the integer range of 1-12; 
* if it isn’t, set the month to 1. Provide a set and get function for each 
* data member. Provide a member function displayDate that displays the month, 
* day and year separated by forward slashes (/). Write a test program that 
* demonstrates class Date’s capabilities.
*
* Notes:
*  (1) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   01/17/2018: Initial release. JME
*************************************************************************/
#include <iostream> // cout/endl

#include "date.h"   // Our Date class

using namespace std;

// Simple test of our Date class.
int main()
{
	// Instantiate 3 Date classes.
	Date d1;
	Date d2{ 13, 16, 2018 };
	Date d3(d1);

	// Display my birhtday.
	d1.setYear(1959); d1.setMonth(9); d1.setDay(14);
	cout << "My birthday is " << d1 << endl;

	// Date has 2 display methods:
	cout << "A date set with an invalid month (corrected): ";  
	d2.displayDate();
	cout << "\nA date set with the default values: " << d3 << endl;

	// Test Date class comparison operators.
	cout << boolalpha << d2 << " > " << d1 << " is: " << (d2 > d1) << endl;
	cout << d1 << " != " << d2 << " is: " << (d1 != d2) << endl;
	cout << d1 << " == " << "Date(9, 14, 1959) is: " << (d1 == Date(9, 14, 1959)) << endl;

	return 0;
}
