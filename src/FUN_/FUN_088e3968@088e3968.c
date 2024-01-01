#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3968(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      uVar2 = atan2f(*(float *)(*(int *)(param_1 + 0x414) + 0x28) - *(float *)(param_1 + 0x28),
                     *(float *)(*(int *)(param_1 + 0x414) + 0x20) - *(float *)(param_1 + 0x20));
      fVar3 = (float)FUN_088defe8(uVar2,0x3f800000,0x3e0efa35,param_1);
      if (fVar3 * fVar3 < 0.01) {
        FUN_088def24(0x3e4ccccd,param_1,9,0,0);
        *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
      }
    }
  }
  else if ((iVar1 < 2) && (fVar3 = (float)FUN_089df648(param_1), fVar3 == 0.0)) {
    FUN_088e2788(param_1,8,0);
  }
  return;
}

