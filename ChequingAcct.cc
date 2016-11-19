#include <iostream>
using namespace std;
#include <string>

#include "ChequingAcct.h"


ChequingAcct::ChequingAcct(Customer *c, float ch)
: Account(c, CHEQUING) 
{ 

	chequeCost= ch;

  
}


bool ChequingAcct::deposit(float amount){

	if (amount<0){
		return false;
	}
	balance+= amount;
	return true;

}

bool ChequingAcct::withdraw(float amount){
	
	amount+=chequeCost;

	if (amount<0)
		return false;
	else if (amount>balance)
		return false;
	else{
		balance-=amount;	
		return true;
	}
}

