/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Banking System                */
/*  Author:   Christine Laurendeau                 */
/*  Date:     08-JUN-2016                          */
/*                                                 */
/*  (c) 2016 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "View.h"
using namespace std;

void View::mainMenu(int& choice)
{
  string str;

  choice = -1;

  cout<< "\n\n\n                   BANKING SYSTEM MAIN MENU\n\n";
  cout<< "          1. Admin menu \n\n";
  cout<< "          2. Customer menu \n\n";
  cout<< "          0. Exit\n\n";

  while (choice < 0 || choice > 2) {
    cout << "Enter your selection:  ";
    choice = readInt();
  }
}

void View::adminMenu(int& choice)
{
  string str;

  choice = -1;

  cout<< "\n\n\n                   BANKING SYSTEM ADMIN MENU\n\n";
  cout<< "          1. Add account \n\n";
  cout<< "          2. Print accounts \n\n";
  cout<< "          3. Print customers \n\n";  
  cout<< "          4. Remove account \n\n";  
  cout<< "          0. Exit\n\n";

  while (choice < 0 || choice >4) {
    cout << "Enter your selection:  ";
    choice = readInt();
  }
}

void View::custMenu(int& choice)
{
  string str;

  choice = -1;

  cout<< "\n\n\n                   BANKING SYSTEM CUSTOMER MENU\n\n";
  cout<< "          1. Check balance \n\n";
  cout<< "          0. Exit\n\n";

  while (choice < 0 || choice > 1) {
    cout << "Enter your selection:  ";
    choice = readInt();
  }
}

void View::printAccounts(Bank& bank)
{
  // The stringstream class helps us convert from numeric values to string.
  // The I/O manipulation functions help us make the output look pretty.

	string stringData;
 
  cout << endl << "ACCOUNTS: " << endl;

  bank.getAccounts().toString(stringData);

	cout<<stringData;


}


//prints the customer list 
void View::printCustomers(Bank& bank)
{

  stringstream ss;

  cout << endl << "CUSTOMERS: " << endl;

  for (int i=0; i<bank.getCustomers().getSize(); i++){

    Customer* cust= bank.getCustomers().get(i);

    cout << cust->getCustName() << "  " << setw(4) << cust->getCustId() << " \n ";

  }
}

void View::accountToBalance(Bank& bank){

  int choice;
  float balance;

  cout<< "Enter your account number"<< endl;
  choice = readInt();

  if (bank.getAccounts().accounttoBalance(choice)<0)
	printError("Sorry, your account was not found");
  else
  	printBalance(bank.getAccounts().accounttoBalance(choice));

}


void View::printBalance(float b)
{
  // The stringstream class helps us convert from numeric values to string.
  // The I/O manipulation functions help us make the output look pretty.

  stringstream ss;
  ss << setw(8) << fixed << setprecision(2) << b;
  cout << endl << "Your balance is $" << ss.str() << endl << " -- press enter to continue...";
  cin.get();
}

void View::printError(string err)
{
  cout << endl << err << " -- press enter to continue...";
  cin.get();
}

void View::readCustId(int& id)
{
  string str;

  cout << "Customer id: ";
  getline(cin, str);
  stringstream ss(str);
  ss >> id;
}


void View::readAcctNum(int& acctNum)
{
  string str;

  cout << "Account number: ";
  getline(cin, str);
  stringstream ss(str);
  ss >> acctNum;
}

void View::readAcctType(AcctType& acctType)
{
  string str;
  int    num;

  cout << "Account type [1 for chequing, 2 for savings]: ";
  getline(cin, str);
  stringstream ss(str);
  ss >> num;

  if (num == 1)
    acctType = CHEQUING;
  else if (num == 2)
    acctType = SAVINGS;
  else
    acctType = GENERAL;
}

int View::readInt()
{
  string str;
  int    num;

  getline(cin, str);
  stringstream ss(str);
  ss >> num;

  return num;
}

void View::pause()
{
  string str;

  cout << endl << "\nPress enter to continue...";
  getline(cin, str);
}

