#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b41d8(int param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  
  pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x124) + 100);
  *pfVar1 = *pfVar1 - 0.5;
  pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x128) + 100);
  *pfVar1 = *pfVar1 - 0.5;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x124);
  if (*(float *)(iVar3 + 100) <= -272.0) {
    *(undefined4 *)(iVar3 + 100) = 0x43880000;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x128);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x128);
  }
  if (*(float *)(iVar3 + 100) <= -272.0) {
    *(undefined4 *)(iVar3 + 100) = 0x43880000;
  }
  uVar2 = *(int *)(param_1 + 0x8c) + 1;
  if ((int)uVar2 < 0) {
    uVar2 = -(-uVar2 & 0xf);
  }
  else {
    uVar2 = uVar2 & 0xf;
  }
  *(uint *)(param_1 + 0x8c) = uVar2;
  if (uVar2 == 0) {
    FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 300));
  }
  return;
}

