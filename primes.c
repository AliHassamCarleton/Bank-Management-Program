//Ali Hassam
//Comp 3000 Exercise 5
//Due: October 16 2016

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Inefficiently, compute successive prime numbers.  
   Return the nth prime number, n is the value pointed by *arg.  */

//Global declared 
pthread_mutex_t lckThread;
int primeNums[2];
int i=0; 

void* compute_prime (void* arg)
{
  int candidate = 2;
  int n = *((int*) arg);

  while (true) {
    int factor;
    int is_prime = true;

    /* test primality by successive division.  */
    for (factor = 2; factor < candidate; ++factor){
      if (candidate % factor == 0) {
        is_prime = false;
        break;
      }
    }
    /* is prime number we're looking for?  */
    if (is_prime) {
      if (--n == 0){
        /* cast the prime to void* and return  */
        pthread_mutex_lock(&lckThread);
		    primeNums[i++] = candidate;
	     	pthread_mutex_unlock(&lckThread);
        return(NULL);
   	 }	
    }
    ++candidate;
  }
  return(NULL);;
}

int main ()
{

  pthread_t threadI;
  pthread_t threadJ;

  time_t t;

  int iPrime;
  int jPrime;

  //keeps track of the number of i and j primes respectively
  int amountiPrimes;
  int amountjPrimes;

  /* intialize random number generator */
  srand((unsigned) time(&t));
  amountiPrimes = rand() % 5000;
  amountjPrimes = rand() % 5000;
  printf("i= %d, j= %d\n", amountiPrimes, amountjPrimes);

  /* start the thread, up to the amountiPrimes and amountjPrimes" */
  pthread_create (&threadI, NULL, &compute_prime, &amountiPrimes);
  pthread_create (&threadJ, NULL, & compute_prime, &amountjPrimes);


  /* wait for the thread to complete, 
     place the result at location pointed by "&iPrime and &jPrime"  */
  pthread_join (threadI, (void*) &iPrime);
  pthread_join (threadJ, (void*) &jPrime);

  /* print the computed prime */
  printf("i Prime= %d and j Prime is %d.\n i Prime* j Prime is %d.\n", iPrime, jPrime, iPrime * jPrime);
  return 0;
}
