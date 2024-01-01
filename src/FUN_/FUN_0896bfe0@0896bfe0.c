#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896bfe0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b8a);
  iVar1 = uVar2 + (int)*(char *)(param_1 + 0x2b8b);
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 << 2;
    uVar4 = uVar2;
    do {
      if ((int)(uVar4 - uVar2) < *(char *)(param_1 + 0x29bd) * 2) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        if ((uVar4 - uVar2 & 1) == 0) {
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
          local_30 = 0;
          local_2c = 0;
          local_24 = 0x41800000;
          local_28 = (float)(((uint)*(byte *)(param_1 + (int)(uVar4 - *(byte *)(param_1 + 0x2b8a)) /
                                                        2 + 0x2a4c) * 0x3e) / 0x96 + 1);
          FUN_089f4060(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),&local_30);
          FUN_089f4924((float)(((uint)*(byte *)(param_1 + (int)(uVar4 - *(byte *)(param_1 + 0x2b8a))
                                                          / 2 + 0x2a4c) * 0x3e) / 0x96 + 1),
                       0x41800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          uVar2 = (uint)*(byte *)(param_1 + 0x2b8a);
          iVar1 = uVar2 + (int)*(char *)(param_1 + 0x2b8b);
        }
        else {
          FUN_0896a294(param_1);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
          uVar2 = (uint)*(byte *)(param_1 + 0x2b8a);
          iVar1 = uVar2 + (int)*(char *)(param_1 + 0x2b8b);
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar4 < iVar1);
  }
  return;
}

