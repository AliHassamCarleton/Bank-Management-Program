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
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "defs.h"
#include "Customer.h"

class Account
{
  public:
    AcctType   getAcctType();
    Account    (Customer* =NULL, AcctType= GENERAL);
    int        getAcctNum();
    int        getCust();	
		string		 getCustName();
    float      getBalance();
    virtual bool deposit(float)  = 0;
    virtual bool withdraw(float) = 0;

  protected:
    static int nextAcctNum;
    AcctType   acctType;
    int        acctNum;
    int        cust;
		string 		 custName;
    float      balance;
};

#endif
