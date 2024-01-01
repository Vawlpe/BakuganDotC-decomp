#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882d13c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_08887a90(param_2 + 0x434);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.294967e+09;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1a8);
    fVar3 = (float)(int)(((fVar3 / *(float *)(*(int *)(param_2 + 0x4bc) + 0x90) - 0.5) * 0.7 + 0.3)
                         * 176.0 + 24.0);
    uVar2 = FUN_089f494c(iVar1);
    FUN_089f4534(fVar3 - 24.0,uVar2,iVar1);
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1ac) + 0x60) =
         (*(float *)(iVar1 + 0x60) + fVar3) - 24.0;
  }
  return;
}

