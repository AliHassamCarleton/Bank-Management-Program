using namespace std; 
#ifndef GENERALACCT_H
#define GENERALACCT_H

#include "defs.h"
#include <string>


class GeneralAcct{

public:
  GeneralAcct(Customer* =NULL, AcctType= GENERAL);
	bool			 deposit(float);
  bool       withdraw(float);


};

#endif


