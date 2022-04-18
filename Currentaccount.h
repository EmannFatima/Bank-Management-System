#pragma once
#include<iostream>
#include"Account.h"
using namespace std;
class current_acc :public account
{
private:
	int current_amount;
public:
	current_acc();
	current_acc(int);
	void setValues_c(int);
	int get_curamount();
	void current_accdetails();
};