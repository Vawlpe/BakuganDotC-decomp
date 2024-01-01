#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088aacc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(param_2) {
  case 3:
  case 7:
  case 9:
  case 10:
  case 0xc:
    break;
  default:
    iVar2 = 1;
  }
  if ((iVar2 != 0) && (iVar1 = FUN_088a9020(), iVar1 == 0)) {
    iVar2 = 0;
  }
  return iVar2;
}

