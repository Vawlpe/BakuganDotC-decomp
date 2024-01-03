#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893ff2c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0893dd34(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar2 = FUN_0893e28c(param_1,0);
    if (cVar2 == '\x01') {
      FUN_0893ecac(param_1,1);
      bVar1 = *(byte *)(param_1 + 0x7e5);
      if (bVar1 == 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else if (bVar1 < 2) {
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
      }
      else if (bVar1 < 3) {
        *(undefined4 *)(param_1 + 0x2c) = 9;
      }
    }
    break;
  case 2:
    FUN_0893edc0(param_1);
    FUN_0893e7e8(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 3:
    FUN_0893e6d4(param_1);
    FUN_0893e4ac(param_1);
    bVar1 = FUN_0893eb28(param_1);
    if (bVar1 == 0) {
      iVar4 = FUN_0893e9d0(param_1);
      if (iVar4 == 0) {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
          iVar4 = DONE_NotZero_DAT_08AC5874();
          if (iVar4 == 0) {
            cVar2 = *(char *)(param_1 + 0x7fc);
          }
          else {
            uVar3 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar3,2,0,0);
            cVar2 = *(char *)(param_1 + 0x7fc);
          }
          if (cVar2 == '\0') {
            FUN_0893e47c(param_1);
            *(undefined *)(param_1 + 0x7dc) = 1;
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          }
          else {
            FUN_0893ec48(param_1);
            FUN_0893e7e8(param_1);
          }
        }
      }
      else {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,0x2c0001c,0,0);
        }
        FUN_0893edc0(param_1);
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,0x2c0001e,0,0);
        }
        FUN_0893edc0(param_1);
        FUN_0893eb90(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else if ((bVar1 < 3) && (iVar4 = DONE_NotZero_DAT_08AC5874(), iVar4 != 0)) {
      uVar3 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,3,0,0);
    }
    break;
  case 4:
    FUN_0893dd34(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    cVar2 = FUN_0893e28c(param_1,1);
    if (cVar2 == '\x01') {
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    break;
  case 6:
    iVar4 = FUN_0893ebf4(param_1);
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0x74) == 0) {
        FUN_0893ec2c(param_1);
        FUN_0893edc0(param_1);
        FUN_0893e7e8(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
      else if (*(char *)(param_1 + *(char *)(param_1 + 0x74) + 0x75) == '\0') {
        FUN_0893ec48(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 7;
      }
    }
    break;
  case 7:
    iVar4 = FUN_0893ec68(param_1);
    *(bool *)(param_1 + 0x7dc) = iVar4 != 1;
    FUN_0893e458(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 8:
    iVar4 = FUN_0893f118(param_1);
    if (iVar4 == 1) {
      FUN_0893e47c(param_1);
      FUN_0893ecac(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 9:
    FUN_0893e458(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 10:
    iVar4 = FUN_0893f5ac(param_1);
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xb:
    FUN_0893e458(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xc:
    iVar4 = FUN_0893fa24(param_1);
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  default:
    FUN_0893dbfc(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

