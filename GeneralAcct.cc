#include <iostream>
using namespace std;
#include <string>

#include "GeneralAcct.h"


GeneralAcct::GeneralAcct(Customer *c)
: Account(c, GENERAL) 
{ 

  
}



bool GeneralAcct::deposit(float amount){

	if (amount<0){
		return false;
	}
	balance+= amount;
	return true;

}

bool GeneralAcct::withdraw(float amount){
	

	if (amount<0)
		return false;
	else if (amount>balance)
		return false;
	else{
		balance-=amount;	
		return true;
	}
}
