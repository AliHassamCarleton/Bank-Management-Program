/*	Transcation Array Class

The transaction array class holds the transactions.
It has methods that return relevent information to ones that inherit it. Example: toString

*/


#include <string>
#include <cstdlib>
#include <iostream>
#include <sstream> 
#include <iomanip>


using namespace std;

#include "TransArray.h"


TransArray::TransArray()
{
  size = 0;
}


void TransArray::funcDel(){

 	for (int i=0; i<size; i++){
  	delete elements[i];
  }

}


void TransArray::toString(string& outStr){

  ostringstream oss;


	for (int i=0; i<size; i++){
		
		oss<<"Transaction #: "<<elements[i]->getTransactionId()<< "    Account #: "<<elements[i]->getAccountNum()<< "    $"<< elements[i]->getAmount()<<"    " << 			elements[i]->getDate();
		
		if (elements[i]->getTransType()==0)
			oss<<" DEPOSIT       ";
		else
			oss<<" WITHDRAWAL    ";

		if (elements[i]->getTransState()==0)
			oss<<" SUCCESSFUL \n";
		else
			oss<<" FAILED     \n";

	}

	outStr= oss.str();

}

int TransArray::getSize() { return size; }

Transaction* TransArray::get(int index)
{
  if (index < 0 || index >= size)
    exit(1);
  return elements[index];
}

void TransArray::add(Transaction* trans)
{
  if (size >= MAX_ARR)
    return;

  elements[size++] = trans;
}

