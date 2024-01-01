#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08930fc4(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0892c130(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),param_1 + 0x1b84);
    FUN_0892c25c(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x4c),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x50),param_1 + 0x1b94);
    FUN_0892d15c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar6 = FUN_0892d404(param_1,0);
    if (cVar6 == '\x01') {
      FUN_0892e9f0(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_0892e23c(param_1,1,*(undefined *)(param_1 + 0x74));
    FUN_0892eec4(param_1,1,0);
    FUN_0892d6ac(param_1,0);
    FUN_0892d9e0(param_1,0);
    FUN_0892dd68(param_1,0);
    FUN_0892fa38(param_1,0);
    FUN_0892fe5c(param_1,0);
    FUN_0892ce68(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x1cf8) + 0x6c) = 0x3f800000;
    FUN_0892f5c0(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 3:
    cVar6 = FUN_0892d8c4(param_1,0);
    cVar1 = FUN_0892dc4c(param_1,0);
    cVar2 = FUN_0892dfb0(param_1,0);
    cVar3 = FUN_0892e0cc(param_1,0);
    cVar4 = FUN_0892e44c(param_1,0);
    cVar5 = FUN_0892f838(param_1,0);
    if ((char)(cVar6 + cVar1 + cVar2 + cVar3 + cVar4 + cVar5) == '\x06') {
      FUN_0892e650(param_1,1);
      FUN_08930520(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 4:
    FUN_0892eba4(param_1);
    FUN_0893092c(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x210),param_1 + 0x1518);
    cVar6 = FUN_0892f3a4(param_1);
    if (cVar6 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar8 = FUN_0892ebd0(param_1);
        if (iVar8 == 1) {
          iVar8 = _DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar7 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar7,1,0,0);
          }
          FUN_08930520(param_1);
          FUN_0892f20c(param_1);
          FUN_0892f900(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
      }
      else {
        iVar8 = _DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar7 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar7,2,0,0);
        }
        *(undefined *)(param_1 + 0x1b7c) = 1;
        FUN_08930520(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else if (cVar6 == '\x01') {
      iVar8 = _DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,0,0,0);
      }
      FUN_0892f4d0(param_1);
      FUN_08930520(param_1);
      FUN_0892f408(param_1);
      *(undefined *)(param_1 + 0x1b7c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    else {
      iVar8 = _DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar7 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar7,3,0,0);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x1ce8) != '\0') {
      FUN_0892ce68(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x1cf8) + 0x6c) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x2c) = 4;
    break;
  case 6:
    FUN_0892e650(param_1,0);
    FUN_0892f2a0(param_1,0);
    FUN_0892eb74(param_1);
    FUN_0892eec4(param_1,1,1);
    FUN_0892d6ac(param_1,1);
    FUN_0892d9e0(param_1,1);
    FUN_0892dd68(param_1,1);
    FUN_0892fa38(param_1,1);
    FUN_0892fe5c(param_1,1);
    FUN_0892f5c0(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    cVar6 = FUN_0892d8c4(param_1,1);
    cVar1 = FUN_0892dc4c(param_1,1);
    cVar2 = FUN_0892dfb0(param_1,1);
    cVar3 = FUN_0892e0cc(param_1,1);
    cVar4 = FUN_0892e44c(param_1,1);
    cVar5 = FUN_0892f838(param_1,1);
    if ((char)(cVar6 + cVar1 + cVar2 + cVar3 + cVar4 + cVar5) == '\x06') {
      FUN_0892d124(param_1);
      FUN_0892eb3c(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 8:
    FUN_0892d15c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    cVar6 = FUN_0892d404(param_1,1);
    if (cVar6 == '\x01') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 10:
    iVar8 = FUN_089edb80();
    *(undefined4 *)(iVar8 + 0x30) = 0;
    *(undefined4 *)(iVar8 + 0x34) = 0;
    *(undefined4 *)(iVar8 + 0x38) = 0;
    *(undefined4 *)(iVar8 + 0x3c) = 0;
    iVar8 = FUN_089edb80();
    *(undefined4 *)(iVar8 + 0x40) = 0;
    *(undefined4 *)(iVar8 + 0x44) = 0;
    *(undefined4 *)(iVar8 + 0x48) = 0;
    *(undefined4 *)(iVar8 + 0x4c) = 0x3f800000;
    uVar7 = FUN_089edb80();
    FUN_089edf24(uVar7,0x10);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    uVar7 = FUN_089edb80();
    iVar8 = FUN_089edf70(uVar7);
    if (iVar8 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0xe;
    }
    break;
  case 0xc:
    iVar8 = FUN_0892f480(param_1);
    if (iVar8 == 1) {
      *(undefined *)(param_1 + 0x1ce9) = 0x10;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x1ce9) == '\0') {
      *(undefined4 *)(param_1 + 0x2c) = 6;
    }
    else {
      *(char *)(param_1 + 0x1ce9) = *(char *)(param_1 + 0x1ce9) + -1;
    }
    break;
  default:
    FUN_0892ce2c(param_1);
    *(undefined4 *)(param_1 + 0x28) = 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_0892c180(param_1 + 0x1b84);
  FUN_0892c2d8(param_1 + 0x1b94);
  FUN_0892e2bc(param_1);
  FUN_08930d7c(param_1);
  FUN_0892e89c(param_1);
  return;
}

