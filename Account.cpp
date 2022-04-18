#include "Account.h"
#include<iostream>
using namespace std;
account::account()//defaultconstructor
{
	deposited_money = 0;
	withdrawal_money = 0;	
	totalmoney = 0;
}
account::account(int deposited_money, int withdrawal_money, int totalmoney)//parametrized constructor
{
	this->deposited_money = deposited_money;
	this->withdrawal_money = withdrawal_money;
	this->totalmoney = totalmoney;
}
void account::setvalues(int deposited_money, int withdrawal_money, int totalmoney)//setvaues function
{
	this->deposited_money = deposited_money;
	this->withdrawal_money = withdrawal_money;
	this->totalmoney = totalmoney;
}
int account::getdeposit()//get function
{
	return deposited_money;
}
int account::getwithdraw()//get function
{
	return withdrawal_money;
}
int account::get_totalmoney()//get function
{
	return totalmoney;
}
void account::input()//account(input) function
{
	cout << "\n\t\t\t\tEnter The Deposited Amount : ";
	cin >> deposited_money;
	cout << "\t\t\t\tEnter The Withdrawed Amount : ";
	cin >> withdrawal_money;
	totalmoney = deposited_money - withdrawal_money; //total money stores(deposited amount - withdrawal amount)
}
void account::display_money()//money display function
{
	cout << "\n\t\t\t\tDeposited Amount : " << deposited_money << " Rs" << endl;
	cout << "\t\t\t\tWithdrawed Amount : " << withdrawal_money << " Rs" << endl;
	cout << "\t\t\t\tTotal Amount In Account : " << totalmoney << " Rs" << endl;
}
