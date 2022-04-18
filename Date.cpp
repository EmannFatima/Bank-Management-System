#include<iostream>
#include<cstdlib>
#include "Date.h"
using namespace std;
Date::Date()//default cnstructor
{
	date = 0;
	month = 0;
	year = 0;
}
Date::Date(double date, double month, double year)//parametrized constructor
{
	this->date = date;
	this->month = month;
	this->year = year;
}
void Date::setdate(double date, double month, double year)//set function
{
	this->date = date;
	this->month = month;
	this->year = year;
}
int Date::getdate()//getfunction
{
	return date;
}
int Date::getmonth()//getfunction
{
	return month;
}
int Date::getyear()//getfunction
{
	return year;
}
void Date::display()
{
	srand(time(0));//Generating Random Date, Month and Year 
	cout << 1 + rand() % 32 << "-"; //1-31 = Date
	cout << 1 + rand() % 13 << "-"; //1-12 = Month
	cout << 1 + rand() % 31; //1-30 = Year
}