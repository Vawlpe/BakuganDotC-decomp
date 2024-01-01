#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899c054(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x21d0);
  if ((*(byte *)(iVar1 + 8) & 0x10) != 0) {
    fVar3 = fVar3 + 0.05;
    *(float *)(param_1 + 0x21d0) = fVar3;
  }
  if ((*(byte *)(iVar1 + 8) & 0x40) != 0) {
    *(float *)(param_1 + 0x21d0) = fVar3 - 0.05;
  }
  if (((int)*(char *)(iVar1 + 8) & 0x80U) != 0) {
    *(float *)(param_1 + 0x21d4) = *(float *)(param_1 + 0x21d4) + 0.05;
  }
  if ((*(byte *)(iVar1 + 8) & 0x20) != 0) {
    *(float *)(param_1 + 0x21d4) = *(float *)(param_1 + 0x21d4) - 0.05;
  }
  if ((*(byte *)(iVar1 + 9) & 1) != 0) {
    *(float *)(param_1 + 0x21d8) = *(float *)(param_1 + 0x21d8) + 0.05;
  }
  if ((*(byte *)(iVar1 + 9) & 2) != 0) {
    *(float *)(param_1 + 0x21d8) = *(float *)(param_1 + 0x21d8) - 0.05;
  }
  uVar2 = FUN_089a4dc8();
  *(undefined4 *)(param_1 + 0x21d0) = uVar2;
  uVar2 = FUN_089a4dc8(*(undefined4 *)(param_1 + 0x21d4));
  *(undefined4 *)(param_1 + 0x21d4) = uVar2;
  uVar2 = FUN_089a4dc8(*(undefined4 *)(param_1 + 0x21d8));
  *(undefined4 *)(param_1 + 0x21d8) = uVar2;
  return;
}

