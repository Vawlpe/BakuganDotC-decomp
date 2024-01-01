#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d790c(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (((uint)(param_2 - *param_1) / (uint)param_1[3] + param_3 <= (uint)param_1[4]) && (0 < param_3)
     ) {
    do {
      iVar2 = FUN_089d774c(param_1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = 1;
      param_3 = param_3 + -1;
      param_2 = param_2 + param_1[3];
    } while (0 < param_3);
  }
  return uVar1;
}

