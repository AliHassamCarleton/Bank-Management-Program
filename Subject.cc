/*	Subject Class



*/

Subject::Subject()
{
  size = 0;
}




void Subject::subscribe(Observer* obs){

	if (size >= MAX_ARR)
   	return;

  elements[size++] = obs;


}

bool Subject::unsubscribe(Observer* obs){
	

	for (int i=0; i<size; i++){
		
		if (elements[i]==obs){
				delete elements[i];
				break;
		}	
		
	}

	if(i==size)
		return false;//not found
	
	for(int c=i; c<size-1; c++){//left justify
		
		elements[c]= elements[c+1];

	}
	
	size--;

}

void Subject::notify(){

	for (i=0; i<size; i++){

		elements[i].update();

	}

}


