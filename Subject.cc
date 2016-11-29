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
