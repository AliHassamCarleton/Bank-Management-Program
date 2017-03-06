
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "defs.h"


class Employee{

	public:
		Employee (string);


	protected:
		string name;
		int size;
		int IDNumber;
		Role* roles[MAX_ARR];	
		
		

}
