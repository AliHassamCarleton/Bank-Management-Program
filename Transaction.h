 
#ifndef TRANSACTION.H
#define TRANSACTION.H

#include "defs.h"
#include <string>


using namespace std;
typedef enum { DEPOSIT, WITHDRAWAL, DEBIT_PURCHASE, CHEQUE } TransType; 
typedef enum { SUCCESSFUL, FAILED} TransState; 

class Transaction{


public:
	Transaction(int=0, int=0);
	int getAmount();
	int getAccountNum();
	int getTransactionId();
	void setDate(string);



private:
	string date;
	int transId;
	static int nextTransId;
	int accountNum;
	int amount;

};

#endif
