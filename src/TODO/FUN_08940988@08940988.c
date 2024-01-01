#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08940988(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_089edb80();
  iVar2 = FUN_089edf70(uVar1);
  if (iVar2 == 0) {
    uVar4 = *(uint *)(param_1 + 0x2c);
  }
  else {
    FUN_089407d4(param_1);
    uVar4 = *(uint *)(param_1 + 0x2c);
  }
  if (0x1c < uVar4) {
    iVar2 = *(int *)(param_1 + 0x28);
LAB_08940c68:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    return;
  }
  iVar2 = (int)(uVar4 * 4) >> 2;
  switch(uVar4) {
  case 0:
    FUN_08940804(0x41f00000,param_1,4);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    iVar2 = _DONE_NotZero_DAT_08AC5874();
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x80);
    }
    else {
      uVar1 = _DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar1,0x2c0000b,0,0);
      iVar2 = *(int *)(param_1 + 0x80);
    }
    FUN_088b2248(0x3f800000,iVar2 + 0xcf);
    iVar2 = 0x78;
    *(undefined4 *)(param_1 + 0x90) = 0x78;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    goto LAB_08940a88;
  case 3:
    iVar2 = *(int *)(param_1 + 0x90);
LAB_08940a88:
    if (iVar2 < 1) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      if (DAT_08ac1b28 == 0) {
        iVar2 = iVar2 + -1;
      }
      else {
        iVar2 = iVar2 + -6;
      }
      *(int *)(param_1 + 0x90) = iVar2;
    }
    break;
  case 4:
    FUN_0894093c(param_1);
    *(undefined4 *)(param_1 + 0x90) = 0x28;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 5:
    if (*(int *)(param_1 + 0x90) < 1) {
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
    }
    else {
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    }
    break;
  case 6:
    FUN_08940964(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 100;
    break;
  default:
    iVar2 = *(int *)(param_1 + 0x28);
    goto LAB_08940c68;
  case 0x14:
    FUN_08940804(0x41f00000,param_1,5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x15:
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0x16:
    FUN_088b2c34(*(int *)(param_1 + 0x80) + 0xcf);
    iVar2 = 0x5a;
    *(undefined4 *)(param_1 + 0x90) = 0x5a;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    goto LAB_08940b84;
  case 0x17:
    iVar2 = *(int *)(param_1 + 0x90);
LAB_08940b84:
    if (iVar2 < 1) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      if (DAT_08ac1b28 == 0) {
        iVar2 = iVar2 + -1;
      }
      else {
        iVar2 = iVar2 + -6;
      }
      *(int *)(param_1 + 0x90) = iVar2;
    }
    break;
  case 0x18:
    FUN_0894093c(param_1);
    *(undefined4 *)(param_1 + 0x90) = 0x32;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x19:
    iVar3 = *(int *)(param_1 + 0x90);
    if (iVar3 < 1) {
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
    }
    else {
      if (DAT_08ac1b28 == 0) {
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = iVar3 + -6;
      }
      *(int *)(param_1 + 0x90) = iVar3;
    }
    break;
  case 0x1a:
    FUN_08940804(0x41f00000,param_1,4);
    *(undefined4 *)(param_1 + 0x90) = 0xf;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x1b:
    if (*(int *)(param_1 + 0x90) == 0) {
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
    }
    else {
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    }
    break;
  case 0x1c:
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  return;
}

