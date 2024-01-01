#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0898ef00(int param_1,char param_2,uint param_3)

{
  undefined uVar1;
  float fVar2;
  
  param_1 = param_1 + (param_3 & 0xff) * 0x10;
  fVar2 = *(float *)(param_1 + 0xe94) + 0.0625;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0xe94) = fVar2;
    *(float *)(param_1 + 0xe8c) =
         *(float *)(param_1 + 0xe90) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0)) * 0.7;
    if (1.0 <= fVar2) {
      *(undefined4 *)(param_1 + 0xe8c) = 0x3f333333;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0xe94) = fVar2;
    *(float *)(param_1 + 0xe8c) = *(float *)(param_1 + 0xe90) - fVar2 * fVar2 * 0.7;
    if (1.0 <= fVar2) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0xe8c) = 0;
    }
  }
  return uVar1;
}

