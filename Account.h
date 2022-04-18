#pragma once
#include<iostream>
using namespace std;
class account
{
protected:
	int deposited_money;
	int withdrawal_money;
	int totalmoney;
public:
	account();
	account(int, int, int);
	void setvalues(int, int, int);
	int getdeposit();
	int getwithdraw();
	int get_totalmoney();
	void input();
	void display_money();
};
