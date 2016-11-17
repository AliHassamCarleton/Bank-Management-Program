#include <iostream>
using namespace std;
#include <string>

#include "SavingsAcct.h"


SavingsAcct::SavingsAcct(Customer *c, AcctType t)
: Account(c, t) 
{ 

  interestRate= 0.10;
	penaltyAmount=0.05;

  
}

SavingsAcct::~SavingsAcct() { }


bool SavingsAcct::deposit(float amount){

	if (amount<0){
		return false;
	}
	amount+= amount*interestRate;
	balance+= amount;
	return true;

}

bool SavingsAcct::withdraw(float amount){
	
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

