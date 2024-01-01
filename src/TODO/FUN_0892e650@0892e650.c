#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892e650(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  memset_jak((undefined *)(param_1 + 0x1cbc),0,4);
  *(undefined *)(param_1 + 0x1cbc) = param_2;
  if (*(char *)(param_1 + 0x1cbc) == '\0') {
    iVar1 = 0x72;
    iVar2 = 0x1c8;
    do {
      iVar1 = iVar1 + 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0x7e);
  }
  else {
    iVar2 = 0x72;
    uVar3 = 0;
    iVar1 = 0x1c8;
    do {
      uVar4 = (iVar2 - ((int)uVar3 >> 0x1f)) + -0x72 >> 1 & 0xff;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
      if ((*(uint *)(param_1 + 0x1cf0) & 1 << (*(byte *)(param_1 + uVar4 * 0xc + 0x1ba4) & 0x1f)) ==
          0) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      }
      else {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x128) = 2;
        iVar5 = param_1 + uVar4 * 8;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) = 0x3f800000;
        if ((int)uVar3 < 0) {
          fVar6 = *(float *)(param_1 + (uVar3 & 1) * -8 + 0x1cd8);
        }
        else {
          fVar6 = *(float *)(param_1 + (uVar3 & 1) * 8 + 0x1cd8);
        }
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x60) =
             *(float *)(iVar5 + 0x1824) + fVar6;
        if ((int)uVar3 < 0) {
          fVar6 = *(float *)(param_1 + (uVar3 & 1) * -8 + 0x1cdc);
        }
        else {
          fVar6 = *(float *)(param_1 + (uVar3 & 1) * 8 + 0x1cdc);
        }
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 100) =
             *(float *)(iVar5 + 0x1828) + fVar6;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xdc) = 2;
      }
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 0x7e);
  }
  return;
}

