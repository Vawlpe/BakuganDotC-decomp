#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a32460(undefined (*param_1) [12])

{
  undefined auVar1 [12];
  undefined4 in_V7D;
  
  auVar1 = vadd_t(*param_1,*(undefined (*) [12])(param_1[1] + 4));
  auVar1 = vscl_t(auVar1,0x3f000000);
  DAT_08b00180 = auVar1._0_4_;
  DAT_08b00184 = auVar1._4_4_;
  DAT_08b00188 = auVar1._8_4_;
  DAT_08b0018c = in_V7D;
  return;
}

