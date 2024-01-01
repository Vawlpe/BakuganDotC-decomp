#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e9858(undefined (*param_1) [12],int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  float fVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  
  auVar1 = vsub_t(*param_1,*(undefined (*) [12])(param_2 + 0x10));
  auVar2 = vsub_t(*(undefined (*) [12])(param_2 + 0x10),*(undefined (*) [12])(param_1[1] + 4));
  auVar3._8_4_ = in_V7A;
  auVar3._4_4_ = in_V76;
  auVar3._0_4_ = in_V72;
  auVar1 = vmax_t(auVar1,auVar3);
  auVar4._8_4_ = in_V7A;
  auVar4._4_4_ = in_V76;
  auVar4._0_4_ = in_V72;
  auVar2 = vmax_t(auVar2,auVar4);
  auVar1 = vadd_t(auVar2,auVar1);
  fVar5 = (float)vdot_t(auVar1,auVar1);
  return fVar5 <= *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20);
}

