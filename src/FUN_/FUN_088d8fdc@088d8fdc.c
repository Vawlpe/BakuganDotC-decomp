#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088d91b8)
// WARNING: Removing unreachable block (ram,0x088d9124)
// WARNING: Removing unreachable block (ram,0x088d90f8)
// WARNING: Removing unreachable block (ram,0x088d9128)
// WARNING: Removing unreachable block (ram,0x088d9190)
// WARNING: Removing unreachable block (ram,0x088d91bc)

int FUN_088d8fdc(int param_1,int param_2,undefined4 param_3,undefined2 param_4,undefined param_5)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  int *piVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  
  FUN_089de2e4(param_1,(&PTR_s_fz_quest_switch01_gmo_08a975b4)[param_2 * 3],0);
  *(undefined **)(param_1 + 0x160) = &DAT_08af6e10;
  *(undefined *)(param_1 + 0x140) = 0;
  *(undefined *)(param_1 + 0x141) = param_5;
  *(undefined2 *)(param_1 + 0x142) = param_4;
  *(undefined2 *)(param_1 + 0x15c) = 0;
  *(undefined *)(param_1 + 0x15e) = 1;
  *(undefined *)(param_1 + 0x15f) = 0;
  memset_jak(param_1 + 0x144,0,0xc);
  memset_jak(param_1 + 0x150,0,0xc);
  *(undefined **)(param_1 + 0x14) = &DAT_08af3314;
  *(undefined **)(param_1 + 0x160) = &DAT_08af33b4;
  *(undefined4 *)(param_1 + 0x170) = param_3;
  *(undefined4 *)(param_1 + 8) = 0x87;
  *(int *)(param_1 + 0x168) = param_2;
  iVar7 = FUN_088be274();
  FUN_089d8984(param_1,iVar7 + 0x658);
  fVar9 = (float)(int)*(short *)(*(int *)(param_1 + 0x170) + 0x1a) * 6.283185 * 1.525902e-05;
  if (3.141593 < fVar9) {
    fVar9 = fVar9 - 6.283185;
  }
  else if (fVar9 <= -3.141593) {
    fVar9 = fVar9 + 6.283185;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(float *)(param_1 + 0x34) = fVar9;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
  auVar5 = vrot_q(uVar10,1,0,3,0);
  auVar2 = vidt_q();
  auVar6 = vrot_q(uVar10,2,0,1,0);
  auVar3 = vidt_q();
  auVar4._48_16_ = auVar3;
  auVar4._44_4_ = auVar6._12_4_;
  auVar4._40_4_ = auVar6._8_4_;
  auVar4._36_4_ = auVar6._4_4_;
  auVar4._32_4_ = auVar6._0_4_;
  auVar4._28_4_ = auVar2._12_4_;
  auVar4._24_4_ = auVar2._8_4_;
  auVar4._20_4_ = auVar2._4_4_;
  auVar4._16_4_ = auVar2._0_4_;
  auVar4._12_4_ = auVar5._12_4_;
  auVar4._8_4_ = auVar5._8_4_;
  auVar4._4_4_ = auVar5._4_4_;
  auVar4._0_4_ = auVar5._0_4_;
  auVar4 = vmmul_q(*(undefined (*) [64])(iVar7 + 0x80),auVar4);
  *(int *)*(undefined (*) [64])(iVar7 + 0x80) = auVar4._0_4_;
  *(int *)(iVar7 + 0x84) = auVar4._4_4_;
  *(int *)(iVar7 + 0x88) = auVar4._8_4_;
  *(int *)(iVar7 + 0x8c) = auVar4._12_4_;
  *(int *)(iVar7 + 0x90) = auVar4._16_4_;
  *(int *)(iVar7 + 0x94) = auVar4._20_4_;
  *(int *)(iVar7 + 0x98) = auVar4._24_4_;
  *(int *)(iVar7 + 0x9c) = auVar4._28_4_;
  *(int *)(iVar7 + 0xa0) = auVar4._32_4_;
  *(int *)(iVar7 + 0xa4) = auVar4._36_4_;
  *(int *)(iVar7 + 0xa8) = auVar4._40_4_;
  *(int *)(iVar7 + 0xac) = auVar4._44_4_;
  *(int *)(iVar7 + 0xb0) = auVar4._48_4_;
  *(int *)(iVar7 + 0xb4) = auVar4._52_4_;
  *(int *)(iVar7 + 0xb8) = auVar4._56_4_;
  *(int *)(iVar7 + 0xbc) = auVar4._60_4_;
  piVar8 = *(int **)(param_1 + 0x170);
  auVar1._4_4_ = (float)piVar8[1] * 0.0002441406;
  auVar1._0_4_ = (float)*piVar8 * 0.0002441406;
  auVar1._8_4_ = (float)piVar8[2] * 0.0002441406;
  auVar1 = vscl_t(auVar1,0x41a00000);
  *(int *)(param_1 + 0x20) = auVar1._0_4_;
  *(int *)(param_1 + 0x24) = auVar1._4_4_;
  *(int *)(param_1 + 0x28) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x2c) = in_V7D;
  *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
  *(undefined *)(param_1 + 0x164) = 0;
  return param_1;
}

