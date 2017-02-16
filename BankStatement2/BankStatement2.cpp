// BankStatement2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//Declare
	float totalD = 0, totalW = 0, totalC = 0;
	float amtEnterd;
	char transaction; 
	float bBalance;
  
	cout << "Please enter your account balance\n";
	cin >> bBalance;
	cout << "\n***********************************************\n";
	cout << "Enter your desired transaction(s)\n";

	//Get Balances
	do {
		cout << "Type the letter (w) for withdrawls, the letter (c) for check and the letter (d)\n";
		cout << "Type the letter (q) to quit when finished with the following transaction\n";
		cin >> transaction;

		switch (transaction) {
		case 'w':
		case 'W':
			cout << "Please enter your desired withdrawl amount.\n";
			cin >> amtEnterd;
			totalW += amtEnterd;
			break;

		case 'c':
		case 'C':
			cout << "Please enter the desired amount you want placed on a check.\n";
			cin >> amtEnterd;
			totalC += amtEnterd;
			break;

		case 'd':
		case 'D':
			cout << "Please enter the desired amount you want deposited.\n";
			cin >> amtEnterd;
			totalD += amtEnterd;
			break;

		case 'q':
		case 'Q':
			cout << "Transaction entry ending, Press enter to show Transaction Summary\n" << endl;
			break;

		default:
			cout << "Invalid Entry, Please type the letter (w) for withdrawls, letter (c) for checks, letter (d) for deposits or the letter (q) to quit application\n";
			break;

		}

	} while (transaction != 'q' && transaction != 'Q');


	//Get Transaction Summary with set width manipulator
	cout << "\n*****************************\n";
	std::cout << "Transaction Summary\n";
	std::cout << "\n*****************************\n";
	std::cout << "Beginning Balance:" <<setw(8) << bBalance << endl;
	std::cout << "Total Withdrawls:" << setw(9) << totalW << endl;
	std::cout << "Total Deposits" <<setw(12) << totalD << endl;
	std::cout << "Total Checks:" <<setw(13) << totalC << endl;
	std::cout << "Ending Balance:" << setw(11) << bBalance - totalW + totalD - totalC << endl;
	std::cout << "\n*****************************\n";


	return 0;

}

