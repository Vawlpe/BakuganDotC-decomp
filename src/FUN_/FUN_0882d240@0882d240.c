#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882d240(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_2 == 0) {
    return;
  }
  fVar2 = (float)FUN_08887d20(param_2 + 0x434);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1a0);
  uVar3 = FUN_089f494c(iVar1);
  FUN_089f4534(0x42500000,uVar3,iVar1);
  fVar5 = fVar2 * 0.001 * 77.0;
  *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1a4) + 0x60) =
       (*(float *)(iVar1 + 0x60) + 72.0) - 20.0;
  if (fVar5 < 1.0) {
    if (fVar2 <= 0.0) {
      iVar1 = *(int *)(param_1 + 0x14);
      goto LAB_0882d320;
    }
    fVar5 = 1.0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
LAB_0882d320:
  uVar3 = *(undefined4 *)(iVar1 + 0x30);
  uVar4 = FUN_089f494c(uVar3);
  FUN_0882c4c8(0,0,fVar5,uVar4,param_1,uVar3);
  return;
}

