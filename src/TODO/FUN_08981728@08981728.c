#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08981728(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined uVar10;
  undefined8 uVar11;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0897a25c(param_1,0);
    FUN_0897eb04(param_1,0);
    FUN_0897aa74(param_1,0);
    FUN_0897af28(param_1,0);
    FUN_0897f574(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    uVar4 = FUN_0897a3c4(param_1,0);
    iVar8 = FUN_0897a750(param_1,0);
    iVar5 = FUN_0897aca4(param_1,0);
    iVar6 = FUN_0897b0e8(param_1,0);
    uVar4 = (((uVar4 & 0xff) + iVar8 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff;
    iVar8 = FUN_0897f944(param_1,0);
    if ((uVar4 + iVar8 & 0xff) == 5) {
      FUN_0897fe88(param_1);
      FUN_0897b788(param_1,1);
      FUN_0897b8b0(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 2:
    FUN_0897b5e0(param_1);
    FUN_0897b60c(param_1);
    FUN_0897b638(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118),param_1 + 0xb64);
    cVar1 = FUN_0897c57c(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar8 = FUN_0897bc44(param_1);
        if (iVar8 == 1) {
          iVar8 = _DONE_NotZero_DAT_08AC5874();
          if (iVar8 != 0) {
            uVar9 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar9,1,0,0);
          }
          FUN_0897fe88(param_1);
        }
        else {
          uVar11 = FUN_0897bee8(param_1);
          if ((int)uVar11 == (int)((ulonglong)uVar11 >> 0x20)) {
            iVar8 = _DONE_NotZero_DAT_08AC5874();
            if (iVar8 != 0) {
              uVar9 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar9,1,0,0);
            }
            FUN_0897fe88(param_1);
            FUN_0897b5b0(param_1);
            FUN_0897b788(param_1,0);
            FUN_0897b8b0(param_1,0);
            *(undefined4 *)(param_1 + 0x2c) = 6;
          }
        }
      }
      else {
        iVar8 = _DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar9 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar9,2,0,0);
        }
        *(undefined *)(param_1 + 0xee6) = 1;
        FUN_0897b5b0(param_1);
        FUN_0897b788(param_1,0);
        FUN_0897b8b0(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (cVar1 == '\x01') {
      iVar8 = _DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = _DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar9,0,0,0);
      }
      FUN_0897b788(param_1,0);
      FUN_0897b8b0(param_1,0);
      FUN_0897fe88(param_1);
      FUN_0897b5b0(param_1);
      FUN_0897b788(param_1,0);
      FUN_0897b8b0(param_1,0);
      FUN_0897c6e8(param_1);
      *(undefined *)(param_1 + 0xee6) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    else {
      iVar8 = _DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar9,3,0,0);
      }
    }
    break;
  case 3:
    FUN_0897a25c(param_1,1);
    FUN_0897eb04(param_1,1);
    FUN_0897aa74(param_1,1);
    FUN_0897af28(param_1,1);
    FUN_0897f574(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    uVar4 = FUN_0897a3c4(param_1,1);
    iVar8 = FUN_0897a750(param_1,1);
    iVar5 = FUN_0897aca4(param_1,1);
    iVar6 = FUN_0897b0e8(param_1,1);
    uVar4 = (((uVar4 & 0xff) + iVar8 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff;
    iVar8 = FUN_0897f944(param_1,1);
    if ((uVar4 + iVar8 & 0xff) == 5) {
      *(undefined4 *)(param_1 + 0x2c) = 0x14;
    }
    break;
  case 5:
    iVar8 = FUN_0897c724(param_1);
    if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    break;
  case 6:
    FUN_0897eb04(param_1,1);
    FUN_0897f574(param_1,1);
    FUN_0897c25c(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    FUN_0897c2ac(param_1);
    uVar4 = FUN_0897a750(param_1,1);
    uVar4 = uVar4 & 0xff;
    iVar8 = FUN_0897f944(param_1,1);
    if ((uVar4 + iVar8 & 0xff) == 2) {
      *(undefined *)(param_1 + 0xee1) = *(undefined *)(param_1 + 0xee2);
      FUN_0897a948(param_1);
      FUN_0897c1a0(param_1);
      FUN_0897ea30(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 8:
    FUN_0897c2ac(param_1);
    FUN_0897eb04(param_1,0);
    FUN_0897f574(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    uVar4 = FUN_0897c2ac(param_1);
    iVar8 = FUN_0897a750(param_1,0);
    uVar4 = (uVar4 & 0xff) + iVar8 & 0xff;
    iVar8 = FUN_0897f944(param_1,0);
    if ((uVar4 + iVar8 & 0xff) == 3) {
      *(undefined *)(param_1 + 0xee3) = 0;
      FUN_0897fe88(param_1);
      FUN_0897b788(param_1,1);
      FUN_0897b8b0(param_1,1);
      FUN_0897ae14(0x3f800000,param_1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 10:
    FUN_0897c75c(param_1);
    FUN_08980398(param_1);
    FUN_08980688(param_1,0);
    FUN_0897c95c(param_1,0,0);
    FUN_0897ca78(param_1,0);
    FUN_0897cdac(param_1,0);
    FUN_0897d1e8(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    uVar4 = FUN_0898094c(param_1,0);
    uVar4 = uVar4 & 0xff;
    iVar8 = FUN_0897c9d4(param_1,0,0);
    iVar5 = FUN_0897cc90(param_1,0);
    iVar6 = FUN_0897d0cc(param_1,0);
    iVar7 = FUN_0897d218(param_1,0);
    if (((((uVar4 + iVar8 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff) + iVar7 & 0xff) == 5) {
      FUN_0897b8b0(param_1,1);
      FUN_0897e9e8(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xc:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
        iVar8 = _DONE_NotZero_DAT_08AC5874();
        if (iVar8 != 0) {
          uVar9 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar9,2,0,0);
        }
        FUN_0897d2c8(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
    }
    else {
      iVar8 = _DONE_NotZero_DAT_08AC5874();
      if (iVar8 != 0) {
        uVar9 = _DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar9,0,0,0);
      }
      FUN_0897b8b0(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0xf;
    }
    break;
  case 0xd:
    FUN_08980688(param_1,1);
    FUN_0897c95c(param_1,1,0);
    FUN_0897ca78(param_1,1);
    FUN_0897cdac(param_1,1);
    FUN_0897d1e8(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xe:
    uVar4 = FUN_0898094c(param_1,1);
    uVar4 = uVar4 & 0xff;
    iVar8 = FUN_0897c9d4(param_1,1,0);
    iVar5 = FUN_0897cc90(param_1,1);
    iVar6 = FUN_0897d0cc(param_1,1);
    iVar7 = FUN_0897d218(param_1,1);
    if (((((uVar4 + iVar8 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff) + iVar7 & 0xff) == 5) {
      FUN_0897c814(param_1);
      FUN_0897fe88(param_1);
      FUN_0897b788(param_1,1);
      FUN_0897b8b0(param_1,1);
      FUN_0897e9e8(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xf:
    FUN_0897de60(param_1);
    FUN_0897d79c(param_1,0);
    FUN_0897c95c(param_1,0,1);
    FUN_08980ebc(param_1,0);
    FUN_0897def8(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x10:
    cVar1 = FUN_0897c9d4(param_1,0,1);
    cVar2 = FUN_089811b8(param_1,0);
    cVar3 = FUN_0897e1d8(param_1,0);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      FUN_0897e2f4(param_1,1);
      iVar8 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
      if (iVar8 == 2) {
        uVar10 = *(undefined *)(param_1 + 0x1318);
      }
      else {
        iVar8 = _DONE_NotZero_DAT_08AC5874();
        if (iVar8 == 0) {
          uVar10 = *(undefined *)(param_1 + 0x1318);
        }
        else {
          uVar9 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar9,0xb,0,0);
          uVar10 = *(undefined *)(param_1 + 0x1318);
        }
      }
      FUN_0897dba8(param_1,uVar10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0x11:
    FUN_0897dd74(param_1,*(undefined *)(param_1 + 0x1318));
    FUN_0897e728(param_1);
    FUN_0897e608(param_1);
    FUN_0897e774(param_1);
    FUN_0897e930(param_1);
    FUN_0897e834(param_1);
    FUN_0897e4c0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
      iVar8 = _DONE_NotZero_DAT_08AC5874();
      if (iVar8 == 0) {
        uVar10 = *(undefined *)(param_1 + 0x1318);
      }
      else {
        uVar9 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar9,2,0,0);
        uVar10 = *(undefined *)(param_1 + 0x1318);
      }
      FUN_0897ddd4(param_1,uVar10);
      *(undefined4 *)(param_1 + 0x2c) = 0x12;
    }
    break;
  case 0x12:
    FUN_0897d79c(param_1,1);
    FUN_0897c95c(param_1,1,1);
    FUN_08980ebc(param_1,1);
    FUN_0897def8(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x13:
    cVar1 = FUN_0897c9d4(param_1,1,1);
    cVar2 = FUN_089811b8(param_1,1);
    cVar3 = FUN_0897e1d8(param_1,1);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      FUN_0897e2f4(param_1,0);
      FUN_0897b8b0(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    break;
  default:
    FUN_0897a240(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  FUN_0897b7c8(param_1);
  FUN_0897b8f0(param_1);
  return;
}

