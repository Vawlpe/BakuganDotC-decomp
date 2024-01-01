#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897e930(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xfc);
  if (1.4 <= *(float *)(param_1 + 0x1378)) {
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
    fVar2 = *(float *)(param_1 + 0x1378);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x100);
  }
  else {
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    fVar2 = *(float *)(param_1 + 0x1378);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x100);
  }
  if (0.6 < fVar2) {
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    return;
  }
  *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
  return;
}

