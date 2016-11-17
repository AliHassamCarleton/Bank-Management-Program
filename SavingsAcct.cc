#include <iostream>
using namespace std;
#include <string>

#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(Customer *c, AcctType t)
: Account(c, t) 
{ 

  interestRate= 0.10;
	penaltyAmount=0.05;

  
}

SavingsAccount::~SavingsAccount() { }


bool SavingsAccount::deposit(int amount){

	if (amount<0){
		return false;
	}
	amount+= amount*interestRate;
	balance+= amount;
	return true;

}

bool SavingsAccount::withdraw(int amount){
	
	amount-= amount*penaltyAmount;

	if (amount<0)
		return false;
	else if (amount>balance)
		return false;
	else{
		balance-=amount;	
		return true;
	}
}

