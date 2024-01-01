#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_088609bc(undefined4 param_1,int param_2,undefined4 *param_3,undefined (*param_4) [12],
                 char param_5)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auVar6 [12];
  float fVar7;
  undefined4 in_V7D;
  float local_4c;
  
  uVar3 = DAT_08b0028c;
  auVar1 = vscl_t(_DAT_08b00290,*(float *)(param_2 + 0x20) + 0.1);
  auVar2._8_4_ = DAT_08b00288;
  auVar2._4_4_ = DAT_08b00284;
  auVar2._0_4_ = DAT_08b00280;
  auVar1 = vadd_t(auVar2,auVar1);
  local_4c = auVar1._4_4_;
  if (param_5 == '\0') {
    local_4c = local_4c - *(float *)(param_2 + 0x20);
  }
  vpfxs(0x12,1,0,3);
  auVar2 = vmov_t(_DAT_08b00290);
  fVar7 = (float)vdot_t(*param_4,auVar2);
  auVar2 = vscl_t(auVar2,fVar7 * 0.04);
  *(int *)*param_4 = auVar2._0_4_;
  *(int *)(*param_4 + 4) = auVar2._4_4_;
  *(int *)(*param_4 + 8) = auVar2._8_4_;
  *(undefined4 *)param_4[1] = in_V7D;
  *(undefined4 *)(*param_4 + 4) = 0;
  auVar6._4_4_ = local_4c;
  auVar6._0_4_ = auVar1._0_4_;
  auVar6._8_4_ = auVar1._8_4_;
  auVar1 = vadd_t(auVar6,*param_4);
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  param_3[3] = uVar3;
  if (param_5 != '\0') {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined4 *)(param_2 + 0x10) = *param_3;
    *(undefined4 *)(param_2 + 0x14) = uVar3;
    *(undefined4 *)(param_2 + 0x18) = uVar4;
    *(undefined4 *)(param_2 + 0x1c) = uVar5;
    (**(code **)(*(int *)(param_2 + 4) + 0x4c))(param_2 + *(short *)(*(int *)(param_2 + 4) + 0x48));
    return;
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_2 + 0x10) = *param_3;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x20);
  (**(code **)(*(int *)(param_2 + 4) + 0x4c))(param_2 + *(short *)(*(int *)(param_2 + 4) + 0x48));
  return;
}

