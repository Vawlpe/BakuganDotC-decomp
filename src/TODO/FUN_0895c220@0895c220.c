#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895c220(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar2 = (int)*(char *)(param_1 + 0x4cda);
  uVar3 = 0;
  iVar1 = param_1;
  if (0 < iVar2) {
    do {
      iVar5 = param_1 + uVar3;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f68) * 4);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f6c) * 4);
      if ((uVar3 & 1) == 0) {
        *(float *)(iVar4 + 0x60) =
             *(float *)(iVar2 + 0x60) + *(float *)(iVar1 + 0x4ef4) * *(float *)(iVar2 + 0x90);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f68) * 4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f6c) * 4);
        fVar6 = *(float *)(iVar1 + 0x4ef8);
      }
      else {
        *(float *)(iVar4 + 0x60) =
             *(float *)(iVar2 + 0x60) + -(*(float *)(iVar1 + 0x4ef4) * *(float *)(iVar2 + 0x90));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f68) * 4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f6c) * 4);
        fVar6 = *(float *)(iVar1 + 0x4ef8);
      }
      uVar3 = uVar3 + 1;
      *(float *)(iVar4 + 100) = *(float *)(iVar2 + 100) + fVar6 * *(float *)(iVar2 + 0x94);
      iVar2 = (int)*(char *)(param_1 + 0x4cda);
      iVar1 = iVar1 + 8;
    } while ((int)uVar3 < iVar2);
  }
  uVar3 = 0;
  iVar1 = param_1;
  if (0 < iVar2) {
    do {
      iVar5 = param_1 + uVar3;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f68) * 4);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f70) * 4);
      if ((uVar3 & 1) == 0) {
        *(float *)(iVar4 + 0x60) =
             *(float *)(iVar2 + 0x60) + *(float *)(iVar1 + 0x4f14) * *(float *)(iVar2 + 0x90);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f68) * 4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f70) * 4);
        fVar6 = *(float *)(iVar1 + 0x4f18);
      }
      else {
        *(float *)(iVar4 + 0x60) =
             *(float *)(iVar2 + 0x60) + -(*(float *)(iVar1 + 0x4f14) * *(float *)(iVar2 + 0x90));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f68) * 4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar5 + 0x4f70) * 4);
        fVar6 = *(float *)(iVar1 + 0x4f18);
      }
      uVar3 = uVar3 + 1;
      *(float *)(iVar4 + 100) = *(float *)(iVar2 + 100) + fVar6 * *(float *)(iVar2 + 0x94);
      iVar1 = iVar1 + 8;
    } while ((int)uVar3 < (int)*(char *)(param_1 + 0x4cda));
  }
  return;
}

