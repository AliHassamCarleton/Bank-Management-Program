#include <string>
#include <cstdlib>
using namespace std;

#include "CustArray.h"


CustArray::CustArray()
{
  size = 0;
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

//returns true or false depending on if the customer is existing or not
bool CustArray::isExisting(int custNum){

	for (int i=0; i<size; i++){

		if(custNum==elements[i]->getCustId()){
		  return true;
		}

	}
	return false;
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
