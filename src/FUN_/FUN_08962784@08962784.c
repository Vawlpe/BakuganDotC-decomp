#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08962784(int param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28;
  fVar5 = *(float *)(iVar4 + 0x94) + 0.125;
  piVar2 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
  if (param_2 == '\0') {
    *(float *)(iVar4 + 0x94) = fVar5;
    *(float *)(*piVar2 + 0x90) =
         *(float *)(iVar4 + 0x9c) - (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * 2.2;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
    *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 0x90);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
    bVar1 = 1.0 <= *(float *)(param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28 + 0x94);
    iVar4 = *piVar2;
    if (bVar1) {
      *(undefined4 *)(iVar4 + 0x90) = 0x3f4ccccd;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4) + 0x94) =
           0x3f4ccccd;
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
      iVar4 = *piVar2;
    }
    iVar3 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                 *(undefined4 *)(iVar3 + 0x9c),iVar4,0);
  }
  else {
    *(float *)(iVar4 + 0x94) = fVar5;
    *(float *)(*piVar2 + 0xbc) = *(float *)(iVar4 + 0x98) - fVar5 * fVar5 * 0.6;
    iVar4 = param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28;
    fVar5 = *(float *)(iVar4 + 0x94);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4) + 0x90)
         = *(float *)(iVar4 + 0x9c) + fVar5 * fVar5 * 0.7;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
    *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 0x90);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
    bVar1 = 1.0 <= *(float *)(param_1 + (uint)*(ushort *)(param_1 + 0x5176) * 0x28 + 0x94);
    iVar4 = *piVar2;
    if (bVar1) {
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
      iVar4 = *piVar2;
    }
    iVar3 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                 *(undefined4 *)(iVar3 + 0x9c),iVar4,0);
  }
  if (!bVar1) {
    return 0;
  }
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4) + 0x128) = 8;
  return 1;
}

