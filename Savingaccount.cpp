#include "Savingaccount.h"
#include"Account.h"
#include<iostream>
using namespace std;
saving_acc::saving_acc()
{
	saving_amount = 0;
}
saving_acc::saving_acc(int saving_amount)
{
	this->saving_amount = saving_amount;
}
void saving_acc::setValues(int saving_amount)
{
	this->saving_amount = saving_amount;
}
int saving_acc::get_saveamount()
{
	return saving_amount;
}
void saving_acc::saving_accdetails()
{
	input();
	{
		int interest;
		char choice;
		cout << "\n\t\t\t\tDear Applicant! Do you Want To Know The Deposited amount or Withdrawed amount!!" << endl;
		cout << "\t\t\t\tEnter 'D' for deposited amount. Enter 'W' for 	withdraw amount." << endl;
		cout << "\t\t\t\tEnter Your Choice : ";
		cin >> choice;
		if (choice == 'D')
		{
			cout << "\n\t\t\t\tDeposit Amount in Saving Account" << endl;
			cout << "\t\t\t\tCurrent Balance : " << totalmoney << " Rs" << endl;
			cout << "\t\t\t\tDeposited Amount : " << getdeposit() << " Rs" << endl;//Displaying Deposited Money Using Get() Function
			saving_amount = totalmoney + getdeposit();
			interest = (totalmoney * 2) / 100; //What if Total money = 10, 000 then interst = 200
			saving_amount = totalmoney + interest;//Saving amount saving both total moneyand interest altogether
			cout << "\t\t\t\tTotal Amount in Your Saving Account : "<< saving_amount << " Rs" << endl;
		}
		else if (choice == 'W')
		{
			cout << "\n\t\t\t\tWithdraw Amount in Saving Account" << endl;
			cout << "\t\t\t\tCurrent Balance : " << totalmoney << endl;
			cout << "\t\t\t\tWithdraw Amount : " << getwithdraw();
			saving_amount = totalmoney - getwithdraw();//Saving = totalmoney - withdrawal
			if (getwithdraw() > totalmoney)//if withdrwal money is greater than total money then this Conditional statement will Executes
			{
				cout << "\n\t\t\t\tYou've To Take Permission For Bank Overdraft Facility!!" << endl;
				saving_amount = totalmoney + getwithdraw();//saving amount saving total moneyand withdrawal
				cout << "\t\t\t\tYour Current Balance : " << saving_amount << endl;
			}
			else
				cout << "\n\t\t\t\tAfter Withdrawal Your Balance : " << saving_amount << " Rs" << endl;
		}
		else
			cout << "\t\t\t\tDear Applicant!! This is Invalid.\n\t\t\t\tPlease Try Again!!" << endl;
	}
}