#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089047bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (iVar1 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  iVar3 = 0;
  iVar1 = param_1;
  do {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 100);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 8) = 0;
      iVar2 = *(int *)(iVar1 + 100);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0xa4);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar1 + 100) = 0;
      iVar2 = *(int *)(iVar1 + 0xa4);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0xe4);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar1 + 0xa4) = 0;
      iVar2 = *(int *)(iVar1 + 0xe4);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x124);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar1 + 0xe4) = 0;
      iVar2 = *(int *)(iVar1 + 0x124);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar1 + 0x164);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar1 + 0x124) = 0;
      iVar2 = *(int *)(iVar1 + 0x164);
    }
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar1 + 0x164) = 0;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0xc;
    iVar1 = iVar1 + 8;
  } while (iVar3 < 8);
  return;
}

