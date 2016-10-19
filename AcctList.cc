#include <iostream>
#include <string>
using namespace std;

#include "List.h"

AcctList::AcctList()
{
  head = NULL;
  tail= NULL;
}

AcctList::~AcctList()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode!= NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

void AcctList::del(Account* acc)
{
  Node* currNode = head;
  Node* prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->getAcctNum() == acct->getAcctNum())
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == NULL)//empty list
    return;

  if (prevNode == NULL) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  if(prevNode->next==NULL)
    tail=prevNode;

  delete currNode;


}

void AcctList::add(Account* acc)
{
  Node* currNode;
  Node* newAcctNode;

  newAcctNode = new Node;
  newAcctNode->data = acc;
  newAcctNode->next = NULL;

  currNode = tail;

  if (currNode==NULL){//list is empty
    head= newAcctNode;
  }
  else{
     currNode->next=newAcctNode;
  }

  tail= newAcctNode;

}

bool AcctList::find(Account* acc){
  
  Node* currNode;
  currNode=head;

  while (currNode!=NULL){

    if(currNode->data->getAcctNum() == acct->getAcctNum()){

      return true;

    }
  }

  return false;

}

// void List::print()
// {
//   Node* currNode = head;

//   while (currNode  != NULL) {
//     currNode->data->print();
//     currNode = currNode->next;
//   }
}
