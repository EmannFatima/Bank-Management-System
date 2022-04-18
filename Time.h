#pragma once
#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time();
	Time(int, int, int);
	void settime(int, int, int);
	int gethour();
	int getmin();
	int getsec();
	void display();
};
