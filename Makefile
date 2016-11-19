OBJ = main.o BankControl.o Bank.o Account.o View.o AcctList.o Customer.o CustArray.o Transaction.o TransArray.o TransControl.o SavingsAcct.o ChequingAcct.o GeneralAcct.o

bsys:	$(OBJ)
	g++ -o bsys $(OBJ)

main.o:	main.cc 
	g++ -c main.cc

BankControl.o:	BankControl.cc BankControl.h TransControl.h Transaction.h Bank.h View.h
	g++ -c BankControl.cc

View.o:	View.cc View.h 
	g++ -c View.cc

Bank.o:	Bank.cc Bank.h AcctList.h  
	g++ -c Bank.cc

Account.o:	Account.cc Account.h 
	g++ -c Account.cc

AcctList.o:	AcctList.cc AcctList.h Account.h defs.h
	g++ -c AcctList.cc

Customer.o:	Customer.cc Customer.h defs.h
	g++ -c Customer.cc

CustArray.o:	CustArray.cc CustArray.h Customer.h defs.h
	g++ -c CustArray.cc

TransArray.o:	TransArray.cc TransArray.h Transaction.h defs.h
	g++ -c TransArray.cc

Transaction.o:	Transaction.cc Transaction.h defs.h
	g++ -c Transaction.cc

TransControl.o:	TransControl.cc TransControl.h TransArray.h defs.h
	g++ -c TransControl.cc

SavingsAcct.o:	SavingsAcct.cc SavingsAcct.h Account.h defs.h
	g++ -c SavingsAcct.cc

ChequingAcct.o:	ChequingAcct.cc ChequingAcct.h Account.h defs.h
	g++ -c ChequingAcct.cc

GeneralAcct.o:	GeneralAcct.cc GeneralAcct.h Account.h defs.h
	g++ -c GeneralAcct.cc





clean:
	rm -f $(OBJ) bsys
