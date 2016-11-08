#include "defs.h"
#include "Transaction.h"
using namespace std;

int Transaction::nextTransId = 4000;

Transaction::Transaction(int accnum, int am, int type, bool result){

	TransType t;
	TransState ts;

	transId= nextTransId++;
	accountNum= accnum;
	amount= am;

	if(type==1)
		t= WITHDRAWAL;
	else
		t= DEPOSIT;
;

	if (result==true)
		ts=SUCCESSFUL;
	else
		ts=FAILED;
		
}



void   	 Transaction::setDate(string d)  { date=d;  					}
int      Transaction::getTransactionId() { return transId;    		}
int      Transaction::getAccountNum()    { return accountNum;    	}
int      Transaction::getAmount()    	 	 { return amount;    			}
