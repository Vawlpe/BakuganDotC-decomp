#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896f004(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0896d02c(param_1);
    FUN_0896d2d4(param_1);
    FUN_0896cf78(param_1);
    FUN_0896b738(param_1);
    FUN_0896ba10(param_1);
    FUN_0896bc28(param_1);
    FUN_0896bcc4(param_1);
    FUN_0896be60(param_1);
    FUN_0896be68(param_1);
    FUN_0896bf2c(param_1);
    FUN_0896cd0c(param_1);
    FUN_0896a56c(param_1);
    FUN_0896d7fc(param_1);
    FUN_0896bfe0(param_1);
    FUN_0896c55c(param_1);
    FUN_0896c710(param_1);
    FUN_0896d72c(param_1);
    FUN_0896bb20(param_1,0);
    FUN_0896b81c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    uVar3 = FUN_0896b878(param_1,0);
    uVar3 = uVar3 & 0xff;
    iVar4 = FUN_0896bb90(param_1,0);
    if ((uVar3 + iVar4 & 0xff) == 2) {
      FUN_0896a76c(param_1);
      FUN_0896a8c8(param_1);
      FUN_0896aa28(param_1);
      FUN_0896ab84(param_1);
      FUN_0896c1e4(param_1);
      FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
      FUN_0896d698(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_0896c2ac(param_1);
    FUN_0896dc1c(param_1,*(undefined *)(param_1 + 0x77));
    FUN_0896c6d4(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4),
                 param_1 + *(int *)(param_1 + 0x2b68) * 0x28 + 0x7c);
    cVar2 = FUN_0896c914(param_1);
    if (cVar2 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar4 = FUN_0896c360(param_1);
        if (iVar4 == 1) {
          iVar4 = DONE_NotZero_DAT_08AC5874();
          if (iVar4 == 0) {
            uVar1 = *(undefined *)(param_1 + 0x77);
          }
          else {
            uVar5 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar5,1,0,0);
            uVar1 = *(undefined *)(param_1 + 0x77);
          }
          FUN_0896acb8(param_1,uVar1,1);
        }
      }
      else {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,2,0,0);
        }
        *(undefined *)(param_1 + 0x29bc) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (cVar2 == '\x01') {
      iVar4 = DONE_NotZero_DAT_08AC5874();
      if (iVar4 == 0) {
        uVar1 = *(undefined *)(param_1 + 0x77);
      }
      else {
        uVar5 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar5,0,0,0);
        uVar1 = *(undefined *)(param_1 + 0x77);
      }
      FUN_0896acb8(param_1,uVar1,1);
      FUN_0896ca08(param_1);
      *(undefined *)(param_1 + 0x29bc) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    else {
      iVar4 = DONE_NotZero_DAT_08AC5874();
      if (iVar4 != 0) {
        uVar5 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar5,3,0,0);
      }
    }
    break;
  case 3:
    FUN_0896d698(param_1,0);
    FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),0);
    FUN_0896bb20(param_1,1);
    FUN_0896b81c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    uVar3 = FUN_0896b878(param_1,1);
    uVar3 = uVar3 & 0xff;
    iVar4 = FUN_0896bb90(param_1,1);
    if ((uVar3 + iVar4 & 0xff) == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 8;
    }
    break;
  case 5:
    iVar4 = FUN_0896e490(param_1);
    if (iVar4 == 1) {
      FUN_0896e848(param_1);
    }
    break;
  case 6:
    FUN_0896c2ac(param_1);
    FUN_0896dc1c(param_1,*(undefined *)(param_1 + 0x77));
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4),
                 param_1 + *(int *)(param_1 + 0x2b68) * 0x28 + 0x7c);
    cVar2 = FUN_0896c914(param_1);
    if (cVar2 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar4 = FUN_0896cc04(param_1);
        if (iVar4 == 1) {
          iVar4 = DONE_NotZero_DAT_08AC5874();
          if (iVar4 == 0) {
            uVar1 = *(undefined *)(param_1 + 0x77);
          }
          else {
            uVar5 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar5,1,0,0);
            uVar1 = *(undefined *)(param_1 + 0x77);
          }
          FUN_0896acb8(param_1,uVar1,0);
          *(undefined *)(param_1 + 0x77) = 2;
          FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
          FUN_0896cb28(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 7;
        }
        else {
          iVar4 = FUN_0896c360(param_1);
          if (iVar4 == 1) {
            iVar4 = DONE_NotZero_DAT_08AC5874();
            if (iVar4 == 0) {
              uVar1 = *(undefined *)(param_1 + 0x77);
            }
            else {
              uVar5 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar5,1,0,0);
              uVar1 = *(undefined *)(param_1 + 0x77);
            }
            FUN_0896acb8(param_1,uVar1,1);
            FUN_0896cb28(param_1);
            FUN_0896d24c(param_1,1);
            FUN_0896d610(param_1,1);
          }
          else {
            FUN_0896cb28(param_1);
          }
        }
      }
      else {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 == 0) {
          uVar1 = *(undefined *)(param_1 + 0x77);
        }
        else {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,2,0,0);
          uVar1 = *(undefined *)(param_1 + 0x77);
        }
        FUN_0896acb8(param_1,uVar1,0);
        *(undefined *)(param_1 + 0x77) = 0;
        FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
        FUN_0896cb28(param_1);
        FUN_0896d24c(param_1,0);
        FUN_0896d610(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
    }
    else {
      if (cVar2 == '\x01') {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 == 0) {
          uVar1 = *(undefined *)(param_1 + 0x77);
        }
        else {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,0,0,0);
          uVar1 = *(undefined *)(param_1 + 0x77);
        }
        FUN_0896acb8(param_1,uVar1,1);
        FUN_0896ca08(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      else {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,3,0,0);
        }
      }
      FUN_0896cb28(param_1);
    }
    break;
  case 7:
    FUN_0896e06c(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
      iVar4 = FUN_0896cc94(param_1);
      if (iVar4 == 1) {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,1,0,0);
        }
        FUN_0896d7fc(param_1);
        FUN_0896bfe0(param_1);
        FUN_0896ca08(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      iVar4 = FUN_0896cc04(param_1);
      if (iVar4 == 1) {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 == 0) {
          uVar1 = *(undefined *)(param_1 + 0x77);
        }
        else {
          uVar5 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,1,0,0);
          uVar1 = *(undefined *)(param_1 + 0x77);
        }
        FUN_0896acb8(param_1,uVar1,0);
        *(undefined *)(param_1 + 0x77) = 1;
        FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
        *(undefined4 *)(param_1 + 0x2c) = 6;
      }
    }
    else {
      iVar4 = DONE_NotZero_DAT_08AC5874();
      if (iVar4 != 0) {
        uVar5 = DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar5,2,0,0);
      }
      FUN_0896acb8(param_1,1,0);
      *(undefined *)(param_1 + 0x77) = 0;
      FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
      FUN_0896cb28(param_1);
      FUN_0896d24c(param_1,0);
      FUN_0896d610(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  default:
    FUN_0896b5bc(param_1);
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_0896ea28(param_1);
  return;
}

