#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08826804(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_0882592c(5,0);
  FUN_08826394(iVar4);
  *(undefined4 *)(iVar4 + 0x1b4) = 0xdd020000;
  *(uint *)(iVar4 + 0x1b0) = param_1 << 8 | 0xdcff0001;
  iVar5 = FUN_0882592c(5,0);
  FUN_08826394(iVar5);
  *(undefined4 *)(iVar5 + 0x1b4) = 0xdd000400;
  *(uint *)(iVar5 + 0x1b0) = param_1 << 8 | 0xdcff0002;
  auVar1 = vscl_q(*(undefined (*) [16])(iVar5 + 0x30),0xbf800000);
  auVar2 = vscl_q(*(undefined (*) [16])(iVar5 + 0x40),0xc0c00000);
  auVar3 = vscl_q(*(undefined (*) [16])(iVar5 + 0x50),0xbf800000);
  *(int *)*(undefined (*) [16])(iVar5 + 0x30) = auVar1._0_4_;
  *(int *)(iVar5 + 0x34) = auVar1._4_4_;
  *(int *)(iVar5 + 0x38) = auVar1._8_4_;
  *(int *)(iVar5 + 0x3c) = auVar1._12_4_;
  *(int *)(iVar5 + 0x40) = auVar2._0_4_;
  *(int *)(iVar5 + 0x44) = auVar2._4_4_;
  *(int *)(iVar5 + 0x48) = auVar2._8_4_;
  *(int *)(iVar5 + 0x4c) = auVar2._12_4_;
  *(int *)(iVar5 + 0x50) = auVar3._0_4_;
  *(int *)(iVar5 + 0x54) = auVar3._4_4_;
  *(int *)(iVar5 + 0x58) = auVar3._8_4_;
  *(int *)(iVar5 + 0x5c) = auVar3._12_4_;
  iVar6 = FUN_0882592c(7,0);
  FUN_08826520(iVar6);
  *(undefined4 *)(iVar6 + 0x1b4) = 0xdd000000;
  *(uint *)(iVar6 + 0x1b0) = (param_1 + 1) * 0x100 | 0xdcff0002;
  *(int *)(iVar6 + 0x154) = iVar4;
  *(int *)(iVar6 + 0x158) = iVar5;
  return iVar6;
}

