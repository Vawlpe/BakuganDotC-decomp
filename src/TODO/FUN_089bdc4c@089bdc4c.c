#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bdc4c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined **)(param_1 + 0x20) = &DAT_08af5214;
  if (DAT_08ac520c == param_1) {
    DAT_08ac520c = *(int *)(param_1 + 4);
  }
  FUN_089d8d28(param_1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x2a) == '\0') {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      local_1c = 0;
      FUN_089bdf3c(param_1,*(undefined4 *)(param_1 + 0x24),&local_1c);
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar2 + -0x10,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2a) == '\0') {
      iVar2 = *(int *)(param_1 + 0x24);
    }
    else {
      local_20 = 0;
      FUN_089bdf3c(param_1,*(undefined4 *)(param_1 + 0x24),&local_20);
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x24);
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar2 + -0x10,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0x38) = 0;
        iVar2 = *(int *)(param_1 + 0x24);
      }
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x30);
      goto LAB_089bdd78;
    }
    FUN_089d8634();
    FUN_089d7fd8(iVar2,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x30);
LAB_089bdd78:
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar1 = FUN_089fce94(param_1);
      FUN_089fd4a0(uVar1,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c));
    }
  }
  else {
    uVar1 = FUN_089fce94();
    FUN_089fd4a0(uVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c));
  }
  FUN_089d8bf0(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_089d8634();
    FUN_089d7fd8(param_1,0,0);
    FUN_089d866c();
  }
  return;
}

