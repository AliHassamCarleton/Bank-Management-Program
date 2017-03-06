
#ifndef TERMEMPLOYEE_H
#define TERMEMPLOYEE_H

#include "defs.h"


class TermEmployee: public Employee{

	public:
		TermEmployee(string, string, string, float);
		

	protected:
		string startDate;
		string endDate;
		float biMonthlyRate;



};

#endif


