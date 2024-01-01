#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895517c(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0895433c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar1 = FUN_0895469c(param_1,0);
    if (cVar1 == '\x01') {
      FUN_08952df0(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    cVar1 = FUN_08954b60(param_1,0);
    if (cVar1 == '\x01') {
      FUN_08952fcc(param_1,1,*(undefined *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 3:
    FUN_089530dc(param_1,*(undefined *)(param_1 + 0x74));
    cVar1 = FUN_08953668(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar4 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar4,2,0,0);
        }
        *(undefined *)(param_1 + 0x5f8) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 5;
        return;
      }
      iVar5 = FUN_089531f8(param_1);
      if (iVar5 == 1) {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar4 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar4,1,0,0);
        }
        FUN_0895348c(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else {
      if (cVar1 == '\x01') {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar4 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar4,0,0,0);
        }
        FUN_089536a8(param_1);
        *(undefined *)(param_1 + 0x5f8) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 7;
        return;
      }
      iVar5 = _DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar4 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar4,3,0,0);
      }
    }
    break;
  case 4:
    iVar5 = FUN_08954e84(param_1);
    if (iVar5 == 1) {
      FUN_08952fcc(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 5:
    FUN_0895433c(param_1,1);
    FUN_08952df0(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    cVar1 = FUN_0895469c(param_1,1);
    cVar2 = FUN_08954b60(param_1,1);
    if ((char)(cVar1 + cVar2) == '\x02') {
      *(undefined4 *)(param_1 + 0x2c) = 0x13;
    }
    break;
  case 7:
    iVar5 = FUN_089536e4(param_1);
    if (iVar5 == 1) {
      uVar4 = 5;
      if (*(char *)(param_1 + 0x74) == '\x03') {
        uVar4 = 8;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
    }
    break;
  case 8:
    FUN_08952fcc(param_1,0,*(undefined *)(param_1 + 0x74));
    FUN_0895371c(param_1,0);
    FUN_089539a0(param_1,0);
    FUN_08953c48(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    cVar1 = FUN_089537f0(param_1,0);
    cVar2 = FUN_08953afc(param_1,0);
    cVar3 = FUN_08953d18(param_1,0);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      *(undefined *)(param_1 + 0xa44) = 0;
      FUN_08953e30(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 10:
    FUN_0895402c(param_1);
    FUN_08954088(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x70),param_1 + 0x4d8);
    cVar1 = FUN_08954300(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar4 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar4,2,0,0);
        }
        FUN_08953e30(param_1);
        FUN_08954058(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
        return;
      }
      iVar5 = FUN_089541f4(param_1);
      if (iVar5 == 1) {
        iVar5 = _DONE_NotZero_DAT_08AC5874();
        if (iVar5 != 0) {
          uVar4 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar4,1,0,0);
        }
        FUN_08953e30(param_1);
      }
    }
    else if (cVar1 == '\x01') {
      iVar5 = _DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar4 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar4,0,0,0);
      }
      FUN_08953e30(param_1);
      *(undefined *)(param_1 + 0x5f8) = 0;
      FUN_0895426c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
    }
    else {
      iVar5 = _DONE_NotZero_DAT_08AC5874();
      if (iVar5 != 0) {
        uVar4 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar4,3,0,0);
      }
    }
    break;
  case 0xb:
    FUN_0895371c(param_1,1);
    FUN_089539a0(param_1,1);
    FUN_08953c48(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xc:
    cVar1 = FUN_089537f0(param_1,1);
    cVar2 = FUN_08953afc(param_1,1);
    cVar3 = FUN_08953d18(param_1,1);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      FUN_08952fcc(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 0xd:
    iVar5 = FUN_089542c8(param_1);
    if (iVar5 == 1) {
      FUN_08954058(param_1);
      FUN_0895371c(param_1,1);
      FUN_089539a0(param_1,1);
      FUN_08953c48(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xe:
    cVar1 = FUN_089537f0(param_1,1);
    cVar2 = FUN_08953afc(param_1,1);
    cVar3 = FUN_08953d18(param_1,1);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 0xf:
    iVar5 = FUN_089a59fc();
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  default:
    FUN_08952ae8(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

