#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b9d98(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined (*pauVar7) [16];
  code *pcVar8;
  short *psVar9;
  
  *(undefined4 *)(param_1 + 0x40) = 0x4079999a;
  iVar5 = *(int *)(param_1 + 0x2ac) * 8;
  *(undefined4 *)(param_1 + 0x44) = 0x46ea6000;
  iVar6 = param_1 + *(short *)(&DAT_08a91a94 + iVar5);
  if (*(short *)(&DAT_08a91a96 + iVar5) == 0) {
    pcVar8 = (code *)(&PTR_FUN_08a91a98)[*(int *)(param_1 + 0x2ac) * 2];
  }
  else {
    psVar9 = (short *)(*(int *)((&PTR_FUN_08a91a98)[*(int *)(param_1 + 0x2ac) * 2] + iVar6) +
                      *(short *)(&DAT_08a91a96 + *(int *)(param_1 + 0x2ac) * 8) * 8);
    pcVar8 = *(code **)(psVar9 + 2);
    iVar6 = iVar6 + *psVar9;
  }
  (*pcVar8)(iVar6);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x2ac);
  FUN_088b9b1c(param_1);
  FUN_089e2b14(param_1,0xffffffff);
  pauVar7 = (undefined (*) [16])(param_1 + 0x2e0);
  if (*(int *)(param_1 + 0x2a0) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    uVar4 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)*pauVar7 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x2e4) = uVar2;
    *(undefined4 *)(param_1 + 0x2e8) = uVar3;
    *(undefined4 *)(param_1 + 0x2ec) = uVar4;
    auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x2a0) + 0x20),*pauVar7);
    auVar1 = vscl_q(auVar1,0x3f000000);
    auVar1 = vadd_q(*pauVar7,auVar1);
    *(int *)*pauVar7 = auVar1._0_4_;
    *(int *)(param_1 + 0x2e4) = auVar1._4_4_;
    *(int *)(param_1 + 0x2e8) = auVar1._8_4_;
    *(int *)(param_1 + 0x2ec) = auVar1._12_4_;
  }
  return;
}

