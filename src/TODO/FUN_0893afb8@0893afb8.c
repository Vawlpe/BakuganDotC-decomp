#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893afb8(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = *(float *)(param_1 + 0x784) + 0.03333334;
  *(float *)(param_1 + 0x784) = fVar2;
  fVar2 = fVar2 * 0.5;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(char *)(param_1 + 0x78c) == '\0') {
    *(float *)(iVar1 + 0xbc) = *(float *)(param_1 + 0x788) - fVar2;
    if (1.0 <= *(float *)(param_1 + 0x784)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = 0x3f000000;
      uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc);
      *(undefined4 *)(param_1 + 0x784) = 0;
      *(undefined4 *)(param_1 + 0x788) = uVar3;
      *(undefined *)(param_1 + 0x78c) = 1;
      return;
    }
  }
  else {
    *(float *)(iVar1 + 0xbc) = *(float *)(param_1 + 0x788) + fVar2;
    if (1.0 <= *(float *)(param_1 + 0x784)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc) = 0x3f800000;
      uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0xbc);
      *(undefined4 *)(param_1 + 0x784) = 0;
      *(undefined4 *)(param_1 + 0x788) = uVar3;
      *(undefined *)(param_1 + 0x78c) = 0;
    }
  }
  return;
}

