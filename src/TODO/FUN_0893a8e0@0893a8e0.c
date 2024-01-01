#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893a8e0(int param_1,undefined param_2)

{
  char cVar1;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 4:
  case 8:
  case 9:
    return true;
  case 1:
  case 2:
  case 3:
  case 7:
    cVar1 = FUN_08939d9c(param_1,param_2,5);
    return cVar1 == '\x01';
  case 5:
  case 6:
    return true;
  default:
    return true;
  }
}

