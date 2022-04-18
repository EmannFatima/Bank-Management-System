#pragma once
#include<iostream>
using namespace std;
class tax_payment
{
private:
	int annual_salary;
public:
	tax_payment();
	tax_payment(int);
	void set_values(int);
	int get_annualsalary();
	void taxinput();
	void taxcal();
	void displayinfo();
};