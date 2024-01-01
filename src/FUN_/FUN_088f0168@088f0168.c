#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0168(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_088bad9c(DAT_08ac5c90);
  iVar4 = 10;
  iVar3 = 0;
  iVar1 = FUN_088f5010(1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_088f5010(2,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_088f5010(5,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_088f5010(3,param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_088f5010(6,param_2);
          if (iVar1 != 0) {
            iVar4 = 6;
            iVar3 = FUN_088f523c(6,param_2);
            *(undefined *)(param_1 + 0x269) = 6;
          }
        }
        else {
          iVar4 = 5;
          iVar3 = FUN_088f523c(3,param_2);
          *(undefined *)(param_1 + 0x269) = 6;
        }
      }
      else {
        iVar4 = 9;
        iVar3 = FUN_088f523c(5,param_2);
        *(undefined *)(param_1 + 0x269) = 5;
      }
    }
    else {
      iVar4 = 3;
      iVar3 = FUN_088f523c(2,param_2);
      *(undefined *)(param_1 + 0x269) = 5;
    }
  }
  else {
    iVar4 = 1;
    iVar3 = FUN_088f523c(1,param_2);
    *(undefined *)(param_1 + 0x269) = 5;
  }
  if (iVar4 != 10) {
    if (iVar4 == 5) {
      if (iVar3 / 6 == 0) {
        DAT_08ac19f0 = 0;
      }
      else if (iVar3 / 6 == 1) {
        DAT_08ac19f0 = 1;
      }
    }
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,0x14,iVar3);
    FUN_089bf754(0x177,iVar4);
  }
  return;
}

