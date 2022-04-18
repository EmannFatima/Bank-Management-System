#pragma once
#include<iostream>
using namespace std;
class user_info
{
private:
	int age;
	string First_name;
	string Last_name;
	string Name; //For Concatenation : Name = First_name + Last_name 
	char CNIC[50];
	string sign;
	char gender;
public:
	user_info();
	user_info(string, string, string, int, char, string, char);
	void set_info(string, string, string, int, char, string, char);
	string get_fname();
	string get_lname();
	int getage();
	char getCnic();
	string getsign();
	char getgender();
	void input();
	void input_age();
	void input_gender();
	void display_userinfo();
};