#include<iostream>
#include<cstdlib>
#include "Time.h"
using namespace std;
Time::Time()
{
	hour = 0;
	min = 0;
	sec = 0;
}
Time::Time(int hour, int min, int sec)
{
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}
void Time::settime(int hour, int min, int sec)
{
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}
int Time::gethour()
{
	return hour;
}
int Time::getmin()
{
	return min;
}
int Time::getsec()
{
	return sec;
}
void Time::display()
{
	srand(time(0)); //Generating Random Time
	cout << 1 + rand() % 13 << ":"; //Hour = 1-12
	cout << 1 + rand() % 61 << ":"; //Minutes = 1-60
	cout << 1 + rand() % 61; //Seconds = 1-60
}