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
#include <string>
#ifndef BANK_H
#define BANK_H

#include "AcctArray.h"
#include "CustArray.h"

class Bank
{
  public:
    void       addAcct(Account&);
    void	   addCust(Customer&);
    AcctArray& getAccounts();
    CustArray& getCustomers();
  private:
    AcctArray  accounts;
    CustArray  customers;
};

#endif
