#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882fd44(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int **)(param_1 + 0xa8c) == (int *)0x0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xd0);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      return;
    }
    iVar4 = FUN_0884b248();
    if ((iVar4 != 0) && (iVar4 = FUN_0884b268(), *(char *)(iVar4 + 0x55d) != '\0')) {
      return;
    }
    iVar4 = FUN_089c9b48(0x22,DAT_08ac58c8);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = FUN_0882c220(0xb);
    if (iVar4 != 1) {
      return;
    }
    iVar4 = FUN_0882fcbc(param_1);
    if (iVar4 == 0) {
      FUN_089c2fbc(0x29fb);
      *(undefined4 *)(param_1 + 0xa64) = 1;
      iVar4 = *(int *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      uVar1 = DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880d0ac(uVar1,0x1e);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (4 < iVar4) {
        iVar4 = 4;
      }
      if (*(char *)(param_1 + 0xa7c) == '\0') {
        FUN_089c2fbc(iVar4 + 0x29f6);
        iVar4 = *(int *)(param_1 + 0xd0);
      }
      else {
        FUN_089c2fbc(0x29fa);
        iVar4 = *(int *)(param_1 + 0xd0);
      }
      *(undefined4 *)(param_1 + 0xd4) = 0x32;
      *(undefined4 *)(param_1 + 0xa64) = 0;
    }
    *(int *)(param_1 + 0xd0) = iVar4 + 1;
  }
  else if (1 < iVar4) {
    if (2 < iVar4) {
      return;
    }
    iVar4 = **(int **)(param_1 + 0xa8c);
    goto LAB_0882fee4;
  }
  if (*(int *)(param_1 + 0xa64) == 0) {
    iVar4 = *(int *)(param_1 + 0xd4) + -1;
    *(int *)(param_1 + 0xd4) = iVar4;
    if (0 < iVar4) {
      return;
    }
    FUN_089c2fbc(0x29fb);
    *(undefined4 *)(param_1 + 0xa64) = 1;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    piVar2 = *(int **)(param_1 + 0xa8c);
  }
  else {
    piVar2 = *(int **)(param_1 + 0xa8c);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  }
  iVar4 = *piVar2;
LAB_0882fee4:
  if (iVar4 != 0) {
    uVar5 = 0;
    FUN_089f86e4();
    iVar4 = *(int *)(param_1 + 0xd4) + 1;
    *(int *)(param_1 + 0xd4) = iVar4;
    if (iVar4 == 10) {
      iVar4 = DONE_NotZero_DAT_08AC5874();
      if (iVar4 == 0) {
        puVar3 = *(undefined4 **)(param_1 + 0xa8c);
      }
      else {
        uVar1 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar1,0x200133,0,0);
        puVar3 = *(undefined4 **)(param_1 + 0xa8c);
      }
    }
    else if (iVar4 == 0x1c) {
      iVar4 = DONE_NotZero_DAT_08AC5874();
      if (iVar4 == 0) {
        puVar3 = *(undefined4 **)(param_1 + 0xa8c);
      }
      else {
        uVar1 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar1,0x200134,0,0);
        puVar3 = *(undefined4 **)(param_1 + 0xa8c);
      }
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0xa8c);
    }
    iVar4 = FUN_089f89cc(*puVar3,0);
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x1c) != 0) {
        uVar5 = (uint)*(ushort *)(*(int *)(iVar4 + 0x1c) + 0xc);
      }
      if (uVar5 <= *(uint *)(iVar4 + 0x34)) {
        *(undefined *)(param_1 + 0xae1) = 1;
        FUN_0884b444(0);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        FUN_0882c2cc(0xc,1);
        FUN_089c9b74(0x1f,DAT_08ac58c8);
      }
    }
  }
  return;
}

