#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895be84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  iVar2 = *(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x5160) * 4);
  iVar1 = param_1;
  do {
    *(float *)(*(int *)(iVar3 + ((uint)*(ushort *)(param_1 + 0x5162) + iVar4) * 4) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar1 + 0x4e2c) * *(float *)(iVar2 + 0x90);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x5162) + iVar4) * 4
                       ) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar1 + 0x4e30) * *(float *)(iVar2 + 0x94);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x5164) + iVar4) * 4
                       ) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar1 + 0x4e2c) * *(float *)(iVar2 + 0x90);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x5164) + iVar4) * 4
                       ) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar1 + 0x4e30) * *(float *)(iVar2 + 0x94);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x5166) + iVar4) * 4
                       ) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar1 + 0x4e2c) * *(float *)(iVar2 + 0x90);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x5166) + iVar4) * 4
                       ) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar1 + 0x4e30) * *(float *)(iVar2 + 0x94);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x51f6) + iVar4) * 4
                       ) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(iVar1 + 0x4e2c) * *(float *)(iVar2 + 0x90);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    iVar3 = (uint)*(ushort *)(param_1 + 0x51f6) + iVar4;
    iVar4 = iVar4 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(iVar1 + 0x4e30) * *(float *)(iVar2 + 0x94);
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar1 = iVar1 + 8;
    iVar2 = *(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x5160) * 4);
  } while (iVar4 < 0x14);
  *(float *)(*(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x5168) * 4) + 0x60) =
       *(float *)(iVar2 + 0x60) + *(float *)(param_1 + 0x4ecc) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5168) * 4) + 100) =
       *(float *)(iVar1 + 100) + *(float *)(param_1 + 0x4ed0) * *(float *)(iVar1 + 0x94);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4) + 0x60) =
       *(float *)(iVar1 + 0x60) + *(float *)(param_1 + 0x4ecc) * *(float *)(iVar1 + 0x90);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4) + 100) =
       *(float *)(iVar1 + 100) + *(float *)(param_1 + 0x4ed0) * *(float *)(iVar1 + 0x94);
  return;
}

