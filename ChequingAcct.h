using namespace std; 
#ifndef CHEQUINGACCT_H
#define CHEQUINGACCT_H

#include "defs.h"
#include <string>


class ChequingAcct{

public:
  ChequingAcct(Customer* =NULL, AcctType= CHEQUING);
	bool			 deposit(float);
  bool       withdraw(float);

private:
	float chequeCost;
	


};

#endif


