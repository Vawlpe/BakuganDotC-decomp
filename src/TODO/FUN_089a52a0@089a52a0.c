#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a52a0(int param_1)

{
  float fVar1;
  
  if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
    fVar1 = 40.0;
  }
  else {
    fVar1 = 20.0;
  }
  if (DAT_08b01090 == '\0') {
    DAT_08b01094 = DAT_08b01094 + 0.3 / fVar1;
    if (0.3 <= DAT_08b01094) {
      DAT_08b01094 = 0.3;
      DAT_08b01090 = '\x01';
    }
  }
  else {
    DAT_08b01094 = DAT_08b01094 - 0.3 / fVar1;
    if (DAT_08b01094 <= 0.0) {
      DAT_08b01094 = 0.0;
      DAT_08b01090 = '\0';
    }
  }
  fVar1 = 0.3 - DAT_08b01094;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(float *)(param_1 + 0xc0) = fVar1;
  *(float *)(param_1 + 0xc4) = fVar1;
  return;
}

