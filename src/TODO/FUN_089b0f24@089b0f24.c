#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b0f24(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  param_2 = param_2 & 0xff;
  if (*(char *)(param_1 + param_2 + 0x579) != '\0') {
    iVar2 = param_1 + param_2 * 0x28;
    iVar3 = *(int *)(param_1 + 0x1c);
    fVar5 = *(float *)(iVar2 + 0x184) + 0.03333334;
    iVar1 = param_2 * 4;
    *(float *)(iVar2 + 0x184) = fVar5;
    iVar3 = *(int *)(iVar3 + iVar1 + 0x18);
    if (*(char *)(iVar2 + 0x16f) == '\0') {
      *(float *)(iVar3 + 0xbc) = *(float *)(iVar2 + 0x188) + fVar5;
      if (1.0 <= *(float *)(iVar2 + 0x184)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x18) + 0xbc) = 0x3f800000;
        iVar3 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar2 + 0x184) = 0;
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + iVar1 + 0x18) + 0xbc);
        *(undefined *)(iVar2 + 0x16f) = 1;
        *(undefined4 *)(iVar2 + 0x188) = uVar4;
        return;
      }
    }
    else {
      *(float *)(iVar3 + 0xbc) = *(float *)(iVar2 + 0x188) - fVar5;
      if (1.0 <= *(float *)(iVar2 + 0x184)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 + 0x18) + 0xbc) = 0;
        iVar3 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar2 + 0x184) = 0;
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + iVar1 + 0x18) + 0xbc);
        *(undefined *)(iVar2 + 0x16f) = 0;
        *(undefined4 *)(iVar2 + 0x188) = uVar4;
      }
    }
  }
  return;
}

