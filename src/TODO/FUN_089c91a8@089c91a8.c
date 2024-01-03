#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c91a8(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    *(undefined **)(param_1 + 0x20) = &DAT_08af52a4;
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x34);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x28) = 0;
      iVar2 = *(int *)(param_1 + 0x34);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x38);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar2 = *(int *)(param_1 + 0x38);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x38) = 0;
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    if (iVar2 == 0) {
      puVar3 = *(undefined **)(param_1 + 0x48);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x3c) = 0;
      puVar3 = *(undefined **)(param_1 + 0x48);
    }
    if (puVar3 != (undefined *)0x0) {
      *puVar3 = 2;
    }
    uVar1 = DONE_GetPtr_DAT_08AC5278();
    FUN_089c2824(uVar1,*(undefined4 *)(param_1 + 0x4c));
    FUN_089d8bf0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

