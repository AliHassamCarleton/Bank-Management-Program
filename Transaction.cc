#include "defs.h"
#include "Transaction.h"
using namespace std;

int Transaction::nextTransId = 4000;

Transaction::Transaction(int accnum, int am, int type, bool result){

	transId= nextTransId++;
	accountNum= accnum;
	amount= am;
	TransType=type;

	if (result==true)
		TransState=1;
	else
		TransState=2;
		
}



void   	 Transaction::setDate(string d)  { date=d;  					}
int      Transaction::getTransactionId() { return transId;    		}
int      Transaction::getAccountNum()    { return accountNum;    	}
int      Transaction::getAmount()    	 	 { return amount;    			}
