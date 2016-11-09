
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
    void add(Transaction*);
		void funcDel();
    Transaction* get(int);
		void toString(string&);
    int getSize();

  private:
    Transaction* elements[MAX_ARR];
    int size;
};

#endif
