#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898eff8(int param_1,char param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  if (param_2 == '\0') {
    memset_jak((undefined *)(param_1 + 0x1284),0,0x10);
    *(undefined4 *)(param_1 + 0x1290) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x1288) = 0x4048f5c3;
  iVar6 = *(int *)(*(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x1208) + 0x130);
  uVar8 = vmul_s(0x4048f5c3,in_V7C);
  auVar4 = vrot_q(uVar8,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar8,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar6 + 0x80) = auVar4._0_4_;
  *(int *)(iVar6 + 0x84) = auVar4._4_4_;
  *(int *)(iVar6 + 0x88) = auVar4._8_4_;
  *(int *)(iVar6 + 0x8c) = auVar4._12_4_;
  *(int *)(iVar6 + 0x90) = auVar1._0_4_;
  *(int *)(iVar6 + 0x94) = auVar1._4_4_;
  *(int *)(iVar6 + 0x98) = auVar1._8_4_;
  *(int *)(iVar6 + 0x9c) = auVar1._12_4_;
  *(int *)(iVar6 + 0xa0) = auVar5._0_4_;
  *(int *)(iVar6 + 0xa4) = auVar5._4_4_;
  *(int *)(iVar6 + 0xa8) = auVar5._8_4_;
  *(int *)(iVar6 + 0xac) = auVar5._12_4_;
  *(int *)(iVar6 + 0xb0) = auVar2._0_4_;
  *(int *)(iVar6 + 0xb4) = auVar2._4_4_;
  *(int *)(iVar6 + 0xb8) = auVar2._8_4_;
  *(int *)(iVar6 + 0xbc) = auVar2._12_4_;
  iVar6 = *(int *)(*(int *)(param_1 + *(char *)(param_1 + 0x1270) * 4 + 0x1208) + 0x130);
  uVar8 = vmul_s(0,in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar8,0,1,2,0);
  auVar5 = vrot_q(uVar8,0,3,1,0);
  auVar2 = vidt_q();
  auVar3._48_16_ = auVar2;
  auVar3._44_4_ = auVar5._12_4_;
  auVar3._40_4_ = auVar5._8_4_;
  auVar3._36_4_ = auVar5._4_4_;
  auVar3._32_4_ = auVar5._0_4_;
  auVar3._28_4_ = auVar4._12_4_;
  auVar3._24_4_ = auVar4._8_4_;
  auVar3._20_4_ = auVar4._4_4_;
  auVar3._16_4_ = auVar4._0_4_;
  auVar3._12_4_ = auVar1._12_4_;
  auVar3._8_4_ = auVar1._8_4_;
  auVar3._4_4_ = auVar1._4_4_;
  auVar3._0_4_ = auVar1._0_4_;
  auVar3 = vmmul_q(*(undefined (*) [64])(iVar6 + 0x80),auVar3);
  *(int *)*(undefined (*) [64])(iVar6 + 0x80) = auVar3._0_4_;
  *(int *)(iVar6 + 0x84) = auVar3._4_4_;
  *(int *)(iVar6 + 0x88) = auVar3._8_4_;
  *(int *)(iVar6 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar6 + 0x90) = auVar3._16_4_;
  *(int *)(iVar6 + 0x94) = auVar3._20_4_;
  *(int *)(iVar6 + 0x98) = auVar3._24_4_;
  *(int *)(iVar6 + 0x9c) = auVar3._28_4_;
  *(int *)(iVar6 + 0xa0) = auVar3._32_4_;
  *(int *)(iVar6 + 0xa4) = auVar3._36_4_;
  *(int *)(iVar6 + 0xa8) = auVar3._40_4_;
  *(int *)(iVar6 + 0xac) = auVar3._44_4_;
  *(int *)(iVar6 + 0xb0) = auVar3._48_4_;
  *(int *)(iVar6 + 0xb4) = auVar3._52_4_;
  *(int *)(iVar6 + 0xb8) = auVar3._56_4_;
  *(int *)(iVar6 + 0xbc) = auVar3._60_4_;
  if (param_2 == '\0') {
    fVar7 = (float)FUN_0898efa4(param_1,0,
                                *(undefined *)
                                 ((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 +
                                  param_1 + 0x11c0));
    fVar7 = *(float *)(param_1 + 0x12ac) * fVar7;
    param_1 = param_1 + *(char *)(param_1 + 0x1270) * 4;
    *(float *)(param_1 + 0x1294) = fVar7;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1208) + 0x130);
    auVar1 = vscl_q(*(undefined (*) [16])(iVar6 + 0x80),fVar7);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar6 + 0x90),fVar7);
    auVar4 = vscl_q(*(undefined (*) [16])(iVar6 + 0xa0),fVar7);
    *(int *)*(undefined (*) [16])(iVar6 + 0x80) = auVar1._0_4_;
    *(int *)(iVar6 + 0x84) = auVar1._4_4_;
    *(int *)(iVar6 + 0x88) = auVar1._8_4_;
    *(int *)(iVar6 + 0x8c) = auVar1._12_4_;
    *(int *)(iVar6 + 0x90) = auVar2._0_4_;
    *(int *)(iVar6 + 0x94) = auVar2._4_4_;
    *(int *)(iVar6 + 0x98) = auVar2._8_4_;
    *(int *)(iVar6 + 0x9c) = auVar2._12_4_;
    *(int *)(iVar6 + 0xa0) = auVar4._0_4_;
    *(int *)(iVar6 + 0xa4) = auVar4._4_4_;
    *(int *)(iVar6 + 0xa8) = auVar4._8_4_;
    *(int *)(iVar6 + 0xac) = auVar4._12_4_;
  }
  else {
    fVar7 = (float)FUN_0898efa4(param_1,1,
                                *(undefined *)
                                 ((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 +
                                  param_1 + 0x11c0));
    fVar7 = *(float *)(param_1 + 0x12ac) * fVar7 * *(float *)(param_1 + 0x1290);
    param_1 = param_1 + *(char *)(param_1 + 0x1270) * 4;
    *(float *)(param_1 + 0x1294) = fVar7;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1208) + 0x130);
    auVar1 = vscl_q(*(undefined (*) [16])(iVar6 + 0x80),fVar7);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar6 + 0x90),fVar7);
    auVar4 = vscl_q(*(undefined (*) [16])(iVar6 + 0xa0),fVar7);
    *(int *)*(undefined (*) [16])(iVar6 + 0x80) = auVar1._0_4_;
    *(int *)(iVar6 + 0x84) = auVar1._4_4_;
    *(int *)(iVar6 + 0x88) = auVar1._8_4_;
    *(int *)(iVar6 + 0x8c) = auVar1._12_4_;
    *(int *)(iVar6 + 0x90) = auVar2._0_4_;
    *(int *)(iVar6 + 0x94) = auVar2._4_4_;
    *(int *)(iVar6 + 0x98) = auVar2._8_4_;
    *(int *)(iVar6 + 0x9c) = auVar2._12_4_;
    *(int *)(iVar6 + 0xa0) = auVar4._0_4_;
    *(int *)(iVar6 + 0xa4) = auVar4._4_4_;
    *(int *)(iVar6 + 0xa8) = auVar4._8_4_;
    *(int *)(iVar6 + 0xac) = auVar4._12_4_;
  }
  return;
}

