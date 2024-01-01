#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e2758(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      iVar1 = iVar1 + param_1;
      iVar2 = iVar2 + 1;
      param_1 = param_2 + param_1;
    } while (iVar2 < param_3);
  }
  return iVar1;
}

