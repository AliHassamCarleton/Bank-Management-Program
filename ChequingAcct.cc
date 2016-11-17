#include <iostream>
using namespace std;
#include <string>

#include "ChequingAcct.h"


ChequingAcct::ChequingAcct(Customer *c, AcctType t)
: Account(c, t) 
{ 

	chequeCost=

  
}

ChequingAcct::~ChequingAcct() { }


bool ChequingAcct::deposit(int amount){

	if (amount<0){
		return false;
	}
	amount+= amount*interestRate;
	balance+= amount;
	return true;

}

bool ChequingAcct::withdraw(int amount){
	
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

