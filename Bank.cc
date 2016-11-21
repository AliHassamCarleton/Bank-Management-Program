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

/*	Bank Class

The Bank Class has the reponsibility of helping the Bank Control class to add and remove Accounts and Customers.
It has access to our Account List and Customer Array classes and which stores the information itself.


*/

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Bank.h"

AcctList& Bank::getAccounts() { return accounts; }
CustArray& Bank::getCustomers() { return customers; }


//with added functionality to verify the customer exists
void Bank::addAcct(Account *acct)
{
  if ((customers.isExisting(acct->getCust()))>-1)	{
  	accounts+=acct;
  }
  else{
		cout << "Sorry, your customer Id was not found  ";
  }

}


void Bank::remAcct(int accountNum)
{
  if (accounts.isExisting(accountNum)==true){
  	accounts-=accountNum;
  }
  else{
	cout << "Sorry, your account number was not found  ";
  }

}



void Bank::addCust(Customer* cust)
{
  customers.add(cust);
}

