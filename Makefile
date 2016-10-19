OBJ = main.o BankControl.o Bank.o Account.o View.o AcctList.o Customer.o CustArray.o

bsys:	$(OBJ)
	g++ -o bsys $(OBJ)

main.o:	main.cc 
	g++ -c main.cc

BankControl.o:	BankControl.cc BankControl.h Bank.h View.h
	g++ -c BankControl.cc

View.o:	View.cc View.h 
	g++ -c View.cc

Bank.o:	Bank.cc Bank.h AcctArray.h  
	g++ -c Bank.cc

Account.o:	Account.cc Account.h 
	g++ -c Account.cc

AcctList.o:	AcctList.cc AcctList.h Account.h defs.h
	g++ -c AcctList.cc

Customer.o:	Customer.cc Customer.h defs.h
	g++ -c Customer.cc

CustArray.o:	CustArray.cc CustArray.h Customer.h defs.h
	g++ -c CustArray.cc

clean:
	rm -f $(OBJ) bsys
