#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985f1c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe8);
  if (1.5 <= *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34) +
                       0x90)) {
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
    *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xec);
  }
  else {
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xbcc) * 4 + 0x34);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xec);
  }
  if (0.6 < *(float *)(iVar2 + 0x90)) {
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

