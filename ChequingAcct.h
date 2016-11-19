using namespace std; 
#ifndef CHEQUINGACCT_H
#define CHEQUINGACCT_H

#include "defs.h"
#include <string>
#include "Account.h"



class ChequingAcct: public Account{

public:
  ChequingAcct(Customer* =NULL, float=0);
	bool			 deposit(float);
  bool       withdraw(float);

private:
	float chequeCost;
	


};

#endif


