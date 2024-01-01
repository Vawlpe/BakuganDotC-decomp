#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a899c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (((uint)*(byte *)(param_1 + 0x673) & 1 << (param_2 & 0x1f)) != 0) {
    iVar2 = param_1 + (param_2 & 0xff) * 0x28;
    iVar3 = *(int *)(param_1 + 0x1c);
    fVar5 = *(float *)(iVar2 + 0x224) + 0.03333334;
    iVar1 = (param_2 & 0xff) * 4;
    *(float *)(iVar2 + 0x224) = fVar5;
    iVar3 = *(int *)(iVar3 + iVar1 + 0x28);
    if (*(char *)(iVar2 + 0x20f) == '\0') {
      *(float *)(iVar3 + 0xbc) = *(float *)(iVar2 + 0x228) + fVar5;
      if (1.0 <= *(float *)(iVar2 + 0x224)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x28) + 0xbc) = 0x3f800000;
        iVar3 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar2 + 0x224) = 0;
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + iVar1 + 0x28) + 0xbc);
        *(undefined *)(iVar2 + 0x20f) = 1;
        *(undefined4 *)(iVar2 + 0x228) = uVar4;
        return;
      }
    }
    else {
      *(float *)(iVar3 + 0xbc) = *(float *)(iVar2 + 0x228) - fVar5;
      if (1.0 <= *(float *)(iVar2 + 0x224)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x28) + 0xbc) = 0;
        iVar3 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar2 + 0x224) = 0;
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + iVar1 + 0x28) + 0xbc);
        *(undefined *)(iVar2 + 0x20f) = 0;
        *(undefined4 *)(iVar2 + 0x228) = uVar4;
      }
    }
  }
  return;
}

