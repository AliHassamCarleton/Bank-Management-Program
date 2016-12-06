using namespace std;
#include "Logger.h"
#include "BankControl.h"
#include "Transaction.h"

Logger::Loger():Observer(){


}



void Logger::update(){
	
	//retrieve last transaction
	Transaction *lastTrans= bankControl->getLastTrans();
	
	if(lastTrans->getAmount()>1000)
		flaggedTrans.add(lastTrans);


}

void Logger::getFlagTrans(TransArray& transArr){

		transArr=flaggedTrans;

}

