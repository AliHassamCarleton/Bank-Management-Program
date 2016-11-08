#include "defs.h"
#include "Transaction.h"
using namespace std;

int Transaction::nextTransId = 4000;

Transaction::Transaction(int accnum, int am, int type, bool result){


	transId= nextTransId++;
	accountNum= accnum;
	amount= am;

	if(type==1)
		transType= WITHDRAWAL;
	else
		transType= DEPOSIT;


	if (result==true)
		transState=SUCCESSFUL;
	else
		transState=FAILED;
		
}



TransType Transaction::getTransType()    { return transType;			}
TransState Transaction::getTransState()	 { return transState;			}
void   	 Transaction::setDate(string d)  { date=d;  					    }
string	 Transaction::getDate()					 { return date;						}
int      Transaction::getTransactionId() { return transId;    		}
int      Transaction::getAccountNum()    { return accountNum;    	}
int      Transaction::getAmount()    	 	 { return amount;    			}
