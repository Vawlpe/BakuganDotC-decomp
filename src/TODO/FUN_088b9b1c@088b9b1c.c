#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b9b1c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [64];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auVar6 [36];
  undefined auVar7 [64];
  undefined (*pauVar8) [12];
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 in_V7C;
  undefined4 in_V7D;
  
  if (*(short *)(param_1 + 0x4b0) < 1) {
    *(undefined2 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4a0) = 0x3fc90fdb;
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0x3f800000;
  }
  else {
    fVar10 = *(float *)(param_1 + 0x4a0) + 3.141593;
    *(float *)(param_1 + 0x4a0) = fVar10;
    uVar11 = vmul_s(fVar10,in_V7C);
    fVar12 = (float)vcos_s(uVar11);
    *(float *)(param_1 + 0x4a4) = *(float *)(param_1 + 0x4ac) * fVar12;
    uVar11 = vmul_s(fVar10,in_V7C);
    fVar10 = (float)vsin_s(uVar11);
    *(float *)(param_1 + 0x4a8) = *(float *)(param_1 + 0x4ac) * fVar10;
    *(short *)(param_1 + 0x4b0) = *(short *)(param_1 + 0x4b0) + -1;
  }
  uVar11 = *(undefined4 *)(param_1 + 0x5c);
  uVar5 = *(undefined4 *)(param_1 + 0x6c);
  pauVar8 = (undefined (*) [12])(param_1 + 0x490);
  auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x50),*pauVar8);
  auVar2 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),*pauVar8);
  *(int *)*(undefined (*) [12])(param_1 + 0x50) = auVar1._0_4_;
  *(int *)(param_1 + 0x54) = auVar1._4_4_;
  *(int *)(param_1 + 0x58) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar2._0_4_;
  *(int *)(param_1 + 100) = auVar2._4_4_;
  *(int *)(param_1 + 0x68) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0xcc);
  auVar3._60_4_ = *(undefined4 *)(param_1 + 0x10c);
  auVar3._56_4_ = *(undefined4 *)(param_1 + 0xfc);
  auVar3._52_4_ = *(undefined4 *)(param_1 + 0xec);
  auVar3._48_4_ = *(undefined4 *)(param_1 + 0xdc);
  auVar3._44_4_ = *(undefined4 *)(param_1 + 0x108);
  auVar3._40_4_ = *(undefined4 *)(param_1 + 0xf8);
  auVar3._36_4_ = *(undefined4 *)(param_1 + 0xe8);
  auVar3._32_4_ = *(undefined4 *)(param_1 + 0xd8);
  auVar3._28_4_ = *(undefined4 *)(param_1 + 0x104);
  auVar3._24_4_ = *(undefined4 *)(param_1 + 0xf4);
  auVar3._20_4_ = *(undefined4 *)(param_1 + 0xe4);
  auVar3._16_4_ = *(undefined4 *)(param_1 + 0xd4);
  auVar3._12_4_ = *(undefined4 *)(param_1 + 0x100);
  auVar3._8_4_ = *(undefined4 *)(param_1 + 0xf0);
  auVar3._4_4_ = *(undefined4 *)(param_1 + 0xe0);
  auVar3._0_4_ = *(undefined4 *)(param_1 + 0xd0);
  auVar7._60_4_ = *(undefined4 *)(param_1 + 0xcc);
  auVar7._56_4_ = *(undefined4 *)(param_1 + 0xbc);
  auVar7._52_4_ = *(undefined4 *)(param_1 + 0xac);
  auVar7._48_4_ = *(undefined4 *)(param_1 + 0x9c);
  auVar7._44_4_ = *(undefined4 *)(param_1 + 200);
  auVar7._40_4_ = *(undefined4 *)(param_1 + 0xb8);
  auVar7._36_4_ = *(undefined4 *)(param_1 + 0xa8);
  auVar7._32_4_ = *(undefined4 *)(param_1 + 0x98);
  auVar7._28_4_ = *(undefined4 *)(param_1 + 0xc4);
  auVar7._24_4_ = *(undefined4 *)(param_1 + 0xb4);
  auVar7._20_4_ = *(undefined4 *)(param_1 + 0xa4);
  auVar7._16_4_ = *(undefined4 *)(param_1 + 0x94);
  auVar7._12_4_ = *(undefined4 *)(param_1 + 0xc0);
  auVar7._8_4_ = *(undefined4 *)(param_1 + 0xb0);
  auVar7._4_4_ = *(undefined4 *)(param_1 + 0xa0);
  auVar7._0_4_ = *(undefined4 *)(param_1 + 0x90);
  auVar3 = vmmul_q(auVar3,auVar7);
  *(undefined4 *)(param_1 + 0x500) = auVar3._0_4_;
  *(int *)(param_1 + 0x504) = auVar3._16_4_;
  *(int *)(param_1 + 0x508) = auVar3._32_4_;
  *(int *)(param_1 + 0x50c) = auVar3._48_4_;
  *(int *)(param_1 + 0x510) = auVar3._4_4_;
  *(int *)(param_1 + 0x514) = auVar3._20_4_;
  *(int *)(param_1 + 0x518) = auVar3._36_4_;
  *(int *)(param_1 + 0x51c) = auVar3._52_4_;
  *(int *)(param_1 + 0x520) = auVar3._8_4_;
  *(int *)(param_1 + 0x524) = auVar3._24_4_;
  *(int *)(param_1 + 0x528) = auVar3._40_4_;
  *(int *)(param_1 + 0x52c) = auVar3._56_4_;
  *(int *)(param_1 + 0x530) = auVar3._12_4_;
  *(int *)(param_1 + 0x534) = auVar3._28_4_;
  *(int *)(param_1 + 0x538) = auVar3._44_4_;
  *(int *)(param_1 + 0x53c) = auVar3._60_4_;
  puVar9 = (undefined4 *)(param_1 + 0x540);
  *puVar9 = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x528);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0x52c);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x530);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x534);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0x538);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x53c);
  uVar11 = *(undefined4 *)(param_1 + 0x544);
  uVar5 = *(undefined4 *)(param_1 + 0x548);
  uVar4 = *(undefined4 *)(param_1 + 0x558);
  auVar2 = vzero_t();
  auVar6._32_4_ = *(undefined4 *)(param_1 + 0x568);
  auVar6._28_4_ = uVar4;
  auVar6._24_4_ = uVar5;
  auVar6._20_4_ = *(undefined4 *)(param_1 + 0x564);
  auVar6._16_4_ = *(undefined4 *)(param_1 + 0x554);
  auVar6._12_4_ = uVar11;
  auVar6._8_4_ = *(undefined4 *)(param_1 + 0x560);
  auVar6._4_4_ = *(undefined4 *)(param_1 + 0x550);
  auVar6._0_4_ = *puVar9;
  auVar1 = vtfm3_t(auVar6,*(undefined (*) [12])(param_1 + 0x570));
  *puVar9 = *puVar9;
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
  *(int *)(param_1 + 0x54c) = auVar2._0_4_;
  *(undefined4 *)(param_1 + 0x550) = uVar11;
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x554);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x564);
  *(int *)(param_1 + 0x55c) = auVar2._4_4_;
  auVar1 = vneg_t(auVar1);
  *(undefined4 *)(param_1 + 0x560) = uVar5;
  *(undefined4 *)(param_1 + 0x564) = uVar4;
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x568);
  *(int *)(param_1 + 0x56c) = auVar2._8_4_;
  *(int *)(param_1 + 0x570) = auVar1._0_4_;
  *(int *)(param_1 + 0x574) = auVar1._4_4_;
  *(int *)(param_1 + 0x578) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  auVar1._4_4_ = *(undefined4 *)(param_1 + 0x550);
  auVar1._0_4_ = *(undefined4 *)(param_1 + 0x540);
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x560);
  auVar1 = vscl_t(auVar1,*(undefined4 *)(param_1 + 0x4a4));
  auVar2._4_4_ = *(undefined4 *)(param_1 + 0x554);
  auVar2._0_4_ = *(undefined4 *)(param_1 + 0x544);
  auVar2._8_4_ = *(undefined4 *)(param_1 + 0x564);
  auVar2 = vscl_t(auVar2,*(undefined4 *)(param_1 + 0x4a8));
  auVar1 = vadd_t(auVar1,auVar2);
  *(int *)*pauVar8 = auVar1._0_4_;
  *(int *)(param_1 + 0x494) = auVar1._4_4_;
  *(int *)(param_1 + 0x498) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x49c) = in_V7D;
  return;
}
