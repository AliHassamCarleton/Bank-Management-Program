using namespace std;
#ifndef LOGGER_H
#define LOGGER_H

#include "defs.h"

class Logger
{
	public:
    void update();

	private:
		TransArray flaggedTrans;
		BankControl* bankControl;


};

#endif
