#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1078c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_08a0fe94(param_1,param_2);
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        FUN_08a10484();
        return param_2;
      }
      param_1 = (param_1 + 1) % 3;
    } while (iVar2 != 3);
  }
  return param_2;
}

