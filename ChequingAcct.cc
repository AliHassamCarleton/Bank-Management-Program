/*  ChequingAcct Class

The ChequingAcct Class overried the deposit and withdraw for the purpose of representing a chequing account 
there is no advantage to depositing here but only a cost of withdrawing


*/

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

