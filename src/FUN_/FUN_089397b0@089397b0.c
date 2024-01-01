#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089397b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x2a0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089e2910(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x798) = iVar3;
  FUN_089e29e4();
  *(undefined4 *)(*(int *)(param_1 + 0x798) + 0x40) = 0x3f800000;
  iVar3 = *(int *)(param_1 + 0x798);
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  iVar3 = *(int *)(param_1 + 0x798);
  if (*(char *)(param_1 + 0x5ee) == '\x06') {
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0x41700000;
    *(undefined4 *)(iVar3 + 0x58) = 0x425c0000;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    FUN_089e3008(0x41200000,0x41a00000,*(undefined4 *)(param_1 + 0x798));
    iVar3 = *(int *)(param_1 + 0x798);
  }
  else if (*(char *)(param_1 + 0x5ee) == '\x05') {
    if (DAT_08ac19f0 == 0) {
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x54) = 0;
      *(undefined4 *)(iVar3 + 0x5c) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0x41c80000;
      iVar3 = *(int *)(param_1 + 0x798);
    }
    else if (DAT_08ac19f0 == 1) {
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x54) = 0;
      *(undefined4 *)(iVar3 + 0x5c) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0x41a00000;
      iVar3 = *(int *)(param_1 + 0x798);
    }
    FUN_089e3008(0,0xc1200000,iVar3);
    iVar3 = *(int *)(param_1 + 0x798);
  }
  FUN_089e2b14(iVar3,0xffffffff);
  iVar3 = *(int *)(*(int *)(param_1 + 0x798) + 0x20);
  (**(code **)(iVar3 + 0x14))(*(int *)(param_1 + 0x798) + (int)*(short *)(iVar3 + 0x10));
  return;
}

