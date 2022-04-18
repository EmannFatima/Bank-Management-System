#include "Taxpayment.h"
#include<iostream>
using namespace std;
tax_payment::tax_payment()
{
	annual_salary = 0;
	//Default Constructor
}
tax_payment::tax_payment(int annual_salary)
{
	this->annual_salary = annual_salary;
	//Parametrized Contrustors
}
void tax_payment::set_values(int annual_salary)
{
	this->annual_salary = annual_salary;
	//Setvalues for Tax class
}
int tax_payment::get_annualsalary()
{
	return annual_salary;
}
void tax_payment::taxinput()
{
	cout << "\t\t\t\tPlease Enter Your Annual Salary : ";
	//Enter annual salary to proceed
	cin >> annual_salary;
}
void tax_payment::taxcal()
//it'll calculates all taxes 
{
	int tax = 0;
	char op;
	//Using For gender (F/f/M/m)
	cout << "\t\t\t\tEnter Your Gender To Calculate Tax Accordingly : ";
	cin >> op;
	if (op == 'f' || op == 'F')//if User Enter (F/f) then this Condituional Satetement will executes
	{
		//and within that
		if (annual_salary <= 20000)//if Annual salary is less than or equal to 20,000 then this conditional statement executes
		{
			cout << "\t\t\t\tYou Donot Fall Under The Category To Pay Tax..!!" << endl; //And no Tax will be deducted
		}
		else if (annual_salary > 20000 && annual_salary <= 180000) //else if annual salary is greater than 20, 000 and less than equal to 180, 000 then this conditional statement will executes
		{
			tax = annual_salary * 0.5;
			//and tax will be calculates that's 5% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 180000 && annual_salary <= 300000) //else if annual salary is greater than 180, 000 and less than equal to 300000 then this conditional statement will executes
		{
			tax = annual_salary * 0.07; //and tax will be calculates that's 7% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 300000 && annual_salary <= 500000) //else if annual salary is greater than 300000 and less than equal to 500000 then this conditional statement will executes
		{
			tax = annual_salary * 0.1;
			//and tax will be calculates that's 10% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 500000 && annual_salary <= 750000)
			//else if annual salary is greater than 500000 and less than equal to 750000 then this conditional statement will executes
		{
		tax = annual_salary * 0.12;
		//and tax will be calculates that's 12% 
		 cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 750000)
			//else if annual salary is greater than 750,000 conditional statement will executes
		{
		tax = annual_salary * 0.15;
		//and tax will be calculates that's 15% 
		 cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
	}
	else if (op == 'm' || op == 'M')//if User Enter (M/m) then this Condituional Satetement will executes
	{
		//and within that
		if (annual_salary <= 20000)//if Annual salary is less than or equal to 20,000 then this conditional statement executes
		{
			cout << "\t\t\t\tYou Donot Fall Under The Category To Pay Tax..!!" << endl; //And no Tax will be deducted
		}
		else if (annual_salary > 20000 && annual_salary <= 180000) //else if annual salary is greater than 20,000 and less than equal to 180, 000 then this conditional statement will executes
		{
			tax = annual_salary * 0.7;
			//and tax will be calculates that's 7% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 180000 && annual_salary <= 300000) //else if annual salary is greater than 180,000 and less than equal to 300000 then this conditional statement will executes
		{
			tax = annual_salary * 0.08;//and tax will be calculates that's 8% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 300000 && annual_salary <= 500000)//else if annual salary is greater than 300000 and less than equal to 500000 then this conditional statement will executes
		{
			tax = annual_salary * 0.12;//and tax will be calculates that's 12% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 500000 && annual_salary <= 750000)//else if annual salary is greater than 500000 and less than equal to 750000 then this conditional statement will executes
		{
			tax = annual_salary * 0.15;//and tax will be calculates that's 15% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
		else if (annual_salary > 750000)//else if annual salary is greater than 750,000 conditional statement will executes
		{
			tax = annual_salary * 0.17;//and tax will be calculates that's 17% 
			cout << "\t\t\t\tTotal Tax is : " << tax << " Rs" << endl;
		}
	}
}
void tax_payment::displayinfo()
{
	cout << "\t\t\t\tAppilcant's Annual Salary : " << annual_salary <<" Rs" << endl;
}



