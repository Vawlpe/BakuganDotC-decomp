#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088483fc(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  float fVar3;
  float fVar4;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x2d0),*(undefined (*) [12])(param_1 + 0x2b0));
  auVar2 = vsub_t(*(undefined (*) [12])(param_1 + 0x2b0),*(undefined (*) [12])(param_1 + 0x50));
  fVar3 = (float)atan2f(auVar2._8_4_,auVar2._0_4_);
  fVar4 = (float)atan2f(auVar1._8_4_,auVar1._0_4_);
  fVar3 = (fVar3 - fVar4) - (float)(int)((fVar3 - fVar4) * 0.3183099) * 6.283185;
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + 6.283185;
  }
  if (3.141593 <= fVar3) {
    fVar3 = 6.283185 - fVar3;
  }
  else {
    fVar3 = -fVar3;
  }
  return fVar3 < 0.0;
}

