#include "user_info.h"
#include<iostream>
#include<string>
using namespace std;
user_info::user_info()
{
	First_name = " ";
	Last_name = " ";
	Name = " ";
	age = 0;
	CNIC[50] = ' ';
	sign = "";
	gender = ' ';
}
user_info::user_info(string First_name, string Last_name, string Name,int age, char CNIC, string sign, char gender)
{
	this->First_name = First_name;
	this->Last_name = Last_name;
	this->Name = Name;
	this->age = age;
	this->CNIC[50] = CNIC;
	this->sign = sign;
	this->gender = gender;
}
void user_info::set_info(string First_name, string Last_name, string Name, int age, char CNIC, string sign, char gender)
{
	this->First_name = First_name;
	this->Last_name = Last_name;
	this->Name = Name;
	this->age = age;
	this->CNIC[50] = CNIC;
	this->sign = sign;
	this->gender = gender;
}
string user_info::get_fname()
{
	return First_name;
}
string user_info::get_lname()
{
	return Last_name;
}
int user_info::getage()
{
	return age;
}
char user_info::getCnic()
{
	return CNIC[50];
}
string user_info::getsign()
{
	return sign;
}
char user_info::getgender()
{
	return gender;
}
void user_info::input()
{
	cout << "\t\t\t\tEnter Applicant's First Name : ";
	cin >> First_name;
	cout << "\t\t\t\tEnter Applicant's Last Name : ";
	cin >> Last_name;
	Name = First_name + " " + Last_name;
	//Cancatenating String
	input_gender(); //Gender Function
	input_age(); //Age Function

	cout << "\n\t\t\t\tDear Applicant!! Enter CNIC Once in a Correct Way For Security Purpose!!\n\t\t\t\tFollow the format CNIC Number in format(00000 - 0000000 - 0).." << endl;
	cout << "\t\t\t\tEnter CNIC : ";
	cin >> CNIC; //12345-1234567 - 1
	if (CNIC[5] != CNIC[13]) //if At Index 5 and 13 there's no "-" Then it'll Ask the User to Enter Cnic Again..
	{
		cout << "\n\t\t\t\tYou have not Entered a Valid CNIC!!" << endl;
		cout << "\t\t\t\tEnter CNIC Again: ";
		for (int i = 0; i < 1; i++)
		{
			cin >> CNIC;
			if (CNIC[5] != CNIC[13]) //if User Enter Wrong Cnic Again Then Program terminates!!
			{
				cout << "\t\t\t\tThe System Has Locked Please Try Again Later!!" << endl;
				exit(0);
			}
		}
	}
	cout << "\t\t\t\tEnter Your Signature : ";
	//User Choice They Can Enter Anything Randomly In Sign i.e Userprogram
	cin >> sign;
}
void user_info::input_age()
{
	cout << "\t\t\t\tEnter Applicant's Age : ";
	cin >> age;
	while (age < 18)//if User Enter Age less Than 18 Then it'll Ask you to Enter a Valid Age >= 18
	{
		cout << "\t\t\t\tPlease Enter a Valid Age i.e (>=18) : ";
		cin >> age;
	}
	cout << "\t\t\t\tAge Verification Successfull!!" << endl;
}
void user_info::input_gender()
{
	cout << "\t\t\t\tEnter Applicant's Gender (M:Male,F:Female) : ";
	cin >> gender;
	while (gender != 'F' && gender != 'f' && gender != 'M' && gender != 'm') //if User Enter Gender Else than(F/f/M/m). The it'll Ask Again To Enter Appropriate Gender
	{
		cout << "\t\t\t\tEnter Applicant's Gender : ";
		cin >> gender;
	}
}
void user_info::display_userinfo()
{
	cout << "\t\t\t\tName of Account Holder : " << Name << endl;
	cout << "\t\t\t\tAge of Account Holder : " << age << endl;
	cout << "\t\t\t\tGender of Account Holder : " << gender << endl;
	cout << "\t\t\t\tCNIC of Account Holder : " << CNIC << endl;
	cout << "\t\t\t\tSignature of Account Holder : " << sign << endl;
}