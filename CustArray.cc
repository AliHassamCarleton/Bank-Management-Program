/*  Customer Array Class

The Customer Array Class uses an array to store customer objects
It has access to the customers themself.


*/

#include <string>
#include <cstdlib>
using namespace std;

#include "CustArray.h"


CustArray::CustArray()
{
  size = 0;
}

CustArray::~CustArray()
{
  for (int i=0; i<size; i++){
    delete elements[i];
  }

}


int CustArray::getSize() { return size; }

Customer* CustArray::get(int index)
{
  if (index < 0 || index >= size)
    exit(1);
  return elements[index];
}

void CustArray::add(Customer* cust)
{
  if (size >= MAX_ARR)
    return;

  elements[size++] = cust;
}

//returns the index of where it exists or -1 depending on if the customer is existing or not
int CustArray::isExisting(int custNum){

	for (int i=0; i<size; i++){

		if(custNum==elements[i]->getCustId()){
		  return i;
		}

	}
	return -1;
}


//takes in id and returns the customers name
string CustArray::idtoName(int custNum){

  for (int i=0; i<size; i++){

    if(custNum==elements[i]->getCustId()){
      return elements[i]->getCustName();
    }
  }
  return " ";
}


