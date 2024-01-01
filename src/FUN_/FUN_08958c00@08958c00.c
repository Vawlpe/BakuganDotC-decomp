#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08958c00(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4));
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  uVar1 = (uint)*(ushort *)(param_1 + 0x5162);
  iVar5 = param_1;
  do {
    FUN_089f46dc(*(undefined4 *)(iVar2 + (uVar1 + iVar6) * 4));
    FUN_089a51fc(0x3f800000,0x3f800000,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + ((uint)*(ushort *)(param_1 + 0x5162) + iVar6) * 4));
    uVar1 = (uint)*(ushort *)(param_1 + 0x5162);
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = (int *)(iVar2 + (uVar1 + iVar6) * 4);
    piVar4 = (int *)(iVar2 + (uint)*(ushort *)(param_1 + 0x5160) * 4);
    iVar6 = iVar6 + 1;
    *(float *)(iVar5 + 0x4e2c) = *(float *)(*piVar3 + 0x60) - *(float *)(*piVar4 + 0x60);
    *(float *)(iVar5 + 0x4e30) = *(float *)(*piVar3 + 100) - *(float *)(*piVar4 + 100);
    iVar5 = iVar5 + 8;
  } while (iVar6 < 0x14);
  FUN_089f46dc(*(undefined4 *)(iVar2 + (uint)*(ushort *)(param_1 + 0x516a) * 4));
  FUN_089a51fc(0x3f800000,0x3f800000,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4));
  piVar3 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4);
  piVar4 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5160) * 4);
  *(float *)(param_1 + 0x4ecc) = *(float *)(*piVar3 + 0x60) - *(float *)(*piVar4 + 0x60);
  *(float *)(param_1 + 0x4ed0) = *(float *)(*piVar3 + 100) - *(float *)(*piVar4 + 100);
  return;
}

