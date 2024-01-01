#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08991618(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_0898c564(param_1,0);
    FUN_0898fbb4(param_1,0);
    FUN_0898cc14(param_1,0);
    FUN_0898d064(param_1,0);
    FUN_0898d2ec(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    FUN_0898c6cc(param_1,0);
    FUN_0898c8f0(param_1,0);
    FUN_0898ce44(param_1,0);
    FUN_0898d224(param_1,0);
    uVar9 = FUN_0898d470(param_1,0);
    if (((int)((ulonglong)uVar9 >> 0x20) + (int)uVar9 & 0xffU) == 5) {
      FUN_0898d8bc(param_1,1);
      FUN_0898d9e4(param_1,1);
      FUN_08990154(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_0898dc10(param_1);
    FUN_0898dc3c(param_1);
    FUN_0898dc68(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x110),param_1 + 0xb14);
    cVar1 = FUN_0898e3ac(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
        iVar7 = FUN_0898ddb8(param_1);
        if (iVar7 == 1) {
          iVar7 = _DONE_NotZero_DAT_08AC5874();
          if (iVar7 != 0) {
            uVar8 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar8,1,0,0);
          }
          FUN_08990154(param_1);
        }
        else {
          uVar9 = FUN_0898df10(param_1);
          if ((int)uVar9 == (int)((ulonglong)uVar9 >> 0x20)) {
            iVar7 = _DONE_NotZero_DAT_08AC5874();
            if (iVar7 != 0) {
              uVar8 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar8,1,0,0);
            }
            FUN_08990154(param_1);
            FUN_0898dbe0(param_1);
            FUN_0898d8bc(param_1,0);
            FUN_0898d9e4(param_1,0);
            *(undefined4 *)(param_1 + 0x2c) = 6;
          }
        }
      }
      else {
        iVar7 = _DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar8 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,2,0,0);
        }
        *(undefined *)(param_1 + 0xe7e) = 1;
        FUN_0898dbe0(param_1);
        FUN_0898d8bc(param_1,0);
        FUN_0898d9e4(param_1,0);
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (cVar1 == '\x01') {
      iVar7 = _DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = _DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar8,0,0,0);
      }
      FUN_0898d8bc(param_1,0);
      FUN_0898d9e4(param_1,0);
      FUN_08990154(param_1);
      FUN_0898dbe0(param_1);
      FUN_0898d8bc(param_1,0);
      FUN_0898d9e4(param_1,0);
      FUN_0898e3fc(param_1);
      *(undefined *)(param_1 + 0xe7e) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    else {
      iVar7 = _DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar8,3,0,0);
      }
    }
    break;
  case 3:
    FUN_0898c564(param_1,1);
    FUN_0898fbb4(param_1,1);
    FUN_0898cc14(param_1,1);
    FUN_0898d064(param_1,1);
    FUN_0898d2ec(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    FUN_0898c6cc(param_1,1);
    FUN_0898c8f0(param_1,1);
    FUN_0898ce44(param_1,1);
    FUN_0898d224(param_1,1);
    uVar9 = FUN_0898d470(param_1,1);
    if (((int)((ulonglong)uVar9 >> 0x20) + (int)uVar9 & 0xffU) == 5) {
      *(undefined4 *)(param_1 + 0x2c) = 0x14;
    }
    break;
  case 5:
    iVar7 = FUN_0898e438(param_1);
    if (iVar7 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    break;
  case 6:
    FUN_0898fbb4(param_1,1);
    FUN_0898d2ec(param_1,1);
    FUN_0898e0d4(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 7:
    FUN_0898e124(param_1);
    FUN_0898c8f0(param_1,1);
    uVar9 = FUN_0898d470(param_1,1);
    if (((int)((ulonglong)uVar9 >> 0x20) + (int)uVar9 & 0xffU) == 2) {
      *(undefined *)(param_1 + 0xe79) = *(undefined *)(param_1 + 0xe7a);
      FUN_0898cae8(param_1);
      FUN_0898e070(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 8:
    FUN_0898e124(param_1);
    FUN_0898fbb4(param_1,0);
    FUN_0898d2ec(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    FUN_0898e124(param_1);
    FUN_0898c8f0(param_1,0);
    uVar9 = FUN_0898d470(param_1,0);
    if (((int)((ulonglong)uVar9 >> 0x20) + (int)uVar9 & 0xffU) == 3) {
      *(undefined *)(param_1 + 0xe7b) = 0;
      FUN_08990154(param_1);
      FUN_0898d8bc(param_1,1);
      FUN_0898d9e4(param_1,1);
      FUN_0898cfb4(0x3f800000,param_1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 10:
    FUN_0898e470(param_1);
    FUN_0898e49c(param_1);
    FUN_0899056c(param_1,0);
    FUN_0898e688(param_1,0);
    FUN_0898ee88(param_1,0,0);
    FUN_0898e838(param_1,0);
    FUN_0898eb6c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xb:
    uVar4 = FUN_08990818(param_1,0);
    iVar7 = FUN_0898e6b8(param_1,0);
    uVar4 = (uVar4 & 0xff) + iVar7 & 0xff;
    iVar7 = FUN_0898ef00(param_1,0,0);
    iVar5 = FUN_0898ea50(param_1,0);
    iVar6 = FUN_0898ed6c(param_1,0);
    if ((((uVar4 + iVar7 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff) == 5) {
      FUN_0898d9e4(param_1,1);
      FUN_0898fb6c(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0xc:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
        iVar7 = _DONE_NotZero_DAT_08AC5874();
        if (iVar7 != 0) {
          uVar8 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar8,2,0,0);
        }
        FUN_0898e768(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
    }
    else {
      iVar7 = _DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = _DONE_Get_DAT_08AC5874(param_1);
        FUN_089c6350(uVar8,0,0,0);
      }
      FUN_0898d9e4(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0xf;
    }
    break;
  case 0xd:
    FUN_0899056c(param_1,1);
    FUN_0898e688(param_1,1);
    FUN_0898ee88(param_1,1,0);
    FUN_0898e838(param_1,1);
    FUN_0898eb6c(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0xe:
    uVar4 = FUN_08990818(param_1,1);
    iVar7 = FUN_0898e6b8(param_1,1);
    uVar4 = (uVar4 & 0xff) + iVar7 & 0xff;
    iVar7 = FUN_0898ef00(param_1,1,0);
    iVar5 = FUN_0898ea50(param_1,1);
    iVar6 = FUN_0898ed6c(param_1,1);
    if ((((uVar4 + iVar7 & 0xff) + iVar5 & 0xff) + iVar6 & 0xff) == 5) {
      FUN_0898e48c(param_1);
      FUN_08990154(param_1);
      FUN_0898d8bc(param_1,1);
      FUN_0898d9e4(param_1,1);
      FUN_0898fb6c(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
    break;
  case 0xf:
    FUN_0898eff8(param_1,0);
    FUN_0898ee88(param_1,0,1);
    FUN_08990d88(param_1,0);
    FUN_0898f228(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x10:
    cVar1 = FUN_0898ef00(param_1,0,1);
    cVar2 = FUN_089910a8(param_1,0);
    cVar3 = FUN_0898f468(param_1,0);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      FUN_0898f584(param_1,1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 0x11:
    FUN_0898f750(param_1);
    FUN_0898f79c(param_1);
    FUN_0898f8ac(param_1);
    FUN_0898fab4(param_1);
    FUN_0898f95c(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) != 0) {
      iVar7 = _DONE_NotZero_DAT_08AC5874();
      if (iVar7 != 0) {
        uVar8 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar8,2,0,0);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0x12;
    }
    break;
  case 0x12:
    FUN_0898eff8(param_1,1);
    FUN_0898ee88(param_1,1,1);
    FUN_08990d88(param_1,1);
    FUN_0898f228(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 0x13:
    cVar1 = FUN_0898ef00(param_1,1,1);
    cVar2 = FUN_089910a8(param_1,1);
    cVar3 = FUN_0898f468(param_1,1);
    if ((char)(cVar1 + cVar2 + cVar3) == '\x03') {
      FUN_0898f584(param_1,0);
      FUN_0898d9e4(param_1,1);
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    break;
  default:
    FUN_0898c214(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  FUN_0898d8fc(param_1);
  FUN_0898da24(param_1);
  return;
}

