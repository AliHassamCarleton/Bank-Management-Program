/*  GeneralAcct Class

The GeneralAcct Class overried the deposit and withdraw for the purpose of representing a general account 
there is no pentalty or advantage to withdraw or deposit here


*/

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
