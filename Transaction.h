 
#ifndef TRANSACTION.H
#define TRANSACTION.H

#include "defs.h"
#include <string>


using namespace std;
typedef enum { DEPOSIT, WITHDRAWAL, DEBIT_PURCHASE, CHEQUE } TransType; 
typedef enum { SUCCESSFUL, FAILED} TransState; 

class Transaction{


public:
	Transaction(string="", int=0, int=0, int=0);
	int getAmount();
	int getAccountNum();
	int getTransactionId();
	string getDate();



private:
	string date;
	int transId;
	int accountNum;
	int amount;

};

#endif