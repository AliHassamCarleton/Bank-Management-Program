using namespace std;
#ifndef SUBJECT_H
#define SUBJECT_H

#include "defs.h"

class Subject
{
	public:
    void subscribe();
		bool unsubscribe();
    void notify();

	private:
		Observer* elements[MAX_ARR];
		int size;


};

#endif
