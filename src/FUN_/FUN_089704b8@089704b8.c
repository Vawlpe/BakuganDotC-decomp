#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089704b8(int param_1,char param_2)

{
  undefined uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xb98) + 0.0625;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0xb98) = fVar2;
    *(float *)(param_1 + 0xb90) =
         *(float *)(param_1 + 0xb94) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0)) * 0.8;
    if (1.0 <= fVar2) {
      *(undefined4 *)(param_1 + 0xb90) = 0x3f4ccccd;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0xb98) = fVar2;
    *(float *)(param_1 + 0xb90) = *(float *)(param_1 + 0xb94) - fVar2 * fVar2 * 0.8;
    if (1.0 <= fVar2) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0xb90) = 0;
    }
  }
  return uVar1;
}

