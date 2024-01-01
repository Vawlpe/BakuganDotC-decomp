#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894ea3c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar2 = (param_2 & 0xff) + 6;
  if (*(char *)(param_1 + (param_2 & 0xff) + 0x2d1) != '\0') {
    iVar3 = param_1 + iVar2 * 0x28;
    iVar2 = iVar2 * 4;
    fVar5 = *(float *)(iVar3 + 0x94) + 0.03333334;
    iVar1 = *(int *)(param_1 + 0x1c);
    *(float *)(iVar3 + 0x94) = fVar5;
    iVar1 = *(int *)(iVar1 + iVar2);
    if (*(char *)(iVar3 + 0x7f) == '\0') {
      *(float *)(iVar1 + 0xbc) = *(float *)(iVar3 + 0x98) + fVar5;
      if (1.0 <= *(float *)(iVar3 + 0x94)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0x3f800000;
        iVar1 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar3 + 0x94) = 0;
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + iVar2) + 0xbc);
        *(undefined *)(iVar3 + 0x7f) = 1;
        *(undefined4 *)(iVar3 + 0x98) = uVar4;
        return;
      }
    }
    else {
      *(float *)(iVar1 + 0xbc) = *(float *)(iVar3 + 0x98) - fVar5;
      if (1.0 <= *(float *)(iVar3 + 0x94)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0;
        iVar1 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar3 + 0x94) = 0;
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + iVar2) + 0xbc);
        *(undefined *)(iVar3 + 0x7f) = 0;
        *(undefined4 *)(iVar3 + 0x98) = uVar4;
      }
    }
  }
  return;
}

