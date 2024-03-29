#include <string>
#include <cstdlib>
using namespace std;

#include "TransArray.h"


TransArray::TransArray()
{
  size = 0;
}

TransArray::~TransArray()
{
  for (int i=0; i<size; i++){
    delete elements[i];
  }

}

int TransArray::getSize() { return size; }

TransArray* TransArray::get(int index)
{
  if (index < 0 || index >= size)
    exit(1);
  return elements[index];
}

void TransArray::add(Transaction* trans)
{
  if (size >= MAX_ARR)
    return;

  elements[size++] = trans;
}

