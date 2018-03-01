/*************************************************************************
* Title: Date Class
* File: date.cpp
* Author: James Eli
* Date: 1/17/2018
*
* Date Class Definition.
*
* Create a class called Date that includes three pieces of information as
* data members—a month (type int), a day (type int) and a year (type int).
* Your class should have a constructor with three parameters that uses the
* parameters to initialize the three data members. For the purpose of this
* exercise, assume that the values provided for the year and day are
* correct, but ensure that the month value is in the integer range of 1-12;
* if it isn’t, set the month to 1. Provide a set and get function for each
* data member. Provide a member function displayDate that displays the month,
* day and year separated by forward slashes (/).
*
* Notes:
*  (1) Very basic stuff here.
*  (2) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   01/17/2018: Initial release. JME
*************************************************************************/
#include <iostream>

#include "date.h"

// Date class constructor, setters, getters and display methods.
Date::Date(int m, int d, int y) { setMonth(m); day = d; year = y; }

// Validate month == 1 to 12, correct to 1 per instructions.
void Date::setMonth(int m) { month = ((m >= 1 && m <= 12) ? m : 1); }
int Date::getMonth(void) const { return month; }

void Date::setDay(int d) { day = d; }
int Date::getDay(void) const { return day; }

void Date::setYear(int y) {	year = y; }
int Date::getYear(void) const { return year; }

// Display the month, day and year separated by forward slashes(/)
void Date::displayDate() const { std::cout << *this; }

