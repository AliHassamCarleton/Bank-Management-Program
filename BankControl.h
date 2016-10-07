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
#ifndef BANKCONTROL_H
#define BANKCONTROL_H

#include <string>
#include "Bank.h"
#include "View.h"

class BankControl
{
  public:
    BankControl();
    ~BankControl();
    void launch();
  private:
    Bank bank;
    View view;
    void init();
    void processAdmin();
    void processCust();
};
#endif
