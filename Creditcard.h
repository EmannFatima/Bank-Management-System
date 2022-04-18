#pragma once
#include<iostream>
#include"Account.h"
using namespace std;
class creditcard
{
private:
	account b;
	string country;
public:
	creditcard();
	creditcard(account, string);
	void setvalues(account, string);
	string get_country();
	void issuecard();
};