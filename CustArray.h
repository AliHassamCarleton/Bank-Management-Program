#ifndef CUSTARRAY_H
#define CUSTARRAY_H

#include "defs.h"
#include "Customer.h"
#include <string>
using namespace std;


class CustArray
{
  public:
    CustArray();
    ~CustArray();
    void add(Customer*);
    Customer* get(int);
    int getSize();
    int isExisting(int); 
    string idtoName(int);

  private:
    Customer* elements[MAX_ARR];
    int size;
};

#endif
