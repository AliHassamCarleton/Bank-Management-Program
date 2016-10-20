#include "defs.h"
#include "Customer.h"
using namespace std;


Customer::Customer(int id, string n){

	custId= id;
	name= n;

}



string   Customer::getCustName()  { return name;  }
int      Customer::getCustId()    { return custId;    }
