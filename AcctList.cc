#include <iostream>
#include <sstream> 
#include <string>
#include <iomanip>

using namespace std;

#include "AcctList.h"


AcctList::AcctList()
{
  head= NULL;
  tail= NULL;
}

AcctList::~AcctList()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode!= NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

void AcctList::del(int acctNum)
{
  Node* currNode = head;
  Node* prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->getAcctNum() == acctNum)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == NULL)//nothing found
    return;

  if (prevNode == NULL) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  if (currNode->next==NULL)
    tail=prevNode;

  delete currNode->data;
  delete currNode;

}



void AcctList::add(Account* acc)
{
  Node* currNode;
  Node* prevNode;
  Node* newAccNode;

  newAccNode = new Node;
  newAccNode->data = acc;
  newAccNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (acc->getCust() < currNode->data->getCust())
      break;
    prevNode= currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = newAccNode;
  } 
  else {
    prevNode->next = newAccNode;
  }
  newAccNode->next = currNode;

  if(currNode==NULL)
    tail=newAccNode;

}

bool AcctList::isExisting(int accountNum){

  Node* currNode;
	currNode=head;

	while(currNode!=NULL){
	
		if(accountNum==currNode->data->getAcctNum()){
			return true;
		}

		currNode=currNode->next;

	}

	return false;
}




float AcctList::accounttoBalance(int acctNum){


  Node* currNode;
  currNode = head;

  while (currNode != NULL) {

    if(acctNum==currNode->data->getAcctNum()){
      return currNode->data->getBalance();
    }
	
    currNode=currNode->next;
  }
  return -1;
}

void AcctList::toString(string& outStr){

  Node* currNode;
  currNode = head;
  ostringstream oss;

  while (currNode != NULL) {
	
		if (currNode->data->getAcctType() == CHEQUING)
			oss << "Chequing:  ";
    else if(currNode->data->getAcctType() == SAVINGS)
      oss << "Savings:   ";
    else
      oss << "General:   ";

		oss <<currNode->data->getAcctNum() << "  " << currNode->data->getCustName();
	  oss << setw(10) << fixed << setprecision(2) << currNode->data->getBalance();
		oss << "$\n";

    currNode=currNode->next;

  }

	outStr= oss.str();

}




