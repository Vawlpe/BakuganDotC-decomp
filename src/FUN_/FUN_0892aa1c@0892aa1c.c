#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892aa1c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0892970c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar3 = FUN_0892978c(param_1,0);
    if (cVar3 == '\x01') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x498) * 4;
    uVar1 = *(undefined2 *)(iVar5 + 0x49c);
    *(undefined2 *)(param_1 + 0x4bc) = *(undefined2 *)(iVar5 + 0x49a);
    *(undefined2 *)(param_1 + 0x4ba) = uVar1;
    uVar2 = *(ushort *)(param_1 + 0x4bc);
    *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) + 1;
    if (uVar2 < 5) {
      if (uVar2 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 7;
      }
      else if (uVar2 == 2) {
        *(undefined *)(param_1 + 0x6f0) = 0;
        uVar4 = 0xc;
        if (*(char *)(param_1 + 0x6e4) != '\0') {
          uVar4 = 3;
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
      }
      else if (uVar2 == 3) {
        FUN_0892a1f8(param_1);
        FUN_08929e98(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
      else if (uVar2 == 4) {
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
      else {
        uVar4 = 5;
        if (*(char *)(param_1 + 0x6e4) != '\0') {
          uVar4 = 3;
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
      }
    }
    break;
  case 3:
    FUN_08929cd0(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    iVar5 = FUN_08929d2c(param_1,1);
    if (iVar5 == 1) {
      uVar4 = 5;
      if (*(short *)(param_1 + 0x4bc) == 2) {
        uVar4 = 0xc;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
    }
    break;
  case 5:
    *(undefined *)(param_1 + 0x6e4) = 1;
    FUN_0892a78c(param_1);
    FUN_08929cd0(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    iVar5 = FUN_08929d2c(param_1,0);
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 7:
    FUN_089298dc(param_1,0,0x12);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 8:
    iVar5 = FUN_08929ae0(param_1,0);
    if (iVar5 == 1) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
      iVar5 = FUN_089c59d4();
      if (iVar5 != 0) {
        uVar4 = FUN_089c59f0();
        FUN_089c6350(uVar4,0,0,0);
      }
      FUN_08929fc4(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 10:
    FUN_089298dc(param_1,1,0x12);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    iVar5 = FUN_08929ae0(param_1,1);
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xc:
    iVar5 = FUN_08929b94(param_1);
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 0xd:
    iVar5 = FUN_08929ff4(param_1);
    iVar6 = 1;
    if (iVar5 == 1) {
      iVar5 = FUN_0892a1b8(param_1);
      if (iVar5 == iVar6) {
        *(undefined *)(param_1 + 0x708) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 0x10;
      }
    }
    break;
  case 0xe:
    FUN_08929cd0(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xf:
    iVar5 = FUN_08929d2c(param_1,1);
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x10;
    }
    break;
  case 0x10:
    FUN_0892970c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x11:
    cVar3 = FUN_0892978c(param_1,1);
    if (cVar3 == '\x01') {
      *(undefined4 *)(param_1 + 0x2c) = 0x12;
    }
    break;
  default:
    FUN_089296bc(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

