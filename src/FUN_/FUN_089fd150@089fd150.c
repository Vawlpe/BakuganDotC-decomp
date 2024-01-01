#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fd150(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,char param_5,
                char param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = (param_4 & 1) != 0;
  FUN_089bb728(param_1[2]);
  bVar2 = false;
  iVar5 = *(int *)(*param_1 + 0x24);
  if (param_5 == '\0') {
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      uVar3 = FUN_089fb9d0(iVar5);
      iVar4 = strcmp(uVar3,param_3);
      if (iVar4 == 0) {
        bVar2 = true;
        FUN_089fbd68(iVar5,param_2,bVar1);
        iVar4 = FUN_089fbb30(iVar5,0x10);
        if (iVar4 != 0) {
          FUN_089fbb8c(iVar5,0x10);
        }
        break;
      }
    }
  }
  if (!bVar2) {
    iVar5 = 0;
    if (param_1[3] != 0) {
      iVar5 = FUN_089d76ac();
    }
    if (iVar5 == 0) {
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(bVar1);
      iVar4 = FUN_089d7d74(0x60,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar5 = 0;
      if (iVar4 != 0) {
        FUN_089fb734(iVar4);
        iVar5 = iVar4;
      }
      iVar4 = param_1[2];
    }
    else {
      FUN_089fb734(iVar5);
      iVar4 = param_1[2];
    }
    *(int *)(iVar5 + 0x4c) = iVar4;
    FUN_089d9174(*param_1,iVar5);
    if (param_6 == '\0') {
      FUN_089fb8a8(iVar5,param_3);
    }
    else {
      FUN_089fb8e8(iVar5,param_3,bVar1);
    }
    FUN_089fbd68(iVar5,param_2,bVar1);
    FUN_089fbc5c(iVar5,param_4);
  }
  FUN_089bb790(param_1[2]);
  return iVar5;
}

