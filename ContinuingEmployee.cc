
using namespace std;
#include "ContinuingEmployee.h"

ContinuingEmployee::ContinuingEmployee(): Employee (name) {


	salary=  ; //get the salary from appropriate roles
	


}

bool ContinuingEmployee::flipLeave(){

	if (onLeave==true)
		onLeave=false;
	else
		oneLeave=true;		


}


void ContinuingEmployee::giveRaisePercent(float percent){

	salary+= salary*percent;


}


void ContinuingEmployee::giveRaiseAmount(float amount){

	salary+= amount;

}




		

