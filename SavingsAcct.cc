#include <iostream>
using namespace std;
#include <string>

#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(Customer *c, AcctType t)
: Account(c, t) 
{ 
  
}

SavingsAccount::~SavingsAccount() { }

void Bird::initMoves()
{
  moves[0] = "fly";
  moves[1] = "flap wings";
  moves[2] = "lay eggs";
  numMoves = 3;
}

