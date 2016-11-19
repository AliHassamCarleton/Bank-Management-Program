using namespace std; 
#ifndef SAVINGSACCT_H
#define SAVINGSACCT_H

#include "defs.h"
#include "Account.h"
#include <string>


class SavingsAcct: public Account{

public:
  SavingsAcct(Customer* =NULL, float=0, float=0);
	bool			 deposit(float);
  bool       withdraw(float);
private:
	float interestRate;
	float penaltyAmount;


};

#endif


