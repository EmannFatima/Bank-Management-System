#include "loanservice.h"
#include"User_info.h"
#include"Taxpayment.h"
#include"Account.h"
#include<iostream>
using namespace std;
loanservice::loanservice()//default constructor
{
	loan_receival = 0;
}
loanservice::loanservice(user_info u, tax_payment t, account b, double loan_receival)//parametrized constructor
{
	this->u = u;
	this->t = t;
	this->b = b;
	this->loan_receival = loan_receival;
}
void loanservice::setvalues(user_info u, tax_payment t,account b, double loan_receival)
{
	this->u = u;
	this->t = t;
	this->b = b; //Setvalues for Loan class
	this->loan_receival = loan_receival;
}
double loanservice::get_loanreceival()
{
	return loan_receival; //Get loan 
}
void loanservice::loanfunction()
{
	char op1, op2;
	cout << "\t\t\t\tEnter The Amount You Want As Loan Recieval : ";
	cin >> loan_receival; //Enter Desire Amount for loan
	u.input_age(); //Through Composition Age function is called From userinfo class
	u.input_gender(); //Through Composition Gender function is called From userinfo class
	cout << "\t\t\t\tDear Applicant Enter 'Y' If You're An Active Tax Payer : "; //Enter (Y/y) For Active tax payer 
	cin >> op1;
	if (op1 == 'Y' || op1 == 'y') //if User Enter (Y/y)then this conditional statement will executes
	{ //and within this
		cout << "\t\t\t\tPlease Verify Whether You Paid Taxes or Not (Y / N) : "; //Enter (Y/y/N/n) Either you pay tax or not
		cin >> op2;
		if (op2 == 'Y' || op2 == 'y') //if User Enter (Y/y) then this conditional statement will executes
		{
			cout << "\n\t\t\t\tPlease Check The Total Money In Your Account(>= 50,000)..!"; //Atleast enter balance more than 50,000
			b.input(); //Through Composition input function is called From Account class
			if (!(b.get_totalmoney() >= 50000)) //if Total balance in account isn't greater than or equal to 50,000 then User willn't be applicable to request for loan
			{
				cout << "\t\t\t\tDear Applicant! You're Not Applicable To Request For Loan!!" << endl;
				exit(0);//and program terminates
			}
			else
			{
				cout << "\n\t\t\t\tThe Miminum Requirement For The Loan Services is Successfully Verified!!" << endl;//Else than that 
			}
			{
				if (u.getgender() == 'f' || u.getgender() == 'F' && u.getage() > 65) //if Gender is (F/f) and age is greater than 65 then this conditional staement will executes
				{
					cout << "\t\t\t\tDear Applicant!" << "\n\t\t\t\tYour Age is " << u.getage() << ".\n\t\t\t\tYou've Been Successfully Given The Amount Pkr " << loan_receival * 0.1 << " Rs" << endl;// loan = 10%
				}
				else if (u.getgender() == 'f' || u.getgender() == 'F' && u.getage() < 65) //if Gender is (F/f) and age is less than 65 then this conditional staement will executes
				{
					cout << "\t\t\t\tDear Applicant!" << "\n\t\t\t\tYour Age is " << u.getage() << ".\n\t\t\t\tYou've Been Successfully Given The Amount Pkr " << loan_receival * 0.07 << " Rs" << endl;// loan = 7%
				}
				if (u.getgender() == 'm' || u.getgender() == 'M' && u.getage() > 65)//if Gender is (M/m) and age is greater than 65 then this conditional staement will executes
				{
					cout << "\t\t\t\tDear Applicant!" << "\n\t\t\t\tYour Age is " << u.getage() << ".\n\t\t\t\tYou've Been Successfully Given The Amount Pkr " << loan_receival * 0.1 << " Rs" << endl; // loan = 10 %
				}
				else if (u.getgender() == 'm' || u.getgender() == 'M' && u.getage() < 65) //if Gender is (M/m) and age is less than 65 then this conditional staement will executes
				{
					cout << "\t\t\t\tDear Applicant!" << "\n\t\t\t\tYour Age is " << u.getage() << ".\n\t\t\t\tYou've Been Successfully Given The Amount Pkr " << loan_receival * 0.07 << " Rs" << endl;// loan = 7%
				}
			}
		}
		else //Else If the user doesn’t pay tax, then this conditional statement will executes
		{
			cout << "\t\t\t\tPlease Clear Your Tax Dues And Visit Again!!" << endl;
		}
	}
	else //Else if user isn't Active tax payer then this conditional statement will executes
	{
		cout << "\n\t\t\t\tDear Applicant! Since You're Not An Active Tax Payer.\n\t\t\t\tThe Amount of Loan You Received : " << loan_receival * 0.05 << " Rs" << endl;// 5% of the actual laon amount
	}
}