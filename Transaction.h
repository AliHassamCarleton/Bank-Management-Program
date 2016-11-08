 
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "defs.h"
#include <string>


using namespace std;
typedef enum { DEPOSIT, WITHDRAWAL, DEBIT_PURCHASE, CHEQUE } TransType; 
typedef enum { SUCCESSFUL, FAILED} TransState; 

class Transaction{


public:
	Transaction(int=0, int=0, int=1, bool=false);
	int getAmount();
	int getAccountNum();
	int getTransactionId();
	string getDate();
	void setDate(string);
	TransType getTransType();
	TransState getTransState();

private:
	string date;
	int transId;
	TransType transType;
	TransState transState;
	static int nextTransId;
	int accountNum;
	int amount;

};

#endif
