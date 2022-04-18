#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cstdlib>
#include<time.h>
#include <fstream>
#include <string>

#include "Date.h" 
#include "Accountopening.h"
#include "Savingaccount.h"
#include "Currentaccount.h"
#include "Taxpayment.h"
#include "Loanservice.h"
#include "Creditcard.h"

using namespace std;int main()
{
	int num;
	char op;
	do
	{
		system("cls");
		cout << "\t\t\t\t---WELCOME TO BANK ABC PVT---" << endl << endl << endl;
		cout << "\t\t\t\t\tMAIN MENU" << endl;
		cout << "\n\t\t================================================================================ " << endl;
		cout << endl;
		cout << "\t\t\t\t[1] Account Opening.\n\t\t\t\t[2] Account Type.\n\t\t\t\t[3] Tax Calculation.\n\t\t\t\t[4] Loan Facilities.\n\t\t\t\t[5] Issue Credit Cards / Debit Cards. .\n\t\t\t\t[6] Exit Program." << endl;
		cout << "\n\t\t================================================================================ " << endl;
		cout << endl;
		cout << "\t\t\t\tEnter Your Choice : ";
		cin >> num;
		system("cls");
		if (num == 1)
		{
			cout << "\t\t\t==================================================================================== " << endl;
			cout << "\t\t\t\t\t\tAccount Opening.." << endl;
			cout << "\t\t\t\tPlease Enter The Following Required Fields For Further Processing!!" << endl;
			cout << "\n\t\t\t==================================================================================== " << endl;
			Date D(1, 1, 1);
			cout << endl;
			Time T(1, 1, 1);
			user_info U;
			U.input();
			account_opening A(D, T, U, 0000);
			cout << "\n\t\t\t==================================================================================== " << endl << endl;
			A.display();
			cout << "\n\t\t\t==================================================================================== " << endl;
			cout << "\n\t\t\t\tDo you want to continue..!?" << endl;
			cout << "\t\t\t\tEnter Y , N : ";
			cin >> op;
			if (op == 'Y')
			{
				continue;
			}
			else
			{
				cout << "\n\t\t\t==================================================================================== " << endl;
				cout << "\n\t\t\t\t\tThankyou For being a part of ABC(pvt)Bank Ltd.." << endl;
				cout << "\t\t\t\t\tPlease Visit again!.." << endl;
				exit(0);
			}
		}
		else if (num == 2)
		{
			cout << "\t\t\t==================================================================================== " << endl;
			cout << "\t\t\t\t\t\tAccount Type." << endl;
			saving_acc Save;
			string acc_type;
			cout << "\n\t\t\t==================================================================================== " << endl;
			cout << "\n\t\t\t\tChoose Your Account Type." << endl;
			cout << "\t\t\t\t[1] Saving Account.\n\t\t\t\t[2] Current Account." << endl;
			cout << "\t\t\t\tEnter Your Account Type (Saving/Current): ";
			cin >> acc_type;
			cout <<
				"\n\t\t\t==================================================================================== " << endl;
			if (acc_type == "Saving")
			{
				Save.saving_accdetails();
			}
			else if (acc_type == "Current")
			{
				current_acc Current;
				Current.current_accdetails();
			}
			cout << "\n\t\t\t==================================================================================== " << endl;;
			cout << "\n\t\t\t\tDo You Want To Continue..!?" << endl;
			cout << "\t\t\t\tEnter Y , N : ";
			cin >> op;
			if (op == 'Y')
			{
				continue;
			}
			else
			{
				cout << "\n\t\t\t==================================================================================== " << endl;
				cout << "\n\t\t\t\tThankyou For being a part of ABC(pvt)Bank Ltd.." << endl;
				cout << "\t\t\t\tPlease Visit again!.." << endl;
				exit(0);
			}
		}
		else if (num == 3)
		{
			cout << "\t\t\t==================================================================================== " << endl;
			cout << "\t\t\t\t\tCheck The Tax Payment Status." << endl;
			cout << "\n\t\t\t==================================================================================== " << endl << endl;
			cout << "\t\t\t\tAnnual Salary" << setw(30) << "Tax(For Female)" << setw(30) << "Tax(For Male)";
			cout << endl;
			cout << "\t\t\t\t<=20000" << setw(35) << "No Tax Deducted" << setw(30) << "No Tax Deducted" << endl;
			cout << "\t\t\t\t>20000 & <=180000" << setw(21) << "5%" << setw(30) << "7%" << endl;
			cout << "\t\t\t\t>180000 & <=300000" << setw(20) << "7%" << setw(30) << "8%" << endl;
			cout << "\t\t\t\t>300000 & <=500000" << setw(20) << "10%" << setw(30) << "12%" << endl;
			cout << "\t\t\t\t>500000 & <=750000" << setw(20) << "12%" << setw(30) << "15%" << endl;
			cout << "\t\t\t\t>750000" << setw(31) << "15%" << setw(30) << "17%" << endl;
			cout << "\n\t\t\t==================================================================================== " << endl << endl;;
			char pin[5];
			cout << "\t\t\t\tDear Applicant!! Enter The Password You've Been Given Through The Bank!!" << endl;
			cout << "\t\t\t\tYour Pin:";
			for (int i = 0; i < 4; i++)
			{
				pin[i] = _getch();
				cout << "*";
			}
			pin[4] = '\0';
			if (!strcmp(pin, "1234")) //pin=1234
			{
				cout << endl << "\t\t\t\tYou're a Valid User!!" << endl << endl;
			}
			else
			{
				cout << endl << "\t\t\t\tYou're Not a Valid User!!\n\t\t\t\tTry Again later!!";
				exit(0);
			}
			tax_payment t;
			t.taxinput();
			t.displayinfo();
			t.taxcal();
			cout << "\n\t\t\t==================================================================================== " << endl;
			cout << "\n\t\t\t\tDo You Want To Continue..!?" << endl;
			cout << "\t\t\t\tEnter Y , N : ";
			cin >> op;
			if (op == 'Y')
			{
				continue;
			}
			else
			{
				cout << "\n\t\t\t==================================================================================== " << endl;
				cout << "\n\t\t\t\tThankyou For being a part of ABC(pvt)Bank Ltd.." << endl;
				cout << "\t\t\t\tPlease Visit again!.." << endl;
				exit(0);
			}
		}
		else if (num == 4)
		{
			cout << "\t\t\t======================================================================================== " << endl;
			cout << "\t\t\t\t\t\tLoan Facilities.." << endl;
			cout << "\t\t\t======================================================================================= " << endl;
			cout << "\t\t\t\tPlease Verify The Following Terms And Conditions Before Borrowing Loan!!\n\t\t\t\t[1] Your Tax Dues Must be Cleared If You're An Active Tax Payer.\n\t\t\t\t[2] The Applicant Must Have Atleast a Sum of Rupees Pkr - 50, 000 Rs In The Account." << endl;
			cout << "\t\t\t======================================================================================== " << endl;
			cout << "\t\t\t\t\t\tThe Amount of Loan Will Be As Follows.!!\n\t\t\t\t\t\t\t * For Filer Tax Payer * " << endl;
			cout << "\t\t\t======================================================================================== " << endl;
			cout << "\t\t\t\t\t\tGender" << setw(15) << "Age" << setw(15) << "loan" << endl;
			cout << "\t\t\t\t\t\tFemale" << setw(15) << "<65" << setw(15) << "7%" << endl;
			cout << "\t\t\t\t\t\tFemale" << setw(15) << ">65" << setw(15) << "10%" << endl;
			cout << "\t\t\t\t\t\tMale" << setw(17) << "<65" << setw(15) << "7%" << endl;
			cout << "\t\t\t\t\t\tMale" << setw(17) << ">65" << setw(15) << "10%" << endl;
			cout << "\t\t\t======================================================================================== " << endl;
			cout << "\t\t\t\t\t\t*For Non-Filer / Non-Active Tax Payer * " << endl;
			cout << "\t\t\t======================================================================================== " << endl;
			cout << "\t\t\t\t\t\tGender" << setw(15) << "Age" << setw(15) << "loan" << endl;
			cout << "\t\t\t\t\t\tFemale" << setw(15) << "<,=,>65" << setw(15) << "5%" << endl;
			cout << "\t\t\t\t\t\tMale" << setw(17) << "<,=,>65" << setw(15) << "5%" << endl;
			cout << "\t\t\t======================================================================================== " << endl;
			user_info u; account b; tax_payment t;
			loanservice l(u, t, b, 0);
			l.loanfunction();
			cout << "\t\t\t======================================================================================== " << endl;
			cout << "\n\t\t\t\tDo you Want To Continue..!?" << endl;
			cout << "\t\t\t\tEnter Y , N : ";
			cin >> op;
			if (op == 'Y')
			{
				continue;
			}
			else
			{
				cout << "\n\t\t\t======================================================================================== " << endl;
				cout << "\n\t\t\t\tThankyou For being a part of ABC(pvt)Bank Ltd.." << endl;
				cout << "\n\t\t\t\tPlease Visit again!.." << endl;
				exit(0);
			}
		}
		else if (num == 5)
		{
			cout <<
				"\t\t\t======================================================================================== " << endl;
			cout << "\t\t\t\t\t\tWelcome To The Credit Card Issueance.." << endl;
			cout << "\n\t\t\t======================================================================================== " << endl << endl;
			cout << "\t\t\tDear Applicant Please Check The Following Details Before proceeding for Issue of Credit Card.\n\t\t\t[1] The Applicant Must Have More Than 100000 Rupees.\n\t\t\t[2] The Applicant Must Be a Pakistani Citizen." << endl;
			cout << "\n\t\t\t======================================================================================== " << endl << endl;
			account b; user_info u;
			creditcard cd(b, " ");
			cd.issuecard();
			cout << "\n\t\t\t======================================================================================== " << endl;
			cout << "\n\t\t\t\tDo you Want To Continue..!?" << endl;
			cout << "\t\t\t\tEnter Y , N : ";
			cin >> op;
			if (op == 'Y')
			{
				continue;
			}
			else
			{
				cout << "\n\t\t\t======================================================================================== " << endl;
				cout << "\n\t\t\t\tThankyou For being a part of ABC(pvt)Bank Ltd.." << endl;
				cout << "\t\t\t\tPlease Visit again!.." << endl;
				exit(0);

			}
		}

		else if (num == 6)
		{
			cout << "\t===========================================================================" << endl;
			cout << "\t\t\tProgram ended successfully!" << endl << endl;

			cout << "\n\t===========================================================================" << endl;
			cout << "\n\tDo you want to continue..!?" << endl;
			cout << "\tEnter Y , N : ";
			cin >> op;
			if (op == 'Y')
			{
				continue;
			}
			else
			{
				cout <<
					"\n\t=================================================================" << endl;
				cout << "\n\tThankyou For being a part of ABC(pvt)Bank  Ltd.." << endl;
				cout << "\n\tPlease Visit again!.." << endl;
				exit(0);
			}
		}
	} while (num != '6');
	_getch();
	return (0);
}
