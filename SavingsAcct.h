using namespace std; 
#ifndef SAVINGSACCT_H
#define SAVINGSACCT_H

#include "defs.h"
#include <string>


class SavingsAcct{

public:
  SavingsAcct(Customer* =NULL, AcctType= SAVINGS);
	bool			 deposit(float);
  bool       withdraw(float);
private:
	float interestRate;
	float penaltyAmount;


};

#endif


