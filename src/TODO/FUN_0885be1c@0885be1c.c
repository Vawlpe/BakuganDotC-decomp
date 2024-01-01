#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885be1c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [64];
  undefined auVar9 [64];
  undefined auVar10 [64];
  undefined auVar12 [16];
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined auVar8 [64];
  undefined auVar11 [64];
  
  iVar14 = *(int *)(param_1 + 8);
  puVar15 = (undefined4 *)(param_1 + 0x220);
  if (iVar14 < 0x19) {
    if (iVar14 < 0x18) {
      iVar14 = *(int *)(param_1 + 0x130);
LAB_0885bf0c:
      iVar13 = FUN_089ded10(param_1,1);
      auVar10._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
      auVar10._56_4_ = *(undefined4 *)(iVar14 + 0xac);
      auVar10._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
      auVar10._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
      auVar10._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
      auVar10._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
      auVar10._36_4_ = *(undefined4 *)(iVar14 + 0x98);
      auVar10._32_4_ = *(undefined4 *)(iVar14 + 0x88);
      auVar10._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
      auVar10._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
      auVar10._20_4_ = *(undefined4 *)(iVar14 + 0x94);
      auVar10._16_4_ = *(undefined4 *)(iVar14 + 0x84);
      auVar10._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
      auVar10._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
      auVar10._4_4_ = *(undefined4 *)(iVar14 + 0x90);
      auVar10._0_4_ = *(undefined4 *)(iVar14 + 0x80);
      auVar11._60_4_ = *(undefined4 *)(iVar13 + 0xbc);
      auVar11._56_4_ = *(undefined4 *)(iVar13 + 0xac);
      auVar11._52_4_ = *(undefined4 *)(iVar13 + 0x9c);
      auVar11._48_4_ = *(undefined4 *)(iVar13 + 0x8c);
      auVar11._44_4_ = *(undefined4 *)(iVar13 + 0xb8);
      auVar11._40_4_ = *(undefined4 *)(iVar13 + 0xa8);
      auVar11._36_4_ = *(undefined4 *)(iVar13 + 0x98);
      auVar11._32_4_ = *(undefined4 *)(iVar13 + 0x88);
      auVar11._28_4_ = *(undefined4 *)(iVar13 + 0xb4);
      auVar11._24_4_ = *(undefined4 *)(iVar13 + 0xa4);
      auVar11._20_4_ = *(undefined4 *)(iVar13 + 0x94);
      auVar11._16_4_ = *(undefined4 *)(iVar13 + 0x84);
      auVar11._12_4_ = *(undefined4 *)(iVar13 + 0xb0);
      auVar11._8_4_ = *(undefined4 *)(iVar13 + 0xa0);
      auVar11._4_4_ = *(undefined4 *)(iVar13 + 0x90);
      auVar11._0_4_ = *(undefined4 *)(iVar13 + 0x80);
      auVar2 = vmmul_q(auVar10,auVar11);
      *puVar15 = auVar2._0_4_;
      *(int *)(param_1 + 0x224) = auVar2._16_4_;
      *(int *)(param_1 + 0x228) = auVar2._32_4_;
      *(int *)(param_1 + 0x22c) = auVar2._48_4_;
      *(int *)(param_1 + 0x230) = auVar2._4_4_;
      *(int *)(param_1 + 0x234) = auVar2._20_4_;
      *(int *)(param_1 + 0x238) = auVar2._36_4_;
      *(int *)(param_1 + 0x23c) = auVar2._52_4_;
      *(int *)(param_1 + 0x240) = auVar2._8_4_;
      *(int *)(param_1 + 0x244) = auVar2._24_4_;
      *(int *)(param_1 + 0x248) = auVar2._40_4_;
      *(int *)(param_1 + 0x24c) = auVar2._56_4_;
      *(int *)(param_1 + 0x250) = auVar2._12_4_;
      *(int *)(param_1 + 0x254) = auVar2._28_4_;
      *(int *)(param_1 + 600) = auVar2._44_4_;
      *(int *)(param_1 + 0x25c) = auVar2._60_4_;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x130);
      iVar14 = FUN_089ded10(param_1,0x1a);
      auVar7._60_4_ = *(undefined4 *)(iVar13 + 0xbc);
      auVar7._56_4_ = *(undefined4 *)(iVar13 + 0xac);
      auVar7._52_4_ = *(undefined4 *)(iVar13 + 0x9c);
      auVar7._48_4_ = *(undefined4 *)(iVar13 + 0x8c);
      auVar7._44_4_ = *(undefined4 *)(iVar13 + 0xb8);
      auVar7._40_4_ = *(undefined4 *)(iVar13 + 0xa8);
      auVar7._36_4_ = *(undefined4 *)(iVar13 + 0x98);
      auVar7._32_4_ = *(undefined4 *)(iVar13 + 0x88);
      auVar7._28_4_ = *(undefined4 *)(iVar13 + 0xb4);
      auVar7._24_4_ = *(undefined4 *)(iVar13 + 0xa4);
      auVar7._20_4_ = *(undefined4 *)(iVar13 + 0x94);
      auVar7._16_4_ = *(undefined4 *)(iVar13 + 0x84);
      auVar7._12_4_ = *(undefined4 *)(iVar13 + 0xb0);
      auVar7._8_4_ = *(undefined4 *)(iVar13 + 0xa0);
      auVar7._4_4_ = *(undefined4 *)(iVar13 + 0x90);
      auVar7._0_4_ = *(undefined4 *)(iVar13 + 0x80);
      auVar8._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
      auVar8._56_4_ = *(undefined4 *)(iVar14 + 0xac);
      auVar8._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
      auVar8._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
      auVar8._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
      auVar8._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
      auVar8._36_4_ = *(undefined4 *)(iVar14 + 0x98);
      auVar8._32_4_ = *(undefined4 *)(iVar14 + 0x88);
      auVar8._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
      auVar8._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
      auVar8._20_4_ = *(undefined4 *)(iVar14 + 0x94);
      auVar8._16_4_ = *(undefined4 *)(iVar14 + 0x84);
      auVar8._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
      auVar8._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
      auVar8._4_4_ = *(undefined4 *)(iVar14 + 0x90);
      auVar8._0_4_ = *(undefined4 *)(iVar14 + 0x80);
      auVar2 = vmmul_q(auVar7,auVar8);
      *puVar15 = auVar2._0_4_;
      *(int *)(param_1 + 0x224) = auVar2._16_4_;
      *(int *)(param_1 + 0x228) = auVar2._32_4_;
      *(int *)(param_1 + 0x22c) = auVar2._48_4_;
      *(int *)(param_1 + 0x230) = auVar2._4_4_;
      *(int *)(param_1 + 0x234) = auVar2._20_4_;
      *(int *)(param_1 + 0x238) = auVar2._36_4_;
      *(int *)(param_1 + 0x23c) = auVar2._52_4_;
      *(int *)(param_1 + 0x240) = auVar2._8_4_;
      *(int *)(param_1 + 0x244) = auVar2._24_4_;
      *(int *)(param_1 + 0x248) = auVar2._40_4_;
      *(int *)(param_1 + 0x24c) = auVar2._56_4_;
      *(int *)(param_1 + 0x250) = auVar2._12_4_;
      *(int *)(param_1 + 0x254) = auVar2._28_4_;
      *(int *)(param_1 + 600) = auVar2._44_4_;
      *(int *)(param_1 + 0x25c) = auVar2._60_4_;
    }
  }
  else {
    if (iVar14 != 0x1e) {
      iVar14 = *(int *)(param_1 + 0x130);
      goto LAB_0885bf0c;
    }
    iVar13 = *(int *)(param_1 + 0x130);
    iVar14 = FUN_089ded10(param_1,5);
    auVar2._60_4_ = *(undefined4 *)(iVar13 + 0xbc);
    auVar2._56_4_ = *(undefined4 *)(iVar13 + 0xac);
    auVar2._52_4_ = *(undefined4 *)(iVar13 + 0x9c);
    auVar2._48_4_ = *(undefined4 *)(iVar13 + 0x8c);
    auVar2._44_4_ = *(undefined4 *)(iVar13 + 0xb8);
    auVar2._40_4_ = *(undefined4 *)(iVar13 + 0xa8);
    auVar2._36_4_ = *(undefined4 *)(iVar13 + 0x98);
    auVar2._32_4_ = *(undefined4 *)(iVar13 + 0x88);
    auVar2._28_4_ = *(undefined4 *)(iVar13 + 0xb4);
    auVar2._24_4_ = *(undefined4 *)(iVar13 + 0xa4);
    auVar2._20_4_ = *(undefined4 *)(iVar13 + 0x94);
    auVar2._16_4_ = *(undefined4 *)(iVar13 + 0x84);
    auVar2._12_4_ = *(undefined4 *)(iVar13 + 0xb0);
    auVar2._8_4_ = *(undefined4 *)(iVar13 + 0xa0);
    auVar2._4_4_ = *(undefined4 *)(iVar13 + 0x90);
    auVar2._0_4_ = *(undefined4 *)(iVar13 + 0x80);
    auVar9._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
    auVar9._56_4_ = *(undefined4 *)(iVar14 + 0xac);
    auVar9._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
    auVar9._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
    auVar9._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
    auVar9._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
    auVar9._36_4_ = *(undefined4 *)(iVar14 + 0x98);
    auVar9._32_4_ = *(undefined4 *)(iVar14 + 0x88);
    auVar9._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
    auVar9._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
    auVar9._20_4_ = *(undefined4 *)(iVar14 + 0x94);
    auVar9._16_4_ = *(undefined4 *)(iVar14 + 0x84);
    auVar9._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
    auVar9._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
    auVar9._4_4_ = *(undefined4 *)(iVar14 + 0x90);
    auVar9._0_4_ = *(undefined4 *)(iVar14 + 0x80);
    auVar2 = vmmul_q(auVar2,auVar9);
    *puVar15 = auVar2._0_4_;
    *(int *)(param_1 + 0x224) = auVar2._16_4_;
    *(int *)(param_1 + 0x228) = auVar2._32_4_;
    *(int *)(param_1 + 0x22c) = auVar2._48_4_;
    *(int *)(param_1 + 0x230) = auVar2._4_4_;
    *(int *)(param_1 + 0x234) = auVar2._20_4_;
    *(int *)(param_1 + 0x238) = auVar2._36_4_;
    *(int *)(param_1 + 0x23c) = auVar2._52_4_;
    *(int *)(param_1 + 0x240) = auVar2._8_4_;
    *(int *)(param_1 + 0x244) = auVar2._24_4_;
    *(int *)(param_1 + 0x248) = auVar2._40_4_;
    *(int *)(param_1 + 0x24c) = auVar2._56_4_;
    *(int *)(param_1 + 0x250) = auVar2._12_4_;
    *(int *)(param_1 + 0x254) = auVar2._28_4_;
    *(int *)(param_1 + 600) = auVar2._44_4_;
    *(int *)(param_1 + 0x25c) = auVar2._60_4_;
  }
  local_40 = in_V72;
  local_3c = in_V76;
  local_38 = in_V7A;
  local_34 = in_V7E;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0x15:
    goto LAB_0885c06c;
  case 0x16:
    local_3c = 0;
    local_40 = 0xc2480000;
    local_38 = 0;
    local_34 = 0;
    goto LAB_0885c06c;
  case 0x18:
    local_40 = 0;
    local_38 = 0x428c0000;
    break;
  case 0x19:
    local_40 = 0;
    local_38 = 0;
    break;
  case 0x1a:
    local_40 = 0xc2700000;
    local_38 = 0;
    break;
  case 0x1b:
    local_40 = 0;
    local_38 = 0x42200000;
    break;
  case 0x1c:
    local_3c = 0;
    local_40 = 0xc2480000;
    local_38 = 0;
    local_34 = 0;
  case 0x1d:
  case 0x1e:
  case 0x1f:
    goto LAB_0885c06c;
  case 0x20:
    local_40 = 0xc2f00000;
    local_38 = 0;
  }
  local_34 = 0;
  local_3c = 0;
LAB_0885c06c:
  auVar12._4_4_ = local_3c;
  auVar12._0_4_ = local_40;
  auVar12._8_4_ = local_38;
  auVar12._12_4_ = local_34;
  auVar3._8_8_ = *(undefined8 *)(param_1 + 0x230);
  auVar3._4_4_ = *(undefined4 *)(param_1 + 0x224);
  auVar3._0_4_ = *puVar15;
  auVar3 = vtfm4_q(auVar3,auVar12);
  uVar5 = *(undefined4 *)(param_1 + 0x25c);
  auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x250),auVar3._0_12_);
  *(int *)*(undefined (*) [12])(param_1 + 0x250) = auVar1._0_4_;
  *(int *)(param_1 + 0x254) = auVar1._4_4_;
  *(int *)(param_1 + 600) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  *(undefined *)(*(int *)(param_1 + 0x20c) + 0x10c) = 1;
  iVar14 = *(int *)(*(int *)(param_1 + 0x208) + 0xf4);
  iVar13 = *(int *)(param_1 + 0x130);
  uVar5 = *(undefined4 *)(iVar13 + 0xb4);
  uVar4 = *(undefined4 *)(iVar13 + 0xb8);
  uVar6 = *(undefined4 *)(iVar13 + 0xbc);
  *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(iVar13 + 0xb0);
  *(undefined4 *)(iVar14 + 0x14) = uVar5;
  *(undefined4 *)(iVar14 + 0x18) = uVar4;
  *(undefined4 *)(iVar14 + 0x1c) = uVar6;
  *(float *)(iVar14 + 0x14) = *(float *)(iVar14 + 0x14) + *(float *)(iVar14 + 0x20);
  (**(code **)(*(int *)(iVar14 + 4) + 0x4c))(iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x48));
  if ((*(uint *)(param_1 + 0x144) & 0x200000) == 0) {
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffff7;
  }
  else {
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) = *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) | 8;
  }
  return;
}

