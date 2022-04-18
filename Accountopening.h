#pragma once
#include<iostream>
#include"Date.h"
#include"Time.h"
#include"user_info.h"
using namespace std;
class account_opening
{
private:
	Date date; //Composite Class of Date
	Time timee; //Compoiste Class of Time
	user_info Name; //composite Class of user_info 
	double account_number;
public:
	account_opening();
	account_opening(Date, Time, user_info, double);
	void setvalues(Date, Time, user_info, double);
	int getaccount_number();
	void generate_accnum();
	void display();
};