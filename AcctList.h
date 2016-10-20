#ifndef ACCTLIST_H
#define ACCTLIST_H

#include "Account.h"

class AcctList 
{
  class Node
  {
    friend class AcctList;
    public:
    private:
      Account* data;
      Node*    next;
  };

  public:
    AcctList();
    ~AcctList();
    void add(Account*);
    void del(int);
		bool isExisting(int);
    float accounttoBalance(int);
    void toString(string&);

  private:
    Node* head;
    Node* tail;

};

#endif
