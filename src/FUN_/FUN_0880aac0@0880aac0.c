#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880aac0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_120 [256];
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar3 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar3);
    if ((iVar4 != 0) && (iVar4 = FUN_089cc058(), iVar4 != 0)) {
      uVar3 = FUN_089cc080();
      FUN_089cc460(uVar3,1);
      uVar3 = FUN_089cc080();
      iVar4 = FUN_089cc630(uVar3,1);
      *DAT_08aac9d0 = iVar4;
      iVar4 = *(int *)(*DAT_08aac9d0 + 0x10);
      (**(code **)(iVar4 + 0x14))(*DAT_08aac9d0 + (int)*(short *)(iVar4 + 0x10),10);
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    break;
  case 1:
    if ((*DAT_08aac9d0 != 0) && (iVar4 = FUN_089cc778(), iVar4 != 0)) {
      iVar2 = 0;
      iVar4 = FUN_0880d2e0();
      if (iVar4 != 0) {
        iVar2 = FUN_089cc798(*DAT_08aac9d0);
        uVar3 = FUN_0880cc48();
        FUN_0880cd9c(uVar3,1,iVar2);
      }
      uVar3 = FUN_089cc080();
      FUN_089cc5a8(uVar3,1);
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 0x10) = 10;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
    }
    break;
  case 2:
    iVar4 = FUN_089cc058();
    if (iVar4 != 0) {
      uVar3 = FUN_089cc080();
      FUN_089cc460(uVar3,1);
      uVar3 = FUN_089cc080();
      iVar4 = FUN_089cc630(uVar3,1);
      *DAT_08aac9d0 = iVar4;
      iVar4 = *(int *)(*DAT_08aac9d0 + 0x10);
      (**(code **)(iVar4 + 0x14))(*DAT_08aac9d0 + (int)*(short *)(iVar4 + 0x10),6);
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
    break;
  case 3:
    if ((*DAT_08aac9d0 != 0) && (iVar4 = FUN_089cc778(), iVar4 != 0)) {
      iVar2 = 0;
      iVar4 = FUN_0880d2e0();
      if (iVar4 != 0) {
        iVar2 = FUN_089cc798(*DAT_08aac9d0);
        uVar3 = FUN_0880cc48();
        FUN_0880cd9c(uVar3,1,iVar2);
      }
      uVar3 = FUN_089cc080();
      FUN_089cc5a8(uVar3,1);
      if ((iVar2 < 7) || (8 < iVar2)) {
        *(undefined4 *)(param_1 + 0x10) = 8;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 4;
      }
    }
    break;
  case 4:
    iVar4 = FUN_08816aac();
    iVar4 = FUN_089eb134(*(undefined4 *)(iVar4 + 0x2c));
    if (iVar4 != 0) {
      iVar4 = FUN_08816aac();
      iVar2 = FUN_089edb80();
      *(float *)(iVar4 + 4) = *(float *)(iVar2 + 0x10) + 1.0;
      uVar3 = *(undefined4 *)(PTR_PTR_DAT_08aae714 + 8);
      uVar1 = FUN_089cc658();
      FUN_089b4c84(auStack_120,uVar3,uVar1 >> 10);
      uVar3 = FUN_08816aac();
      FUN_08816ba4(uVar3,auStack_120);
      iVar4 = FUN_08816aac();
      *(undefined4 *)(iVar4 + 0x40) = 0;
      uVar3 = FUN_08816aac();
      iVar4 = FUN_08816c28(uVar3,1,0xffffffff);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 5;
        uVar3 = FUN_089edb80();
        FUN_089ede1c(uVar3,4);
        uVar3 = FUN_089edb80();
        FUN_089edf24(uVar3,0x1e);
      }
    }
    break;
  case 5:
    uVar3 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar3);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      uVar3 = FUN_08816aac();
      iVar4 = FUN_08816e58(uVar3);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x10);
      }
      else {
        uVar3 = FUN_08816aac();
        iVar4 = FUN_08816eb0(uVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 6;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 8;
        }
        iVar4 = *(int *)(param_1 + 0x10);
      }
    }
    if (iVar4 != 5) {
      uVar3 = FUN_089edb80();
      FUN_089ede1c(uVar3,4);
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,0x1e);
    }
    break;
  case 6:
    uVar3 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar3);
    if ((iVar4 != 0) && (iVar4 = FUN_089cc058(), iVar4 != 0)) {
      uVar3 = FUN_089cc080();
      FUN_089cc460(uVar3,1);
      uVar3 = FUN_089cc080();
      iVar4 = FUN_089cc630(uVar3,1);
      *DAT_08aac9d0 = iVar4;
      iVar4 = *(int *)(*DAT_08aac9d0 + 0x10);
      (**(code **)(iVar4 + 0x14))(*DAT_08aac9d0 + (int)*(short *)(iVar4 + 0x10),2);
      *(undefined4 *)(param_1 + 0x10) = 7;
    }
    break;
  case 7:
    if ((*DAT_08aac9d0 != 0) && (iVar4 = FUN_089cc778(), iVar4 != 0)) {
      uVar3 = FUN_089cc080();
      FUN_089cc5a8(uVar3,1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    break;
  case 8:
    uVar3 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar3);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar4 = FUN_08816aac();
      iVar4 = FUN_089eb134(*(undefined4 *)(iVar4 + 0x2c));
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x10);
      }
      else {
        iVar4 = FUN_08816aac();
        iVar2 = FUN_089edb80();
        *(float *)(iVar4 + 4) = *(float *)(iVar2 + 0x10) - 1.0;
        uVar3 = FUN_08816aac();
        FUN_08816ba4(uVar3,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0xc));
        iVar4 = FUN_08816aac();
        *(undefined4 *)(iVar4 + 0x40) = 0;
        uVar3 = FUN_08816aac();
        iVar4 = FUN_08816c28(uVar3,1,0xffffffff);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 9;
        }
        iVar4 = *(int *)(param_1 + 0x10);
      }
    }
    if (iVar4 != 8) {
      uVar3 = FUN_089edb80();
      FUN_089ede1c(uVar3,4);
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,0x1e);
    }
    break;
  case 9:
    uVar3 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar3);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      uVar3 = FUN_08816aac();
      iVar4 = FUN_08816e58(uVar3);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x10);
      }
      else {
        uVar3 = FUN_08816aac();
        iVar4 = FUN_08816eb0(uVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 10;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        iVar4 = *(int *)(param_1 + 0x10);
      }
    }
    if (iVar4 != 9) {
      uVar3 = FUN_089edb80();
      FUN_089ede1c(uVar3,4);
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,0x1e);
    }
    break;
  default:
    FUN_089bf7a8(param_1,1);
    return;
  }
  return;
}
