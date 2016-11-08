using namespace std; 
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "defs.h"
#include <string>


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


