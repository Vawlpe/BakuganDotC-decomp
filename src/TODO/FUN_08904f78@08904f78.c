#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08904f78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  iVar3 = 0;
  iVar1 = param_1;
  iVar4 = param_1;
  do {
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 100);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = *(int *)(iVar4 + 100);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 0xa4);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar4 + 100) = 0;
      iVar2 = *(int *)(iVar4 + 0xa4);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 0xe4);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar4 + 0xa4) = 0;
      iVar2 = *(int *)(iVar4 + 0xe4);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 0x124);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar4 + 0xe4) = 0;
      iVar2 = *(int *)(iVar4 + 0x124);
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 0x164);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar4 + 0x124) = 0;
      iVar2 = *(int *)(iVar4 + 0x164);
    }
    if (iVar2 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(iVar4 + 0x164) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0xc;
    iVar4 = iVar4 + 8;
  } while (iVar3 < 8);
  FUN_08904e5c(param_1 + 0x1a0);
  FUN_089086dc(param_1 + 0x1ac);
  return;
}

