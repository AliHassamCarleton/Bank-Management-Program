#include <iostream>
#include <string>
using namespace std;

#include "List.h"

List::List()
{
  head = NULL;
}

List::~List()
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

void List::del(Student* stu)
{
  Node* currNode = head;
  Node* prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->getName() == stu->getName())
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == NULL)
    return;

  if (prevNode == NULL) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  delete currNode;


}

void List::add(Account* acc)
{
  Node* currNode;
  Node* prevNode;
  Node* newAcctNode;

  newAcctNode = new Node;
  newAcctNode->data = acc;
  newAcctNode->next = NULL;

  currNode = head;
  prevNode = NULL;


  if (prevNode == NULL) {
    head = newAcctNode;
  } 
  else {
    prevNode->next= newAcctNode;
  }

  newStuNode->next = currNode;

}

void List::print()
{
  Node* currNode = head;

  while (currNode  != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}
