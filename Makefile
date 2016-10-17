all: primes.o
	g++ -o primes primes.o -lpthread 

primes.o: primes.c
	gcc -Wno-int-to-pointer-cast -c primes.c 

clean:
	rm -f *.o primes
