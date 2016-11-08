#include "defs.h"
#include "Transaction.h"
using namespace std;

int Account::nextTransId = 4000;

Transaction::Transaction(int accnum, int am){

	transId= nextTransId++;
	accountNum= accnum;
	amount= am;
}



void   	 Transaction::setDate(string d)  { date=d;  					}
int      Transaction::getTransactionId() { return transId;    		}
int      Transaction::getAccountNum()    { return accountNum;    	}
int      Transaction::getAmount()    	 	 { return amount;    			}
