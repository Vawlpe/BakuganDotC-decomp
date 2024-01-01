#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * memset_jak(undefined *ptr,undefined value,int numBytes)

{
  int i;
  undefined *current;
  bool condition;
  
  i = numBytes + -1;
  current = ptr;
  if (numBytes != 0) {
    do {
      *current = value;
      current = current + 1;
      condition = i != 0;
      i = i + -1;
    } while (condition);
  }
  return ptr;
}

