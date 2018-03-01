/*************************************************************************
* Title: Date Class
* File: date.h
* Author: James Eli
* Date: 1/17/2018
*
* Date Class Declaration.
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
*  (1) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   01/17/2018: Initial release. JME
*************************************************************************/
#ifndef _DATE_H
#define _DATE_H

#include <iostream>
#include <tuple>

class Date
{
public:
	// Default 3-parameter constructor sets date to Unix epoch.
	Date(int month = 1, int day = 1, int year = 1970);

	// Set/get functions for member data.
	void setMonth(int);
	int getMonth() const;

	void setDay(int);
	int getDay() const;

	void setYear(int);
	int getYear() const;

	// Displays the month, day and year separated by forward slashes(/).
	void displayDate() const;

	// Overloaded output operator, displays the month, day and year separated by forward slashes(/).
	friend std::ostream& operator<< (std::ostream& os, const Date& d)
	{
		return os << d.month << '/' << d.day << '/' << d.year;
	}

	// Overloaded comparison operators.
	friend bool operator== (const Date& d1, const Date& d2)
	{
		return (std::tie(d1.year, d1.month, d1.day) == std::tie(d2.year, d2.month, d2.day));
	}

	friend bool operator!= (const Date& d1, const Date& d2)
	{
		return !(d1 == d2);
	}

	friend bool operator> (const Date& d1, const Date& d2)
	{
		return (std::tie(d1.year, d1.month, d1.day) > std::tie(d2.year, d2.month, d2.day));
	}

	friend bool operator< (const Date& d1, const Date& d2)
	{
		return (std::tie(d1.year, d1.month, d1.day) < std::tie(d2.year, d2.month, d2.day));
	}

private:
	// Private member data representing month, day and year.
	int month, day, year;
};

#endif