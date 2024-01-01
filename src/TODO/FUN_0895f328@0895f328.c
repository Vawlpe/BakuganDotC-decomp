#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895f328(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  param_5 = param_5 & 0xffff;
  iVar2 = 0;
  if (param_5 != 0) {
    iVar3 = ((param_2 & 0xffff) + (param_6 & 0xff) * (param_3 & 0xffff) & 0xffff) * 4;
    do {
      uVar4 = (param_4 & 0xffff) + (param_6 & 0xff) * param_5 + iVar2 & 0xffff;
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      iVar1 = param_1 + uVar4 * 8;
      iVar5 = uVar4 * 4;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) =
           *(float *)(iVar6 + 0x60) + *(float *)(iVar1 + 0x4118) * *(float *)(iVar6 + 0x90);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      iVar2 = iVar2 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) =
           *(float *)(iVar6 + 100) + *(float *)(iVar1 + 0x411c) * *(float *)(iVar6 + 0x94);
    } while (iVar2 < (int)param_5);
  }
  return;
}

