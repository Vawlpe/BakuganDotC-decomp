#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fc600(undefined4 param_1,int param_2,undefined (*param_3) [12],undefined (*param_4) [12]
                 ,undefined4 param_5)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 in_V7D;
  
  FUN_088fc5b8(param_2,param_4,param_5);
  auVar1 = vscl_t(*param_4,param_1);
  *(int *)(param_2 + 0x50) = auVar1._0_4_;
  *(int *)(param_2 + 0x54) = auVar1._4_4_;
  *(int *)(param_2 + 0x58) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x5c) = in_V7D;
  uVar2 = *(undefined4 *)param_3[1];
  auVar1 = vadd_t(*param_3,auVar1);
  *(int *)*param_3 = auVar1._0_4_;
  *(int *)(*param_3 + 4) = auVar1._4_4_;
  *(int *)(*param_3 + 8) = auVar1._8_4_;
  *(undefined4 *)param_3[1] = uVar2;
  return;
}

