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

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Bank.h"

AcctArray& Bank::getAccounts() { return accounts; }
CustArray& Bank::getCustomers() { return customers; }


//with added functionality to verify the customer exists
void Bank::addAcct(Account& acct)
{
  if ((customers.isExisting(acct.getCust()))==true)	{
  	accounts.add(acct);
  }
  else{
	cout << "Sorry, your customer Id was not found  ";
  }

}

void Bank::addCust(Customer* cust)
{
  customers.add(cust);
}

