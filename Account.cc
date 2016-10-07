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
#include "defs.h"
#include "Account.h"

int Account::nextAcctNum = 7001;

Account::Account(Customer* c, AcctType t) 
{ 
  acctNum  = nextAcctNum++;
  acctType = t;
  cust     = c->getCustId;
  balance  = 0;
}

AcctType Account::getAcctType() { return acctType; }
int      Account::getAcctNum()  { return acctNum;  }
int      Account::getCust()     { return cust;     }
float    Account::getBalance()  { return balance;  }

