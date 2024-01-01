#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e31c0(undefined (*param_1) [16])

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [64];
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar4 = DAT_08ac5c8c;
  auVar3 = vmidt_q();
  uVar7 = vfim_s(0x4000);
  auVar2 = vbfy1_q(*param_1);
  uVar1 = vbfy1_p(*(undefined8 *)param_1[1]);
  uVar5 = vrcp_s(auVar2._4_4_);
  uVar8 = vrcp_s(auVar2._12_4_);
  uVar6 = vrcp_s((int)((ulonglong)uVar1 >> 0x20));
  vpfxs(0x10,1,2,3);
  uVar9 = vmul_s(uVar7,uVar5);
  vpfxs(0x10,1,2,3);
  uVar10 = vmul_s(uVar7,uVar8);
  uVar11 = vmul_s(uVar7,uVar6);
  uVar5 = vmul_s(auVar2._0_4_,uVar5);
  uVar7 = vmul_s(auVar2._8_4_,uVar8);
  uVar6 = vmul_s((int)uVar1,uVar6);
  *(undefined4 *)(DAT_08ac5c8c + 0xd0) = uVar9;
  *(int *)(iVar4 + 0xd4) = auVar3._4_4_;
  *(int *)(iVar4 + 0xd8) = auVar3._8_4_;
  *(int *)(iVar4 + 0xdc) = auVar3._12_4_;
  *(int *)(iVar4 + 0xe0) = auVar3._16_4_;
  *(undefined4 *)(iVar4 + 0xe4) = uVar10;
  *(int *)(iVar4 + 0xe8) = auVar3._24_4_;
  *(int *)(iVar4 + 0xec) = auVar3._28_4_;
  *(int *)(iVar4 + 0xf0) = auVar3._32_4_;
  *(int *)(iVar4 + 0xf4) = auVar3._36_4_;
  *(undefined4 *)(iVar4 + 0xf8) = uVar11;
  *(int *)(iVar4 + 0xfc) = auVar3._44_4_;
  *(undefined4 *)(iVar4 + 0x100) = uVar5;
  *(undefined4 *)(iVar4 + 0x104) = uVar7;
  *(undefined4 *)(iVar4 + 0x108) = uVar6;
  *(int *)(iVar4 + 0x10c) = auVar3._60_4_;
  return;
}

