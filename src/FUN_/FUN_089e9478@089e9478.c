#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e9478(int param_1,undefined4 param_2,undefined (*param_3) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  float fVar4;
  undefined4 uVar5;
  undefined4 in_V7D;
  undefined4 uVar6;
  
  fVar4 = (float)FUN_089e8824(param_1 + 0x10);
  if (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40) < fVar4) {
    return 0;
  }
  auVar1._8_4_ = DAT_08b025f8;
  auVar1._4_4_ = DAT_08b025f4;
  auVar1._0_4_ = DAT_08b025f0;
  auVar2._8_4_ = DAT_08b025e8;
  auVar2._4_4_ = DAT_08b025e4;
  auVar2._0_4_ = DAT_08b025e0;
  auVar1 = vsub_t(auVar1,auVar2);
  uVar5 = vdot_t(auVar1,auVar1);
  uVar6 = vcmp_s(8,uVar5,DAT_08b025e0);
  vrsq_s(uVar5);
  uVar5 = vcmovt_s(in_V7D,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar5);
  auVar1 = vscl_t(auVar1,fVar4);
  *(int *)*param_3 = auVar1._0_4_;
  *(int *)(*param_3 + 4) = auVar1._4_4_;
  *(int *)(*param_3 + 8) = auVar1._8_4_;
  *(undefined4 *)param_3[1] = in_V7D;
  uVar5 = *(undefined4 *)param_3[1];
  auVar3._8_4_ = DAT_08b025e8;
  auVar3._4_4_ = DAT_08b025e4;
  auVar3._0_4_ = DAT_08b025e0;
  auVar1 = vadd_t(*param_3,auVar3);
  *(int *)*param_3 = auVar1._0_4_;
  *(int *)(*param_3 + 4) = auVar1._4_4_;
  *(int *)(*param_3 + 8) = auVar1._8_4_;
  *(undefined4 *)param_3[1] = uVar5;
  return 1;
}

