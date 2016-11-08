#include "defs.h"
#include "Transaction.h"
using namespace std;

Transaction::Transaction(string d, int tid, int accnum, int am){

	date=d;
	transId= tid;
	accountNum= accnum;
	amount= am;
}



string   Transaction::getDate()          { return date;  					}
int      Transaction::getTransactionId() { return transId;    		}
int      Transaction::getAccountNum()    { return accountNum;    	}
int      Transaction::getAmount()    	 	 { return amount;    			}
