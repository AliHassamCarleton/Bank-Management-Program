using namespace std; 
#ifndef GENERALACCT_H
#define GENERALACCT_H

#include "defs.h"
#include <string>
#include "Account.h"


class GeneralAcct: public Account{

public:
  GeneralAcct(Customer* =NULL, AcctType= GENERAL);
	bool			 deposit(float);
  bool       withdraw(float);


};

#endif


