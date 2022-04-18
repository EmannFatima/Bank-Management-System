#pragma once
#include<iostream>
#include"User_info.h"
#include"Account.h"
#include"Taxpayment.h"
using namespace std;
class loanservice
{
private:
	user_info u;
	tax_payment t;
	account b;
	double loan_receival;
public:
	loanservice();
	loanservice(user_info, tax_payment, account, double);
	void setvalues(user_info, tax_payment, account, double);
	double get_loanreceival();
	void loanfunction();
};
