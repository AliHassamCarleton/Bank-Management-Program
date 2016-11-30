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

/*	Bank Control Class

The main brains of the program responsible for calling all class that inherit from it.
It then calls the "view" class to display information to the user.


*/



#include "BankControl.h"
#include "Account.h"

BankControl::BankControl():Subject
{

  interestRate= 0.10;
  penaltyAmount=0.05;
	chequeCost=0.50;
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
	int 		 accountNum;
  AcctType acctType;
	string tester;

  while (1) {
    choice = -1;
    view.adminMenu(choice);
    if (choice == 1) {		// add account
       view.readCustId(custId);

       if (bank.getCustomers().isExisting(custId)>-1){
       		view.readAcctType(acctType);
       		Account* newAccount;

				  if (acctType==0)//cheq
							newAccount= new ChequingAcct(bank.getCustomers().get(bank.getCustomers().isExisting(custId)), chequeCost);
					else if(acctType==1)//sav
							newAccount= new SavingsAcct(bank.getCustomers().get(bank.getCustomers().isExisting(custId)), interestRate, penaltyAmount);
					else //general
							newAccount= new GeneralAcct(bank.getCustomers().get(bank.getCustomers().isExisting(custId)));

       		bank.addAcct(newAccount);
				}
       else{
					view.printIdErr();
			 }
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
    else if (choice == 4) { // remove account
      view.readAcctNum(accountNum);
      bank.remAcct(accountNum);
      view.pause();
    }     
    else if (choice == 5) { // print transactions
			TransArray transArray;
      transControl.retrieve(transArray);
			transArray.toString(tester);
			view.printTransactions(tester);

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
	int acc;
	float amount;
	bool result;

  while (1) {
    choice = -1;
		
    view.custMenu(choice);
    if (choice == 1) {	// check balance
    	
			view.readAcctNum(choice);
      
			if (bank.getAccounts().accounttoBalance(choice)<0)
					view.printError("Sorry, your account was not found");
  		else
  				view.printBalance(bank.getAccounts().accounttoBalance(choice));

    }
    else if (choice == 2 || choice==3) {	//deposit or withdraw
    	
			view.readAcctNum(acc);
      
			if (bank.getAccounts().accounttoBalance(acc)<0)
					view.printError("Sorry, your account was not found");
  		else{
					view.readAmount(amount);

					if (choice==2)//deposit
						result= bank.getAccounts().numtoAccount(acc)->deposit(amount);
					else if (choice==3)//withdraw
						result= bank.getAccounts().numtoAccount(acc)->withdraw(amount);

					if(result==true)
						view.printError("Your transaction was succesful.");
					else
						view.printError("Your transaction failed.  Make sure the amount you entered was valid");

					Transaction* newTransaction;
					newTransaction= new Transaction(acc,amount,choice-2,result);
					lastTrans= newTransaction;
					//logger.update();
					elements.subscribe();
					transControl.update(newTransaction);

    	}
		}
    else {
      break;
    }
  }
}

Transaction* BankControl::getLastTrans(){
	
	return lastTrans;

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
  newAccount= new SavingsAcct(newCustomer, interestRate, penaltyAmount);
  bank.addAcct(newAccount);


  newCustomer= new Customer(1002, "Lebron");
  bank.addCust(newCustomer);
  newAccount= new SavingsAcct(newCustomer, interestRate, penaltyAmount);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1003, "James");
  bank.addCust(newCustomer);
  newAccount= new SavingsAcct(newCustomer, interestRate, penaltyAmount);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1004, "John");
  bank.addCust(newCustomer);
  newAccount= new ChequingAcct(newCustomer, chequeCost);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1005, "Cena");
  bank.addCust(newCustomer);
  newAccount= new ChequingAcct(newCustomer, chequeCost);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1006, "Jasper");
  bank.addCust(newCustomer);
  newAccount= new ChequingAcct(newCustomer, chequeCost);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1007, "Eddie");
  bank.addCust(newCustomer);
  newAccount= new GeneralAcct(newCustomer);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1008, "Alec");
  bank.addCust(newCustomer);
  newAccount= new GeneralAcct(newCustomer);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1009, "Sameer");
  bank.addCust(newCustomer);
  newAccount= new GeneralAcct(newCustomer);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1010, "Ronaldo");
  bank.addCust(newCustomer);
  newAccount= new SavingsAcct(newCustomer, interestRate, penaltyAmount);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1011, "Howard");
  bank.addCust(newCustomer);
  newAccount= new GeneralAcct(newCustomer);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1012, "Ron");
  bank.addCust(newCustomer);
  newAccount= new SavingsAcct(newCustomer, interestRate, penaltyAmount);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1013, "Harry");
  bank.addCust(newCustomer);
  newAccount= new GeneralAcct(newCustomer);
  bank.addAcct(newAccount);

  newCustomer= new Customer(1014, "Lilly");
  bank.addCust(newCustomer);
  newAccount= new GeneralAcct(newCustomer);
  bank.addAcct(newAccount);


  newCustomer= new Customer(1015, "Keiffer");
  bank.addCust(newCustomer);
  newAccount= new ChequingAcct(newCustomer, chequeCost);
  bank.addAcct(newAccount);


  //Dynamically add the new accounts















}

