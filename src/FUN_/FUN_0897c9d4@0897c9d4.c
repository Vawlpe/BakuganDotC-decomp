#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0897c9d4(int param_1,char param_2,uint param_3)

{
  undefined uVar1;
  float fVar2;
  
  param_1 = param_1 + (param_3 & 0xff) * 0x10;
  fVar2 = *(float *)(param_1 + 0xefc) + 0.0625;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0xefc) = fVar2;
    *(float *)(param_1 + 0xef4) =
         *(float *)(param_1 + 0xef8) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0)) * 0.7;
    if (1.0 <= fVar2) {
      *(undefined4 *)(param_1 + 0xef4) = 0x3f333333;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0xefc) = fVar2;
    *(float *)(param_1 + 0xef4) = *(float *)(param_1 + 0xef8) - fVar2 * fVar2 * 0.7;
    if (1.0 <= fVar2) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0xef4) = 0;
    }
  }
  return uVar1;
}

