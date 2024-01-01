#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08951f50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = FUN_089c2b10(0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  else {
    uVar2 = FUN_089c2b48(0);
    iVar1 = FUN_089c3818(uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_089c2b48(0);
      iVar3 = FUN_089c32e0(uVar2);
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x2c);
    }
  }
  switch(iVar1) {
  case 0:
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x40) = 0x3e8888f8;
    *(undefined4 *)(iVar1 + 0x44) = 0x3f088851;
    *(undefined4 *)(iVar1 + 0x48) = 0x3e8888f8;
    *(undefined4 *)(iVar1 + 0x4c) = 0x3f4ccccd;
    uVar2 = FUN_089edb80();
    FUN_089ede1c(uVar2,3);
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,0xf);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
    goto LAB_0895209c;
  case 1:
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
LAB_0895209c:
    FUN_089f86e4(uVar2);
    if (iVar3 == -1) {
      uVar2 = FUN_089edb80();
      iVar1 = FUN_089edf70(uVar2);
      if (iVar1 != 0) {
        uVar2 = FUN_089c59f0();
        FUN_089c69a4(uVar2);
        FUN_089bf6e8(0x271a,100);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    break;
  case 2:
    iVar1 = FUN_089bf93c(0x271a,1);
    if (iVar1 == 0) {
      uVar2 = FUN_0880cc48();
      iVar1 = FUN_0880d0ac(uVar2,1);
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0x14;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 10;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 10:
    uVar2 = FUN_089edb80();
    FUN_089ede1c(uVar2,4);
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,0xf);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 0xb:
    uVar2 = FUN_089edb80();
    iVar1 = FUN_089edf70(uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0x14:
    FUN_089c87e4(0);
    FUN_089c879c(0x3f000000,0);
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0x3f800000;
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,0xf);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 0x15:
    uVar2 = FUN_089edb80();
    iVar1 = FUN_089edf70(uVar2);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0x16:
    FUN_089c2d54(0x1a);
    iVar1 = FUN_089c2c54(0x1a);
    if ((iVar1 == 0) && (iVar1 = FUN_089c2d54(0xffffffff), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 99;
    }
    break;
  default:
    if (iVar1 == 99) {
      *(undefined4 *)(param_1 + 0x28) = 6;
      FUN_0890a598(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  FUN_08951434(param_1);
  return;
}

