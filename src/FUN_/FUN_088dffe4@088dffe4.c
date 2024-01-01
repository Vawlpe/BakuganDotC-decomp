#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088dffe4(int param_1,int param_2,int param_3)

{
  undefined auVar1 [12];
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_V7D;
  
  iVar5 = FUN_089be054(DAT_08ac520c,(&PTR_DAT_08ab0308)[param_1]);
  if (iVar5 == 0) {
    param_1 = 0x2f;
  }
  switch(param_1) {
  case 0x2f:
    FUN_089d8634();
    uVar6 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x550,0,0);
    FUN_089d816c(uVar6);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar7 != 0) {
      FUN_088e0d94(iVar7,param_1);
      iVar5 = iVar7;
    }
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  default:
    FUN_089d8634();
    uVar6 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x3a0,0,0);
    FUN_089d816c(uVar6);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar7 != 0) {
      FUN_088dc684(iVar7,param_1);
      iVar5 = iVar7;
    }
    break;
  case 0x4e:
  case 0x50:
    FUN_089d8634();
    uVar6 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x460,0,0);
    FUN_089d816c(uVar6);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar7 != 0) {
      FUN_088e8cb4(iVar7,param_1);
      iVar5 = iVar7;
    }
    break;
  case 0x4f:
    FUN_089d8634();
    uVar6 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x470,0,0);
    FUN_089d816c(uVar6);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar7 != 0) {
      FUN_088e54e4(iVar7,param_1);
      iVar5 = iVar7;
    }
    break;
  case 0x51:
  case 0x52:
    FUN_089d8634();
    uVar6 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x440,0,0);
    FUN_089d816c(uVar6);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar7 != 0) {
      FUN_088e89c4(iVar7,param_1);
      iVar5 = iVar7;
    }
    break;
  case 0x53:
    FUN_089d8634();
    uVar6 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x490,0,0);
    FUN_089d816c(uVar6);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar7 != 0) {
      FUN_088e8170(iVar7,param_1);
      iVar5 = iVar7;
    }
  }
  if (param_2 == 0) {
    *(undefined *)(iVar5 + 0x14c) = 1;
    FUN_088defc8(iVar5,1);
  }
  else {
    *(uint *)(*(int *)(iVar5 + 0x170) + 0x130) = *(uint *)(*(int *)(iVar5 + 0x170) + 0x130) | 0x40;
    FUN_088defc8(iVar5,5);
  }
  bVar2 = 0;
  if ((0x50 < param_1) && (param_1 < 0x54)) {
    bVar2 = 1;
    FUN_088d40c0(iVar5);
  }
  if (param_3 != 0) {
    FUN_088d4128(param_3,iVar5 + 0x20);
    FUN_088deadc(*(undefined4 *)(param_3 + 0xc),iVar5);
  }
  if (iVar5 != 0) {
    auVar1 = vscl_t(*(undefined (*) [12])(iVar5 + 0x40),0x3dcccccd);
    *(int *)*(undefined (*) [12])(iVar5 + 0x40) = auVar1._0_4_;
    *(int *)(iVar5 + 0x44) = auVar1._4_4_;
    *(int *)(iVar5 + 0x48) = auVar1._8_4_;
    *(undefined4 *)(iVar5 + 0x4c) = in_V7D;
  }
  if (!(bool)(bVar2 | param_1 == 0x4f)) {
    iVar7 = FUN_0889daa8();
    iVar8 = FUN_0889da6c();
    if (iVar8 == 0) {
      if ((0x2f < param_1) && (iVar7 == 0)) {
        FUN_089e0928(iVar5,0);
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x70) = 0x3ee66666;
      *(undefined4 *)(iVar5 + 0x74) = 0x3ee66666;
      *(undefined4 *)(iVar5 + 0x78) = 0x3f0ccccd;
      *(undefined4 *)(iVar5 + 0x7c) = 0x3f800000;
      uVar4 = DAT_08b0019c;
      uVar3 = DAT_08b00198;
      uVar6 = DAT_08b00194;
      if (0x2f < param_1) {
        *(undefined4 *)(iVar5 + 0x60) = DAT_08b00190;
        *(undefined4 *)(iVar5 + 100) = uVar6;
        *(undefined4 *)(iVar5 + 0x68) = uVar3;
        *(undefined4 *)(iVar5 + 0x6c) = uVar4;
        if (iVar7 == 0) {
          FUN_089e0928(iVar5,2);
        }
      }
      else {
        *(undefined4 *)(iVar5 + 0x6c) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x60) = 0x3ecccccd;
        *(undefined4 *)(iVar5 + 100) = 0x3ecccccd;
        *(undefined4 *)(iVar5 + 0x68) = 0x3ecccccd;
      }
    }
  }
  return iVar5;
}

