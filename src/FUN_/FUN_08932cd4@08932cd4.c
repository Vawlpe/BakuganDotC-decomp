#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08932cd4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x550,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  if (iVar2 != 0) {
    uVar4 = FUN_08a02cb4(iVar2 + DAT_08af1178,2,0x2a0,FUN_089e2910,0);
  }
  *(undefined4 *)(param_1 + 0x1a7c) = uVar4;
  iVar2 = 0;
  iVar5 = 0;
  do {
    FUN_089e29e4(*(int *)(param_1 + 0x1a7c) + iVar5);
    iVar3 = *(int *)(param_1 + 0x1a7c) + iVar5;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
      *(undefined4 *)(iVar3 + 100) = 0;
      *(undefined4 *)(iVar3 + 0x68) = 0;
      *(undefined4 *)(iVar3 + 0x6c) = 0;
      iVar3 = *(int *)(param_1 + 0x1a7c) + iVar5;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x54) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0x43160000;
      *(undefined4 *)(iVar3 + 0x5c) = 0;
      FUN_089e3008(0xc30c0000,0xc2b40000,*(int *)(param_1 + 0x1a7c) + iVar5);
      iVar3 = *(int *)(param_1 + 0x1a7c);
    }
    else {
      *(undefined4 *)(iVar3 + 0x60) = 0;
      *(undefined4 *)(iVar3 + 100) = 0x430c0000;
      *(undefined4 *)(iVar3 + 0x68) = 0;
      *(undefined4 *)(iVar3 + 0x6c) = 0;
      iVar3 = *(int *)(param_1 + 0x1a7c) + iVar5;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x54) = 0x430c0000;
      *(undefined4 *)(iVar3 + 0x58) = 0x43160000;
      *(undefined4 *)(iVar3 + 0x5c) = 0;
      FUN_089e3008(0,0xc2a00000,*(int *)(param_1 + 0x1a7c) + iVar5);
      *(undefined4 *)(*(int *)(param_1 + 0x1a7c) + iVar5 + 0x40) = 0x42b40000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a7c) + iVar5 + 0x44) = 0x43af0000;
      iVar3 = *(int *)(param_1 + 0x1a7c);
    }
    FUN_089e2b14(iVar3 + iVar5,0xffffffff);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a7c) + iVar5 + 0x20);
    (**(code **)(iVar3 + 0x14))(*(int *)(param_1 + 0x1a7c) + iVar5 + (int)*(short *)(iVar3 + 0x10));
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 0x2a0;
  } while (iVar2 < 2);
  return;
}

