#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de34c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af5484;
    if (*(int *)(param_1 + 0x11c) == 0) {
      FUN_089da8d4(*(undefined4 *)(param_1 + 0x118),0,0x2000);
      uVar1 = *(undefined4 *)(param_1 + 0x130);
    }
    else {
      FUN_089da8d4(*(int *)(param_1 + 0x11c),0,*(undefined4 *)(param_1 + 0x120));
      uVar1 = *(undefined4 *)(param_1 + 0x130);
    }
    FUN_08a15578(uVar1,0xfff5);
    iVar3 = 0;
    iVar2 = *(int *)(param_1 + 0x130);
    iVar4 = 0;
    if (*(short *)(iVar2 + 0x1e) != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar4 + 4) = 0;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(param_1 + 0x130);
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (int)(uint)*(ushort *)(iVar2 + 0x1e));
    }
    iVar3 = 0;
    iVar4 = 0;
    if (*(short *)(iVar2 + 0x1c) != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar4 + 4) = 0;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(param_1 + 0x130);
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < (int)(uint)*(ushort *)(iVar2 + 0x1c));
    }
    FUN_08a15074();
    if ((*(char *)(param_1 + 0xbb) != '\0') && (iVar2 = *(int *)(param_1 + 0xe0), iVar2 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    FUN_089da8d4(0,0,0x2000);
    iVar2 = *(int *)(param_1 + 0x11c);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x128);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x11c) = 0;
      iVar2 = *(int *)(param_1 + 0x128);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x118);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x128) = 0;
      iVar2 = *(int *)(param_1 + 0x118);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xf8);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x118) = 0;
      iVar2 = *(int *)(param_1 + 0xf8);
    }
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

