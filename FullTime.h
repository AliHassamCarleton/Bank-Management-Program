
#ifndef FULLTIME_H
#define FULLTIME_H

#include "defs.h"


class FullTime: public Employee{

	public:
		TermEmployee();
		

	protected:
		string startDate;
		string endDate;
		float biMonthlyRate;



};

#endif


