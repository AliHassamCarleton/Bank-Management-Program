#include "defs.h"
#include "Transaction.h"
using namespace std;

Transaction::Transaction(string d, int tid, int accnum, int am){

	date=d;
	transId= tid;
	accountNum= accnum;
	amount= am;
}



string   Customer::getDate()          { return date;  }
int      Customer::getTransactionId() { return transId;    }
int      Customer::getAccountNum()    { return accountNum;    }
int      Customer::getAmount()    	  { return amount;    }
