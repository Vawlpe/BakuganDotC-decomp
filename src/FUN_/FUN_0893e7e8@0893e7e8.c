#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893e7e8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x7fc);
  iVar6 = uVar2 * -9;
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x38);
    if (iVar5 < (int)uVar2) {
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x38) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60) + (float)iVar6;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x38) + 100) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100);
      uVar2 = (uint)*(byte *)(param_1 + iVar5 + 0x7f2);
      FUN_089f4a90((float)(uVar2 / 5),(float)(uVar2 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x38));
      iVar6 = iVar6 + 0x12;
      bVar1 = *(byte *)(param_1 + 0x7fc);
    }
    else {
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
      bVar1 = *(byte *)(param_1 + 0x7fc);
    }
    uVar2 = (uint)bVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 6);
  if (uVar2 != *(byte *)(param_1 + 0x7e4)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + uVar2 * 4 + 0x38);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7fc) * 4 + 0x38) +
              0x60) = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0x60) + (float)iVar6;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7fc) * 4 + 0x38) + 100) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 100);
    FUN_089f4a90(0,0x40a00000,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x7fc) * 4 + 0x38));
  }
  return;
}

