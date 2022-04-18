#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
	double date;
	double month;
	double year;
public:
	Date();
	Date(double, double, double);
	void setdate(double, double, double);
	int getdate();
	int getmonth();
	int getyear();
	void display();
};