#pragma once
#include<iostream>
#include"Account.h"
using namespace std;
class saving_acc : public account
{
private:
	int saving_amount;
public:
	saving_acc();
	saving_acc(int);
	void setValues(int);
	int get_saveamount();
	void saving_accdetails();
};