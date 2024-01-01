#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f59e8(undefined4 param_1,undefined4 param_2,int param_3,undefined (*param_4) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined (*pauVar7) [12];
  undefined (*pauVar8) [64];
  undefined4 uVar9;
  undefined4 in_V7C;
  
  if (DAT_08afa6b0 == 0) {
    DAT_08afa6b0 = 1;
    DAT_08afa6c0 = 0x43700000;
    DAT_08afa6c8 = 0;
    DAT_08afa6c4 = 0x43080000;
    DAT_08afa6cc = 0;
  }
  pauVar8 = (undefined (*) [64])(param_3 + 0x30);
  if (param_4 == (undefined (*) [12])0x0) {
    param_4 = (undefined (*) [12])&DAT_08afa6c0;
  }
  auVar4 = vmidt_q();
  *(int *)*pauVar8 = auVar4._0_4_;
  *(int *)(param_3 + 0x34) = auVar4._16_4_;
  *(int *)(param_3 + 0x38) = auVar4._32_4_;
  *(int *)(param_3 + 0x3c) = auVar4._48_4_;
  *(int *)(param_3 + 0x40) = auVar4._4_4_;
  *(int *)(param_3 + 0x44) = auVar4._20_4_;
  *(int *)(param_3 + 0x48) = auVar4._36_4_;
  *(int *)(param_3 + 0x4c) = auVar4._52_4_;
  *(int *)(param_3 + 0x50) = auVar4._8_4_;
  *(int *)(param_3 + 0x54) = auVar4._24_4_;
  *(int *)(param_3 + 0x58) = auVar4._40_4_;
  *(int *)(param_3 + 0x5c) = auVar4._56_4_;
  *(int *)(param_3 + 0x60) = auVar4._12_4_;
  *(int *)(param_3 + 100) = auVar4._28_4_;
  *(int *)(param_3 + 0x68) = auVar4._44_4_;
  *(int *)(param_3 + 0x6c) = auVar4._60_4_;
  pauVar7 = (undefined (*) [12])(param_3 + 0x60);
  auVar1._4_4_ = param_1;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_1;
  auVar1 = vmul_t(*param_4,auVar1);
  uVar9 = *(undefined4 *)(param_3 + 0x6c);
  auVar1 = vsub_t(*pauVar7,auVar1);
  *(int *)*pauVar7 = auVar1._0_4_;
  *(int *)(param_3 + 100) = auVar1._4_4_;
  *(int *)(param_3 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(param_3 + 0x6c) = uVar9;
  uVar9 = vmul_s(param_2,in_V7C);
  auVar5 = vrot_q(uVar9,1,2,0,0);
  auVar6 = vrot_q(uVar9,3,1,0,0);
  auVar2 = vidt_q();
  auVar3 = vidt_q();
  auVar4._48_16_ = auVar3;
  auVar4._44_4_ = auVar2._12_4_;
  auVar4._40_4_ = auVar2._8_4_;
  auVar4._36_4_ = auVar2._4_4_;
  auVar4._32_4_ = auVar2._0_4_;
  auVar4._28_4_ = auVar6._12_4_;
  auVar4._24_4_ = auVar6._8_4_;
  auVar4._20_4_ = auVar6._4_4_;
  auVar4._16_4_ = auVar6._0_4_;
  auVar4._12_4_ = auVar5._12_4_;
  auVar4._8_4_ = auVar5._8_4_;
  auVar4._4_4_ = auVar5._4_4_;
  auVar4._0_4_ = auVar5._0_4_;
  auVar4 = vmmul_q(*pauVar8,auVar4);
  *(int *)*pauVar8 = auVar4._0_4_;
  *(int *)(param_3 + 0x34) = auVar4._4_4_;
  *(int *)(param_3 + 0x38) = auVar4._8_4_;
  *(int *)(param_3 + 0x3c) = auVar4._12_4_;
  *(int *)(param_3 + 0x40) = auVar4._16_4_;
  *(int *)(param_3 + 0x44) = auVar4._20_4_;
  *(int *)(param_3 + 0x48) = auVar4._24_4_;
  *(int *)(param_3 + 0x4c) = auVar4._28_4_;
  *(int *)(param_3 + 0x50) = auVar4._32_4_;
  *(int *)(param_3 + 0x54) = auVar4._36_4_;
  *(int *)(param_3 + 0x58) = auVar4._40_4_;
  *(int *)(param_3 + 0x5c) = auVar4._44_4_;
  *(int *)(param_3 + 0x60) = auVar4._48_4_;
  *(int *)(param_3 + 100) = auVar4._52_4_;
  *(int *)(param_3 + 0x68) = auVar4._56_4_;
  *(int *)(param_3 + 0x6c) = auVar4._60_4_;
  auVar2 = vscl_q(*(undefined (*) [16])*pauVar8,param_1);
  auVar3 = vscl_q(*(undefined (*) [16])(param_3 + 0x40),param_1);
  auVar5 = vscl_q(*(undefined (*) [16])(param_3 + 0x50),param_1);
  *(int *)*pauVar8 = auVar2._0_4_;
  *(int *)(param_3 + 0x34) = auVar2._4_4_;
  *(int *)(param_3 + 0x38) = auVar2._8_4_;
  *(int *)(param_3 + 0x3c) = auVar2._12_4_;
  *(int *)(param_3 + 0x40) = auVar3._0_4_;
  *(int *)(param_3 + 0x44) = auVar3._4_4_;
  *(int *)(param_3 + 0x48) = auVar3._8_4_;
  *(int *)(param_3 + 0x4c) = auVar3._12_4_;
  *(int *)(param_3 + 0x50) = auVar5._0_4_;
  *(int *)(param_3 + 0x54) = auVar5._4_4_;
  *(int *)(param_3 + 0x58) = auVar5._8_4_;
  *(int *)(param_3 + 0x5c) = auVar5._12_4_;
  uVar9 = *(undefined4 *)(param_3 + 0x6c);
  auVar1 = vadd_t(*pauVar7,*param_4);
  *(int *)*pauVar7 = auVar1._0_4_;
  *(int *)(param_3 + 100) = auVar1._4_4_;
  *(int *)(param_3 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(param_3 + 0x6c) = uVar9;
  return;
}

