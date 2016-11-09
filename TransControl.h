using namespace std;
#ifndef TRANSCONTROL_H
#define TRANSCONTROL_H

#include "TransArray.h"

#include <string>


class TransControl
{

	public:
    TransControl();
    ~TransControl();
		void update(Transaction*); 
		void retrieve(TransArray&); 
		void getTime(string&); 
		
	private:
		TransArray transactions;

};
#endif
