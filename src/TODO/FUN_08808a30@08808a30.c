#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08808a30(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  iVar2 = FUN_089f944c();
  if (iVar2 == 0) {
    FUN_08809148();
    return;
  }
  bVar1 = false;
  uVar3 = FUN_089f9468();
  iVar2 = FUN_089f9cf0(uVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_089d5814();
    if (iVar2 == 0) {
      iVar2 = FUN_089bbfdc(1);
      if (iVar2 == 0) goto LAB_08808ae4;
      iVar2 = FUN_0884b248();
      if ((iVar2 != 0) && (iVar2 = FUN_0880d354(), iVar2 != 0)) {
        iVar2 = FUN_089fb608();
        goto joined_r0x08808ad8;
      }
    }
    else {
      iVar2 = FUN_089fb608();
joined_r0x08808ad8:
      if (iVar2 == 0) goto LAB_08808ae4;
    }
  }
  else {
LAB_08808ae4:
    bVar1 = true;
  }
  iVar2 = FUN_089c9b48(4,DAT_08ac58c8);
  if (iVar2 != 0) {
    bVar1 = false;
  }
  if (bVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if ((0 < *(int *)(DAT_08ac5934 + 0x1c)) && (*(int *)(DAT_08ac5934 + 0x1c) < 2)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    iVar2 = DONE_GetPtr_DAT_08AC51F8();
    if (*(int *)(iVar2 + 0x24) < *(int *)(param_1 + 0x10)) {
      *(undefined *)(param_1 + 0x14) = 1;
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      cVar4 = *(char *)(param_1 + 0x14);
      goto LAB_08808b94;
    }
    iVar2 = FUN_0890ad3c();
    if (iVar2 == 0) {
      cVar4 = *(char *)(param_1 + 0x14);
      goto LAB_08808b94;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0x14) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      cVar4 = *(char *)(param_1 + 0x14);
      goto LAB_08808b94;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0x14) = 0;
  }
  cVar4 = *(char *)(param_1 + 0x14);
LAB_08808b94:
  if (cVar4 == '\0') {
    FUN_08809148();
    iVar2 = DONE_GetPtr_DAT_08AC51F8();
    *(undefined4 *)(iVar2 + 0x24) = 0x3c;
  }
  else {
    FUN_0880908c();
  }
  return;
}

