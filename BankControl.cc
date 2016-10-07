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

#include "BankControl.h"
#include "Account.h"

BankControl::BankControl()
{
  init();
}

void BankControl::launch()
{
  int choice;

  while (1) {
    choice = -1;  
    view.mainMenu(choice);
    if (choice == 1) {		// Admin menu
      processAdmin();
    }
    else if (choice == 2) {	// Customer menu
      processCust();
    }
    else {
      break;
    }
  }
}

void BankControl::processAdmin()
{
  int      choice;
  int      custId;
  AcctType acctType;

  while (1) {
    choice = -1;
    view.adminMenu(choice);
    if (choice == 1) {		// add account
      view.readCustId(custId);
      view.readAcctType(acctType);
      Account acct(custId, acctType);
      bank.addAcct(acct);
      view.pause();
    }
    else if (choice == 2) {	// print accounts
      view.printAccounts(bank);
      view.pause();
    }
    else if (choice == 3) { // print customers
      view.printCustomers(bank);
      view.pause();
    }    
    else {
      break;
    }
  }
}

void BankControl::processCust()
{
  int choice;

  while (1) {
    choice = -1;
    view.custMenu(choice);
    if (choice == 1) {	// check balance
      view.printError("Feature not yet implemented");
    }
    else {
      break;
    }
  }
}

void BankControl::init()
{
  /*
     This function is so ugly!  It's because we're using 
     statically allocated memory, instead of dynamically
     alloated.  Don't worry, we'll fix this in Assignment #2.
  */

  //all customers are created
  Customer cust1(1001, "Timmy");
  Customer cust2(1002, "Lebron");
  Customer cust3(1003, "James");
  Customer cust4(1004, "John");
  Customer cust5(1005, "Cena");
  Customer cust6(1006, "Jasper");
  Customer cust7(1007, "Eddie");
  Customer cust8(1008, "Alec");
  Customer cust9(1009, "Sameer ");
  Customer cust10(1010, "Ronaldo");
  Customer cust11(1011, "Howard");
  Customer cust12(1012, "Ron");
  Customer cust13(1013, "Harry");
  Customer cust14(1014, "Lilly");
  Customer cust15(1015, "Keiffer");

  //all customers created are added to customer array
  bank.addCust(cust1); 
  bank.addCust(cust2);
  bank.addCust(cust3);
  bank.addCust(cust4);
  bank.addCust(cust5);
  bank.addCust(cust6);
  bank.addCust(cust7);
  bank.addCust(cust8);
  bank.addCust(cust9);
  bank.addCust(cust10);
  bank.addCust(cust11);
  bank.addCust(cust12);
  bank.addCust(cust13);
  bank.addCust(cust14);
  bank.addCust(cust15);



  Account acc01(1001, SAVINGS);
  bank.addAcct(acc01);
  Account acc02(1002, SAVINGS);
  bank.addAcct(acc02);
  Account acc03(1003, CHEQUING);
  bank.addAcct(acc03);


  Account acc04(1004, SAVINGS);
  bank.addAcct(acc04);
  Account acc05(1005, CHEQUING);
  bank.addAcct(acc05);

  Account acc06(1006, SAVINGS);
  bank.addAcct(acc06);
  Account acc07(1007, CHEQUING);
  bank.addAcct(acc07);
  Account acc08(1008, CHEQUING);
  bank.addAcct(acc08);

  Account acc09(1009, CHEQUING);
  bank.addAcct(acc09);

  Account acc10(1010, SAVINGS);
  bank.addAcct(acc10);
  Account acc11(1011, CHEQUING);
  bank.addAcct(acc11);

  Account acc12(1012, CHEQUING);
  bank.addAcct(acc12);
  Account acc13(1013, CHEQUING);
  bank.addAcct(acc13);

  Account acc14(1014, SAVINGS);
  bank.addAcct(acc14);
  Account acc15(1015, SAVINGS);
  bank.addAcct(acc15);



}

