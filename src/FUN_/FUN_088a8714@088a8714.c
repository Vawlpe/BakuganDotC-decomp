#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a8714(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x20);
  bVar1 = iVar2 < 0x33;
  if (iVar2 < 0xf) {
    bVar1 = iVar2 < 10;
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        return;
      }
      if (DAT_08abd598 == '\0') {
        return;
      }
      uVar3 = 0x32;
      if (*(char *)(param_1 + 0x1c) != '\0') {
        uVar3 = 0xb;
      }
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      return;
    }
    iVar2 = iVar2 + -10;
    if (bVar1) {
      return;
    }
    if (iVar2 == 0) {
      iVar2 = FUN_089bed14(100);
      if (0x45 < iVar2) {
        *(undefined4 *)(param_1 + 0x20) = 0x32;
        return;
      }
      iVar2 = FUN_088a8440(param_1);
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 0x1c) = 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        return;
      }
      *(undefined4 *)(param_1 + 0x20) = 0x32;
      return;
    }
    if (iVar2 == 1) {
      uVar3 = FUN_088a845c(param_1,1);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_088a8854:
      FUN_088a8624(param_1,uVar3);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      return;
    }
    if (iVar2 == 2) {
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      goto LAB_088a8854;
    }
    if (iVar2 == 3) {
      iVar2 = FUN_088a8440(param_1);
      iVar4 = *(int *)(param_1 + 0x28) + -1;
      *(int *)(param_1 + 0x28) = iVar4;
      if ((-1 < iVar4) && (iVar2 != 0)) {
        return;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      return;
    }
    if (iVar2 == 4) {
      FUN_088a86a4(param_1);
      *(undefined *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0x32;
      return;
    }
  }
  if (bVar1) {
    if (iVar2 < 0x32) {
      return;
    }
    uVar3 = FUN_088a845c(param_1,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else if (0x33 < iVar2) {
    if (0x34 < iVar2) {
      return;
    }
    goto LAB_088a88f4;
  }
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  *(int *)(param_1 + 0x28) = iVar2;
  if (-1 < iVar2) {
    return;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_088a88f4:
  *(undefined4 *)(param_1 + 0x20) = 10;
  return;
}

