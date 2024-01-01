#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883a24c(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = FUN_0882c548();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x48c) == '\0') {
      fVar3 = *(float *)(param_1 + 0x488) + 0.05;
      *(float *)(param_1 + 0x488) = fVar3;
      if (1.5 <= fVar3) {
        fVar3 = 1.5;
        *(undefined4 *)(param_1 + 0x488) = 0x3fc00000;
        *(undefined *)(param_1 + 0x48c) = 1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x488) - 0.05;
      *(float *)(param_1 + 0x488) = fVar3;
      if (fVar3 <= 0.0) {
        *(undefined4 *)(param_1 + 0x488) = 0;
        fVar3 = 0.0;
        *(undefined *)(param_1 + 0x48c) = 0;
      }
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x2c0) + 0xbc) = fVar3;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x2c8) + 0xbc) = fVar3;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x2c4) + 0xbc) = fVar3;
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x2d4) + 0xbc) = fVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c0);
    if (1.0 <= *(float *)(iVar1 + 0x4f0) * 0.0001) {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c8);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      fVar3 = *(float *)(iVar1 + 0x4f4);
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c4);
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c8);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      fVar3 = *(float *)(iVar1 + 0x4f4);
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c4);
    }
    if (1.0 <= fVar3 * 0.0001) {
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2d4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    }
    else {
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2d4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    }
  }
  return;
}

