#include"Currentaccount.h"
#include"Account.h"
#include<iostream>
using namespace std;
current_acc::current_acc()//default constructor
{
	current_amount = 0;
}
current_acc::current_acc(int current_amount)//parametrized constructor
{
	this->current_amount = current_amount;
}
void current_acc::setValues_c(int current_amount)//set function
{
	this->current_amount = current_amount;
}
int current_acc::get_curamount()//getfunction
{
	return current_amount;
}
void current_acc::current_accdetails()//cuurentaccount function
{
	input();
	char choice;
	cout << "\n\t\t\t\tDear Applicant! Do you Want To Know The Deposited amount or Withdrawed amount!!" << endl;
	cout << "\t\t\t\tEnter 'D' for deposited amount. Enter 'W' for withdraw amount." << endl;
	cout << "\t\t\t\tEnter Your Choice : ";
	cin >> choice;
	if (choice == 'D')
	{
		cout << "\n\t\t\t\tDeposit amount in Current Account" << endl;
		cout << "\t\t\t\tCurrent Balance : " << totalmoney	<< " Rs" << endl;
		cout << "\t\t\t\tDeposited Amount : " << getdeposit() << " Rs" << endl;
		current_amount = totalmoney + getdeposit();
		//Current Amount Stores Total money and deposited money altogether
		cout << "\t\t\t\tAfter Deposite Your Current Balance : " << current_amount << " Rs" << endl;
	}
	int penalty;
	if (choice == 'W')
	{
		cout << "\n\t\t\t\tWithdraw amount in Current Account" << endl;
		cout << "\t\t\t\tCurrent Balance : " << totalmoney << " Rs" << endl;
		cout << "\t\t\t\tWithdraw Amount : " << getwithdraw() << " Rs"
			<< endl;
		current_amount = totalmoney - getwithdraw(); //Current = total money - withdrwal
		if (current_amount < 500)//if Current amount is less then 500 then this conditional statement executes
		{
			penalty = (500 - totalmoney) / 10;//Penalty will store (  500 - total money) / 10
			current_amount = totalmoney - penalty;//Current amount will stores(total money - penalty)
			cout << "\n\t\t\t\tBalance After Deducting Penalty : " << current_amount << endl;
		}
		else if (getwithdraw() > totalmoney)//if withdrawalamount is greater then total money then this conditional statement will executes
		{
			cout << "\n\t\t\t\tYou have to take permission for Bank Overdraft Facility!!" << endl;
			current_amount = totalmoney + getwithdraw();//current amount will stores total moneyand withdrwal amount altogether
			cout << "\t\t\t\tYour Current Balance : " << current_amount << endl;
		}
		else//Else than that this statement will excutes if current money ain't less than 500 and if withdrawal ain't graeter than total money
		{
			cout << "\t\t\t\tAfter Withdrawal Your Current Balance : " << current_amount << " Rs" << endl;
		}
	}
}