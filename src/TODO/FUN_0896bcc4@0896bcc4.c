#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896bcc4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x2b76);
  if ((int)uVar4 < (int)(uVar4 + (int)*(char *)(param_1 + 0x2b77))) {
    iVar3 = uVar4 << 2;
    do {
      FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
      uVar2 = (uint)*(byte *)(param_1 + 0x2b76);
      iVar1 = uVar4 - uVar2;
      if (*(char *)(param_1 + 0x29bd) < '\x03') {
        if (iVar1 == 3) {
          FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + 0x29d2),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          uVar2 = (uint)*(byte *)(param_1 + 0x2b76);
          goto LAB_0896be20;
        }
        iVar1 = (int)*(char *)(param_1 + 0x2b77);
      }
      else {
        if (iVar1 < 4) {
          if (iVar1 != 1) {
            iVar1 = (int)*(char *)(param_1 + 0x2b77);
            goto LAB_0896be24;
          }
          FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + 0x29d2),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          uVar2 = (uint)*(byte *)(param_1 + 0x2b76);
        }
        else if (iVar1 < 5) {
          FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + 0x29d3),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          uVar2 = (uint)*(byte *)(param_1 + 0x2b76);
        }
        else {
          if (5 < iVar1) {
            iVar1 = (int)*(char *)(param_1 + 0x2b77);
            goto LAB_0896be24;
          }
          FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + 0x29d4),
                       *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          uVar2 = (uint)*(byte *)(param_1 + 0x2b76);
        }
LAB_0896be20:
        iVar1 = (int)*(char *)(param_1 + 0x2b77);
      }
LAB_0896be24:
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar4 < (int)(uVar2 + iVar1));
  }
  return;
}

