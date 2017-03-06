
using namespace std;
#include "Employee.h"

int Employee::nextIDNum = 7001;

Employee::Employee(string employeeName){

	name= employeename;
	IDNumber= nextIDNum++;
	size=0;


}



void Employee::addRole(Role* role)
{
  if (size >= MAX_ARR)
    return;

  roles[size++] = role;
}