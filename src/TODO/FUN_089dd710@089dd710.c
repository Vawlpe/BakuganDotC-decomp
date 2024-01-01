#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089dd710(undefined4 *param_1,undefined (*param_2) [16],undefined (*param_3) [16])

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  vpfxt(2,3,2,3);
  auVar2 = vmul_q(*param_3,*param_2);
  uVar1 = vadd_p(auVar2._0_8_,*(undefined8 *)*param_2);
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulonglong)uVar1 >> 0x20);
  param_1[2] = auVar2._8_4_;
  param_1[3] = auVar2._12_4_;
  return param_1;
}

