#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c92ac(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  float fVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined auStack_30 [16];
  
  FUN_088ccfc0(0x3f4ccccd,param_1,&local_50,&local_40,(undefined (*) [12])(param_1 + 0x20),
               param_1 + 0x10);
  auVar1._4_4_ = uStack_4c;
  auVar1._0_4_ = local_50;
  auVar1._8_4_ = uStack_48;
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_1 + 0x20));
  fVar2 = (float)vdot_t(auVar1,auVar1);
  if (fVar2 < 2500.0) {
    FUN_088c6ce4(auStack_30);
    FUN_088c6d3c(auStack_30,param_2,param_3,&local_50,param_1 + 0x10);
    FUN_088c6cec(auStack_30,2);
  }
  else {
    *param_2 = local_50;
    param_2[1] = uStack_4c;
    param_2[2] = uStack_48;
    param_2[3] = uStack_44;
  }
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  return;
}

