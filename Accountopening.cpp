
#include<iostream>
#include "Date.h"
#include "Time.h"
#include "User_info.h"
#include "Accountopening.h"
using namespace std;
account_opening::account_opening()//deafult constructor
{
	account_number = 0;
}
account_opening::account_opening(Date d, Time t, user_info Name,
	double account_number)//parametrized constructor
{
	date = d;
	this->timee = timee;
	this->Name = Name;
	this->account_number = account_number;
}
void account_opening::setvalues(Date date, Time timee, user_info Name,
	double account_number)//setvalue function
{
	this->date = date;
	this->timee = timee;
	this->Name = Name;
	this->account_number = account_number;
}
int account_opening::getaccount_number()//get function
{
	return account_number;
}
void account_opening::generate_accnum()//get function
{
	srand(time(0));
	for (int i = 0; i < 16; i++) //Random Generating Account Number of(16 numbers)
	{
		cout << rand() % 10;
	}
}
void account_opening::display()
{
	cout << "\t\t\t\tOpening Account Date : ";
	date.display(); //Display Function of Date Class is called 
	cout << "\n\t\t\t\tOpening Account Time : ";
	timee.display();//Display Function of Time Class is called 
	cout << endl;
	Name.display_userinfo();//Display Function of Userinfo Class is called
	cout << "\t\t\t\tAccount No. : "; generate_accnum();
	cout << endl;
	cout << "\t\t\t\tAccount has been Successfully Created..." << endl;
}