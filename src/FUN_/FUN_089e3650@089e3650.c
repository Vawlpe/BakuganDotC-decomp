#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e3650(void)

{
  undefined auVar1 [64];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5c8c != 0) {
    (**(code **)(*(int *)(DAT_08ac5c8c + 0x20) + 0xc))
              (DAT_08ac5c8c + *(short *)(*(int *)(DAT_08ac5c8c + 0x20) + 8),3);
    DAT_08ac5c8c = 0;
  }
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x2a0,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089e2910(iVar3);
    iVar4 = iVar3;
  }
  auVar1 = vmidt_q();
  DAT_08ac5c8c = iVar4;
  *(int *)(iVar4 + 0x90) = auVar1._0_4_;
  *(int *)(iVar4 + 0x94) = auVar1._16_4_;
  *(int *)(iVar4 + 0x98) = auVar1._32_4_;
  *(int *)(iVar4 + 0x9c) = auVar1._48_4_;
  *(int *)(iVar4 + 0xa0) = auVar1._4_4_;
  *(int *)(iVar4 + 0xa4) = auVar1._20_4_;
  *(int *)(iVar4 + 0xa8) = auVar1._36_4_;
  *(int *)(iVar4 + 0xac) = auVar1._52_4_;
  *(int *)(iVar4 + 0xb0) = auVar1._8_4_;
  *(int *)(iVar4 + 0xb4) = auVar1._24_4_;
  *(int *)(iVar4 + 0xb8) = auVar1._40_4_;
  *(int *)(iVar4 + 0xbc) = auVar1._56_4_;
  *(int *)(iVar4 + 0xc0) = auVar1._12_4_;
  *(int *)(iVar4 + 0xc4) = auVar1._28_4_;
  *(int *)(iVar4 + 200) = auVar1._44_4_;
  *(int *)(iVar4 + 0xcc) = auVar1._60_4_;
  *(undefined4 *)(DAT_08ac5c8c + 0xc4) = 0xbca3d70a;
  *(undefined4 *)(DAT_08ac5c8c + 0xc0) = 0xbca3d70a;
  FUN_089e31c0(&DAT_08aa31d0);
  return;
}

