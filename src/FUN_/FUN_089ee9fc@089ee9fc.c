#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ee9fc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4), iVar2 != 0)) {
    *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x60) + (float)param_3;
    uVar1 = 1;
    *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) + (float)param_4;
    *(float *)(iVar2 + 0x68) = *(float *)(iVar2 + 0x68) + (float)param_5;
  }
  return uVar1;
}

