
#ifndef TRANSARRAY_H
#define TRANSARRAY_H

#include "defs.h"
#include "Transaction.h"
#include <string>
using namespace std;


class TransArray
{
  public:
    TransArray();
    ~TransArray();
    void add(Transaction*);
    Transaction* get(int);
    int getSize();

  private:
    Transaction* elements[MAX_ARR];
    int size;
};

#endif
