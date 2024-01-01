#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945bd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  
  FUN_08945520();
  iVar2 = 0;
  iVar3 = param_1;
  do {
    iVar1 = *(int *)(iVar3 + 0x8c);
    if (*(int *)(iVar1 + 0x84) != 0) {
      if (*(float *)(iVar1 + 100) <= *(float *)(iVar1 + 0xa8) * -24.0) {
        FUN_089f51b8();
        *(undefined4 *)(iVar1 + 0x84) = 0;
      }
      else {
        *(float *)(iVar1 + 100) = *(float *)(iVar1 + 100) - 1.0;
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x14);
  iVar2 = *(int *)(param_1 + 0x84);
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar2 < iVar3) {
    puVar4 = &DAT_08ac1c2c + iVar2 * 3;
    do {
      if (puVar4[2] != 9) {
        iVar3 = *(int *)(&DAT_08a9d074 + puVar4[2] * 4);
        if (puVar4[2] == 8) {
          iVar3 = 0x1e;
        }
        fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4) + 100);
        fVar5 = (float)FUN_089f494c();
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
        if (fVar6 <= -fVar5) {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(param_1 + 0x88);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
        }
        else {
          *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) - 1.0;
          iVar3 = *(int *)(param_1 + 0x88);
        }
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar2 < iVar3);
  }
  return;
}

