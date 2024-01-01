#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0886f934(int param_1,int param_2,int param_3)

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_089be228(DAT_08ac520c,(&PTR_DAT_08ab0308)[param_1]);
  if (iVar2 == 0) {
    param_1 = 0x15;
  }
  if (param_2 == 0) {
    if ((param_1 < 1) || (0x14 < param_1)) {
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x6e0,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar2 = 0;
      if (iVar4 != 0) {
        FUN_0885bc3c(iVar4,param_1,0);
        iVar2 = iVar4;
      }
    }
    else {
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x670,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar2 = 0;
      if (iVar4 != 0) {
        FUN_0885ef54(iVar4,param_1);
        iVar2 = iVar4;
      }
    }
    *(undefined *)(iVar2 + 0x158) = 1;
  }
  else if (param_2 == 4) {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x710,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_0885cee0(iVar4,param_1,4);
      iVar2 = iVar4;
    }
  }
  else if ((param_1 < 1) || (0x14 < param_1)) {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x6e0,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_0885bc3c(iVar4,param_1,param_2);
      iVar2 = iVar4;
    }
    FUN_088625e8(iVar2,5);
  }
  else {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x6d0,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_088998f0(iVar4,param_1,param_2);
      iVar2 = iVar4;
    }
  }
  iVar4 = FUN_0889da6c();
  if ((iVar4 != 0) && (iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x70) = 0x3ee66666;
    *(undefined4 *)(iVar2 + 0x74) = 0x3ee66666;
    *(undefined4 *)(iVar2 + 0x78) = 0x3f0ccccd;
    *(undefined4 *)(iVar2 + 0x7c) = 0x3f800000;
    auVar1 = vscl_q(*(undefined (*) [16])(iVar2 + 0x60),0x3f333333);
    *(int *)*(undefined (*) [16])(iVar2 + 0x60) = auVar1._0_4_;
    *(int *)(iVar2 + 100) = auVar1._4_4_;
    *(int *)(iVar2 + 0x68) = auVar1._8_4_;
    *(int *)(iVar2 + 0x6c) = auVar1._12_4_;
    *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
  }
  if (param_3 != 0) {
    FUN_0889d57c(param_3,iVar2 + 0x20);
    FUN_0886003c(*(undefined4 *)(param_3 + 0xc),iVar2);
  }
  uVar3 = FUN_0886f900(iVar2);
  *(undefined4 *)(iVar2 + 0x5a0) = uVar3;
  uVar3 = FUN_088663e4(iVar2);
  FUN_08863128(iVar2,uVar3);
  return iVar2;
}

