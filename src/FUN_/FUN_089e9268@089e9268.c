#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e9268(int param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_089e8894(param_2 + 0x10,(undefined (*) [16])(param_1 + 0x10),&DAT_08ac5d68,
                              &DAT_08b025e0);
  fVar4 = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x40);
  auVar1._12_4_ = DAT_08b025ec;
  auVar1._8_4_ = DAT_08b025e8;
  auVar1._4_4_ = DAT_08b025e4;
  auVar1._0_4_ = DAT_08b025e0;
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x10),auVar1);
  auVar1 = vscl_q(auVar1,0x3f000000);
  auVar2._12_4_ = DAT_08b025ec;
  auVar2._8_4_ = DAT_08b025e8;
  auVar2._4_4_ = DAT_08b025e4;
  auVar2._0_4_ = DAT_08b025e0;
  auVar1 = vadd_q(auVar2,auVar1);
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  param_3[3] = auVar1._12_4_;
  return fVar3 <= fVar4 * fVar4;
}

