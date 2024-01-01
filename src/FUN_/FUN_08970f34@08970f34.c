#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970f34(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1 + 0x90;
  iVar6 = 0x24;
  iVar5 = 0x90;
  do {
    FUN_08970768(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
    uVar3 = iVar6 - 0x24;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(undefined4 *)(iVar4 + 0xa9c) = *(undefined4 *)(*piVar2 + 100);
    if ((int)uVar3 < 2) {
      if (-1 < (int)uVar3) {
        if ((int)uVar3 < 1) {
          FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0xba9),*piVar2);
          iVar1 = FUN_0880d354();
          if (iVar1 != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
            *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
            *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
            *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
            *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
          }
        }
        else {
          FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0xbaa),*piVar2);
        }
      }
    }
    else if ((int)uVar3 < 3) {
      FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0xbab),*piVar2);
    }
    else if (((int)uVar3 < 4) &&
            (FUN_08970eac(param_1,*piVar2,(int)*(char *)(param_1 + 0xbac)),
            ((uint)*(byte *)(param_1 + 0xbb9) & 1 << (uVar3 & 0x1f)) == 0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar6 < 0x28);
  return;
}

