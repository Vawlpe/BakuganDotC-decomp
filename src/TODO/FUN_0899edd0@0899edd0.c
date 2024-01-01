#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899edd0(int param_1,int param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  if ((-1 < param_2) && (param_2 < 4)) {
    iVar2 = param_1 + param_2 * 0x10;
    *(short *)(iVar2 + 0x2332) = param_3[1];
    *(short *)(iVar2 + 0x2334) = param_3[2];
    if (*(int *)(param_1 + 0x2370) == 0) {
      sVar1 = *param_3;
    }
    else {
      *(char *)(param_1 + 0x109f) = (char)param_3[2];
      sVar1 = *param_3;
    }
    FUN_0899ed34(param_1,param_2,(int)sVar1);
  }
  return;
}

