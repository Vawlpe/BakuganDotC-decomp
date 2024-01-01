#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b61d4(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 500;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined *)(param_1 + 0x75) = 0;
  uVar4 = FUN_088243d8(DAT_08b00b98,param_2 + 0x4d,(undefined4 *)(param_1 + 0x20));
  uVar7 = *(uint *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  if (uVar7 < 6) {
    if (uVar7 == 1) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar5 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      iVar6 = 0;
      if (iVar5 != 0) {
        FUN_089de2e4(iVar5,"btl_03_power_up.gmo",0);
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 0x4c) = iVar6;
    }
    else if (uVar7 == 2) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar5 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      iVar6 = 0;
      if (iVar5 != 0) {
        FUN_089de2e4(iVar5,"btl_04_defense_up.gmo",0);
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 0x4c) = iVar6;
    }
    else if (uVar7 == 3) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar5 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      iVar6 = 0;
      if (iVar5 != 0) {
        FUN_089de2e4(iVar5,"btl_02_heal.gmo",0);
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 0x4c) = iVar6;
    }
    else if ((uVar7 != 4) && (uVar7 != 5)) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar5 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      iVar6 = 0;
      if (iVar5 != 0) {
        FUN_089de2e4(iVar5,"btl_01_gatecard.gmo",0);
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 0x4c) = iVar6;
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0889d514(*(undefined4 *)(param_1 + 0x4c));
    iVar6 = FUN_0889da6c();
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x4c);
      auVar1 = vscl_q(*(undefined (*) [16])(iVar6 + 0x60),0x3f333333);
      *(int *)*(undefined (*) [16])(iVar6 + 0x60) = auVar1._0_4_;
      *(int *)(iVar6 + 100) = auVar1._4_4_;
      *(int *)(iVar6 + 0x68) = auVar1._8_4_;
      *(int *)(iVar6 + 0x6c) = auVar1._12_4_;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x6c) = 0x3f800000;
      iVar6 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x4c);
    }
    *(undefined *)(iVar6 + 0xbc) = 1;
    iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + 0x130);
    *(undefined4 *)(iVar6 + 0xa8) = 0x41200000;
    *(undefined4 *)(iVar6 + 0x94) = 0x41200000;
    *(undefined4 *)(iVar6 + 0x80) = 0x41200000;
    iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + 0x130);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar6 + 0xb4) = uVar4;
    *(undefined4 *)(iVar6 + 0xb8) = uVar2;
    *(undefined4 *)(iVar6 + 0xbc) = uVar3;
    iVar6 = FUN_089e01bc(*(undefined4 *)(param_1 + 0x4c),0);
    *(byte *)(iVar6 + 3) = *(byte *)(iVar6 + 3) & 0x1f | 0x40;
    iVar6 = FUN_089e01bc(*(undefined4 *)(param_1 + 0x4c),0);
    *(byte *)(iVar6 + 4) = *(byte *)(iVar6 + 4) & 0xfc | 2;
    FUN_089d8984(*(undefined4 *)(param_1 + 0x4c),DAT_08b00b94);
  }
  return;
}

