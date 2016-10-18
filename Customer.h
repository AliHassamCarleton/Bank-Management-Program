 
#ifndef CUSTOMER.H
#define CUSTOMER.H

#include "defs.h"
#include <string>


using namespace std;

class Customer{

public:
	Customer(int=0, string="");
	int getCustId();
	string getCustName();

private:
	string name;
	int custId;


};

#endif
