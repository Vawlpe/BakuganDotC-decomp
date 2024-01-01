#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e96f8(int param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  float fVar4;
  float fVar5;
  
  fVar4 = (float)FUN_089e885c(param_1 + 0x10,param_2 + 0x10);
  fVar5 = *(float *)(param_1 + 0x40) + *(float *)(param_2 + 0x40);
  auVar1._12_4_ = DAT_08b025fc;
  auVar1._8_4_ = DAT_08b025f8;
  auVar1._4_4_ = DAT_08b025f4;
  auVar1._0_4_ = DAT_08b025f0;
  auVar2._12_4_ = DAT_08b025ec;
  auVar2._8_4_ = DAT_08b025e8;
  auVar2._4_4_ = DAT_08b025e4;
  auVar2._0_4_ = DAT_08b025e0;
  auVar1 = vsub_q(auVar1,auVar2);
  auVar1 = vscl_q(auVar1,0x3f000000);
  auVar3._12_4_ = DAT_08b025ec;
  auVar3._8_4_ = DAT_08b025e8;
  auVar3._4_4_ = DAT_08b025e4;
  auVar3._0_4_ = DAT_08b025e0;
  auVar1 = vadd_q(auVar3,auVar1);
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  param_3[3] = auVar1._12_4_;
  return fVar4 <= fVar5 * fVar5;
}

