#include "Creditcard.h"
#include"Account.h"//composite class of creditcard
#include<iostream>
using namespace std;
creditcard::creditcard()//default constructor
{
	country = " ";
}
creditcard::creditcard(account b, string country)//parametrized constructor
{
	this->b = b;
	country = country;
}
void creditcard::setvalues(account b, string country)//setvalue function
{
	this->b = b;
	this->country = country;
}
string creditcard::get_country()//get function
{
	return country; //get country
}
void creditcard::issuecard()//creditcard function 
{
	cout << "\t\t\t\tDear Applicant Enter Your Country : ";//enter country
	cin >> country;
	cout << "\t\t\t\tDear Applicant Enter Current Amount In Your Account..!!";
	b.input(); //Through Composition input Function of account class is called
	cout << "\n\t\t\t======================================================================================= = ";
	b.display_money(); //Through Composition display money Function of account class is called
	if ((b.get_totalmoney() < 100000) || (country != "pakistan"))//if total money is less than 10, 0000 and country isn't equal topakistan then this conditional statemnt will executes
	{
		cout << "\n\t\t\t\tDear Applicant! You're Not Eligible!! " << endl;
		cout << "\t\t\t\tPlease Visit again later !!..\n\t\t\t\tSystem is busy now!!" << endl;
		exit(0); //And programs terminates
	}
	int num;//For debit and credit card issuance
	int card;//For Bank Preference
	cout << "\n\t\t\t\tDear applicant!\n\t\t\t\t[1] To Issue Credit Card.\n\t\t\t\t[2] To Issue Debit Card." << endl;
	cout << "\t\t\t\tEnter Your Choice : ";
	cin >> num; //1-2
	if ((num == 1) & (b.get_totalmoney() > 100000 && b.get_totalmoney() <= 500000))//if num == 1 and total money is greater  than 10, 0000 and less than equal to 500, 000 then this conditional statement will executes
	{
		cout << "\n\t\t\t\tCongratulations!You have been Successfully Granted a Credit Card!!" << endl;//and granted you a credit card
		cout << "\t\t\t\tYou're Now a Supreme Member of ABC'S (pvt-ltd) Bank!!" << endl;
	}
	if ((num == 1) & (b.get_totalmoney() > 500000))//but what if your total money is more tahn 500,000 then this conditional statemnt will executes
	{
		//in this it'll ask you Either you want debit card(i.e your bank prefence) Or credit card(which is already granted you i.e your ownpreference)
		cout << "\n\t\t\t\tTotal Balance In Your Account Is More Than Pkr - 500000 Rs!!" << endl;
		cout << "\t\t\t\tBank Preference : You can have a Debit Card!!" << endl;
		cout << "\n\t\t\t\tSelect Whether You Want Credit or Debit card!!" << endl;
		cout << "\t\t\t\t[1] For Your Own Preference.\n\t\t\t\t[2] For Bank Preference." << endl;;
		cout << "\t\t\t\tYour Choice : ";
		cin >> card;
		//1-2
		if (card == 1)
		{
			cout << "\n\t\t\t\tSuccessfully Granted a Credit Card.." << endl;
		}
		else
		{
			cout << "\n\t\t\t\tSuccessfully Granted a Debit Card.." << endl;
		}
	}
	else if ((num == 2) & (b.get_totalmoney() >= 100000 && b.get_totalmoney() <= 500000))//if num == 2 and total money is greater than 10, 0000 and less than equal to 500, 000 then this conditional statement will executes
	{
		cout << "\n\t\t\t\tCongratulations!You have been Successfully Granted a Debit Card.." << endl;//and granted you a debit card
		cout << "\t\t\tYou are Now a Supreme Member of ABC'S (pvt-ltd) Bank" << endl;
	}
	if ((num == 2) & (b.get_totalmoney() > 500000)) //but what if your total money is more tahn 500, 000 then this conditional statemnt will executes
	{ //in this it'll ask you Either you want credit card(i.e your  bank prefence) Or debit card(which is already granted you i.e your own preference)
		cout << "\n\t\t\t\tTotal Balance In Your Account Is More Than Pkr - 500000 Rs!!" << endl;
		cout << "\t\t\t\tBank Preference : You can have a Credit Card!!" << endl;
		cout << "\t\t\t\t===================================================================" << endl;
		cout << "\n\t\t\t\tSelect Whether You Want Credit or Debit card!!" << endl;
		cout << "\t\t\t\t[1] For Your Own Preference.\n\t\t\t\t[2] For Bank Preference." << endl;;
		cout << "\t\t\t\tYour Choice : ";
		cin >> card;
		if (card == 1)

			//1-2
		{
			cout << "\n\t\t\t\tSuccessfully Granted a Credit Card!!" << endl;
		}
		else
		{
			cout << "\n\t\t\t\tSuccessfully Granted a Debit Card!!" << endl;
		}
	}
}


