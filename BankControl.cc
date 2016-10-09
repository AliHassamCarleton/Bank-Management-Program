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

BankControl::~BankControl(){

  for (int i=0; i<bank.getCustomers().getSize(); i++){
    delete bank.getCustomers().get(i);
  }
  for (int i=0; i<bank.getAccounts().getSize(); i++){
    delete bank.getAccounts().get(i);
  }


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
       Account* newAccount;
       newAccount= new Account(custId, acctType);
       bank.addAcct(newAccount);
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
    	view.accountToBalance(bank);
      
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
  Customer* newCustomer;
  Account* newAccount;

  //Dynamically add the new customers
  newCustomer= new Customer(1001, "Timmy");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1002, "Lebron");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1003, "James");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1004, "John");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1005, "Cena");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1006, "Jasper");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1007, "Eddie");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1008, "Alec");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1009, "Sameer");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1010, "Ronaldo");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1011, "Howard");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1012, "Ron");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1013, "Harry");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1014, "Lilly");
  bank.addCust(newCustomer);

  newCustomer= new Customer(1015, "Keiffer");
  bank.addCust(newCustomer);



  //Dynamically add the new accounts
  newAccount= new Account(1001, SAVINGS);
  bank.addAcct(newAccount);

  newAccount= new Account(1002, SAVINGS);
  bank.addAcct(newAccount);

  newAccount= new Account(1003, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1004, SAVINGS);
  bank.addAcct(newAccount);

  newAccount= new Account(1005, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1006, SAVINGS);
  bank.addAcct(newAccount);

  newAccount= new Account(1007, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1008, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1009, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1010, SAVINGS);
  bank.addAcct(newAccount);

  newAccount= new Account(1011, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1012, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1013, CHEQUING);
  bank.addAcct(newAccount);

  newAccount= new Account(1014, SAVINGS);
  bank.addAcct(newAccount);

  newAccount= new Account(1015, SAVINGS);
  bank.addAcct(newAccount);



}

