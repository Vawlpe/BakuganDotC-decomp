#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088d9474(float param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088e1948();
  param_1 = param_1 + 3.141593;
  if (3.141593 < param_1) {
    param_1 = param_1 - 6.283185;
  }
  else if (param_1 <= -3.141593) {
    param_1 = param_1 + 6.283185;
  }
  param_1 = *(float *)(iVar1 + 0x34) - param_1;
  param_1 = param_1 - (float)(int)(param_1 * 0.3183099) * 6.283185;
  if (param_1 < 0.0) {
    param_1 = param_1 + 6.283185;
  }
  if (3.141593 <= param_1) {
    param_1 = 6.283185 - param_1;
  }
  else {
    param_1 = -param_1;
  }
  uVar2 = 1;
  if (((0.7853982 <= ABS(param_1)) && (uVar2 = 0, ABS(param_1) <= 2.356194)) &&
     (uVar2 = 2, 0.0 < param_1)) {
    uVar2 = 3;
  }
  return uVar2;
}

