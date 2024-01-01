#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fde00(int param_1)

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
  
  iVar5 = *(int *)(param_1 + 0x2a8) * 8;
  iVar6 = param_1 + *(short *)(&DAT_08a998b8 + iVar5);
  if (*(short *)(&DAT_08a998ba + iVar5) == 0) {
    pcVar8 = (code *)(&PTR_FUN_08a998bc)[*(int *)(param_1 + 0x2a8) * 2];
  }
  else {
    psVar9 = (short *)(*(int *)((&PTR_FUN_08a998bc)[*(int *)(param_1 + 0x2a8) * 2] + iVar6) +
                      *(short *)(&DAT_08a998ba + *(int *)(param_1 + 0x2a8) * 8) * 8);
    pcVar8 = *(code **)(psVar9 + 2);
    iVar6 = iVar6 + *psVar9;
  }
  (*pcVar8)(iVar6);
  FUN_089e2b14(param_1,1);
  pauVar7 = (undefined (*) [16])(param_1 + 0x330);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)*pauVar7 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x334) = uVar2;
  *(undefined4 *)(param_1 + 0x338) = uVar3;
  *(undefined4 *)(param_1 + 0x33c) = uVar4;
  auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x2a0) + 0x20),*pauVar7);
  auVar1 = vscl_q(auVar1,0x3f000000);
  auVar1 = vadd_q(*pauVar7,auVar1);
  *(int *)*pauVar7 = auVar1._0_4_;
  *(int *)(param_1 + 0x334) = auVar1._4_4_;
  *(int *)(param_1 + 0x338) = auVar1._8_4_;
  *(int *)(param_1 + 0x33c) = auVar1._12_4_;
  return;
}

