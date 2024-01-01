#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b7b1c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  
  if (*(int *)(param_1 + 0x810) == -1) {
    *(undefined4 *)(param_1 + 0x810) = 0;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    iVar8 = param_1 + *(int *)(param_1 + 0x810) * 0x10;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(iVar8 + 0x410) = *param_3;
    *(undefined4 *)(iVar8 + 0x414) = uVar2;
    *(undefined4 *)(iVar8 + 0x418) = uVar3;
    *(undefined4 *)(iVar8 + 0x41c) = uVar4;
  }
  else {
    if (*(char *)(param_1 + 0x814) == '\0') {
      return;
    }
    uVar5 = *(int *)(param_1 + 0x810) + 1;
    *(uint *)(param_1 + 0x810) = uVar5;
    uVar5 = uVar5 & 0x3f;
    *(uint *)(param_1 + 0x810) = uVar5;
    iVar8 = param_1 + uVar5 * 0x10;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(iVar8 + 0x10) = *param_2;
    *(undefined4 *)(iVar8 + 0x14) = uVar2;
    *(undefined4 *)(iVar8 + 0x18) = uVar3;
    *(undefined4 *)(iVar8 + 0x1c) = uVar4;
    iVar8 = param_1 + *(int *)(param_1 + 0x810) * 0x10;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(iVar8 + 0x410) = *param_3;
    *(undefined4 *)(iVar8 + 0x414) = uVar2;
    *(undefined4 *)(iVar8 + 0x418) = uVar3;
    *(undefined4 *)(iVar8 + 0x41c) = uVar4;
  }
  iVar7 = *(int *)(param_1 + 0x810) * 0xc;
  iVar8 = *(int *)(*(int *)(param_1 + 0x830) + iVar7);
  iVar6 = param_1 + *(int *)(param_1 + 0x810) * 0x10;
  pauVar9 = (undefined (*) [16])(iVar6 + 0x10);
  uVar2 = *(undefined4 *)(iVar6 + 0x14);
  uVar3 = *(undefined4 *)(iVar6 + 0x18);
  uVar4 = *(undefined4 *)(iVar6 + 0x1c);
  *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)*pauVar9;
  *(undefined4 *)(iVar8 + 100) = uVar2;
  *(undefined4 *)(iVar8 + 0x68) = uVar3;
  *(undefined4 *)(iVar8 + 0x6c) = uVar4;
  auVar1 = vsub_q(*(undefined (*) [16])(iVar6 + 0x410),*pauVar9);
  auVar1 = vscl_q(auVar1,0x3eaaaa3b);
  auVar1 = vadd_q(*pauVar9,auVar1);
  iVar8 = *(int *)(*(int *)(param_1 + 0x830) + iVar7 + 4);
  *(int *)(iVar8 + 0x60) = auVar1._0_4_;
  *(int *)(iVar8 + 100) = auVar1._4_4_;
  *(int *)(iVar8 + 0x68) = auVar1._8_4_;
  *(int *)(iVar8 + 0x6c) = auVar1._12_4_;
  auVar1 = vsub_q(*(undefined (*) [16])(iVar6 + 0x410),*pauVar9);
  auVar1 = vscl_q(auVar1,0x3f2aaa3b);
  auVar1 = vadd_q(*pauVar9,auVar1);
  iVar8 = *(int *)(*(int *)(param_1 + 0x830) + iVar7 + 8);
  *(int *)(iVar8 + 0x60) = auVar1._0_4_;
  *(int *)(iVar8 + 100) = auVar1._4_4_;
  *(int *)(iVar8 + 0x68) = auVar1._8_4_;
  *(int *)(iVar8 + 0x6c) = auVar1._12_4_;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x830) + iVar7) + 0x90) = 0x41f00000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x830) + iVar7 + 4) + 0x90) = 0x41f00000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x830) + iVar7 + 8) + 0x90) = 0x41f00000;
  return;
}

