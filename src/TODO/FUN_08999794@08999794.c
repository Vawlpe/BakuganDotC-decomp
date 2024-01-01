#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08999794(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0x2210) = *(undefined4 *)(param_1 + 0x21d0);
  *(undefined4 *)(param_1 + 0x2214) = *(undefined4 *)(param_1 + 0x21d4);
  *(undefined4 *)(param_1 + 0x2218) = *(undefined4 *)(param_1 + 0x21d8);
  *(undefined4 *)(param_1 + 0x221c) = *(undefined4 *)(param_1 + 0x21dc);
  *(float *)(param_1 + 0x2240) = *(float *)(param_1 + 0x2240) + 1.0 / *(float *)(param_1 + 0x2244);
  if (*(char *)(param_1 + 0x224a) == '\0') {
    fVar2 = *(float *)(param_1 + 0x2240) - 1.0;
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21f0) -
                         (1.0 - fVar2 * fVar2) * *(float *)(param_1 + 0x2230));
  }
  else {
    fVar2 = *(float *)(param_1 + 0x2240) - 1.0;
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21f0) +
                         (1.0 - fVar2 * fVar2) * *(float *)(param_1 + 0x2230));
  }
  *(undefined4 *)(param_1 + 0x21d0) = uVar1;
  if (*(char *)(param_1 + 0x224b) == '\0') {
    fVar2 = *(float *)(param_1 + 0x2240) - 1.0;
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21f4) -
                         (1.0 - fVar2 * fVar2) * *(float *)(param_1 + 0x2234));
  }
  else {
    fVar2 = *(float *)(param_1 + 0x2240) - 1.0;
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21f4) +
                         (1.0 - fVar2 * fVar2) * *(float *)(param_1 + 0x2234));
  }
  *(undefined4 *)(param_1 + 0x21d4) = uVar1;
  if (*(char *)(param_1 + 0x224c) == '\0') {
    fVar2 = *(float *)(param_1 + 0x2240) - 1.0;
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21f8) -
                         (1.0 - fVar2 * fVar2) * *(float *)(param_1 + 0x2238));
  }
  else {
    fVar2 = *(float *)(param_1 + 0x2240) - 1.0;
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21f8) +
                         (1.0 - fVar2 * fVar2) * *(float *)(param_1 + 0x2238));
  }
  *(undefined4 *)(param_1 + 0x21d8) = uVar1;
  if (*(float *)(param_1 + 0x2240) < 1.0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x21d0) = *(undefined4 *)(param_1 + 0x2220);
  *(undefined4 *)(param_1 + 0x21d4) = *(undefined4 *)(param_1 + 0x2224);
  *(undefined4 *)(param_1 + 0x21d8) = *(undefined4 *)(param_1 + 0x2228);
  return 1;
}

