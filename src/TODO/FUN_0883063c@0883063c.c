#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0883063c(float param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = param_2 + 0.7853982;
  param_2 = param_2 - 0.7853982;
  uVar1 = 0;
  if (3.141593 < fVar2) {
    fVar2 = fVar2 - 6.283185;
  }
  else if (fVar2 <= -3.141593) {
    fVar2 = fVar2 + 6.283185;
  }
  if (3.141593 < param_2) {
    param_2 = param_2 - 6.283185;
  }
  else if (param_2 <= -3.141593) {
    param_2 = param_2 + 6.283185;
  }
  if ((param_1 < fVar2) && (param_2 < param_1)) {
    uVar1 = 1;
  }
  return uVar1;
}

