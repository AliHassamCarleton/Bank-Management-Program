using namespace std;
#include "Logger.h"
#include "BankControl.h"
#include "Transaction.h"

Logger::Loger():Subject(){


}



void Logger::update(){
	
	//retrieve last transaction
	
	if(amount>1000)
		flaggedTrans.add(lastTrans);


}

