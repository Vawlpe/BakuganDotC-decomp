#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893bd28(int param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    return true;
  case 1:
    cVar1 = FUN_08939d9c(param_1,param_2,0x1d);
    cVar2 = FUN_08939d9c(param_1,param_2,0x1c);
    return (char)(cVar1 + cVar2) != '\0';
  default:
    return true;
  }
}

