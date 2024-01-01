#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0892978c(int param_1,char param_2)

{
  undefined uVar1;
  float fVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x485) == '\x05') {
    return 1;
  }
  fVar2 = *(float *)(param_1 + 0x494) + 0.0625;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x494) = fVar2;
    *(float *)(param_1 + 0x48c) =
         *(float *)(param_1 + 0x490) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0)) * 0.7;
    if (1.0 <= fVar2) {
      *(undefined4 *)(param_1 + 0x48c) = 0x3f333333;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0x494) = fVar2;
    *(float *)(param_1 + 0x48c) = *(float *)(param_1 + 0x490) - fVar2 * fVar2 * 0.7;
    if (1.0 <= fVar2) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0x48c) = 0;
    }
  }
  return uVar1;
}

