#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089a97ec(char param_1)

{
  undefined uVar1;
  float fVar2;
  
  uVar1 = 0;
  if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
    fVar2 = 0.1;
  }
  else {
    fVar2 = 0.2;
  }
  if (param_1 == '\0') {
    *(float *)(DAT_08b01040 + 0xbc) = *(float *)(DAT_08b01040 + 0xbc) + fVar2;
    if (1.0 < *(float *)(DAT_08b01040 + 0xbc)) {
      *(undefined4 *)(DAT_08b01040 + 0xbc) = 0x3f800000;
    }
    if (DAT_08b0104c < 2) {
      if (DAT_08b0104c == 0) {
        *(float *)(DAT_08b01040 + 0x94) = *(float *)(DAT_08b01040 + 0x94) - fVar2;
        FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                     *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
        if (*(float *)(DAT_08b01040 + 0x94) <= 0.1) {
          FUN_089f4cb8();
          DAT_08b0104c = DAT_08b0104c + 1;
        }
      }
      else {
        *(float *)(DAT_08b01040 + 0x94) = *(float *)(DAT_08b01040 + 0x94) + fVar2;
        FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                     *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
        if (1.0 <= *(float *)(DAT_08b01040 + 0x94)) {
          DAT_08b0104c = DAT_08b0104c + 1;
        }
      }
    }
    else if (DAT_08b0104c < 3) {
      *(float *)(DAT_08b01040 + 0x94) = *(float *)(DAT_08b01040 + 0x94) - fVar2;
      FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                   *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
      if (*(float *)(DAT_08b01040 + 0x94) <= 0.1) {
        FUN_089f4cb8();
        DAT_08b0104c = DAT_08b0104c + 1;
      }
    }
    else if (DAT_08b0104c < 4) {
      *(float *)(DAT_08b01040 + 0x94) = *(float *)(DAT_08b01040 + 0x94) + fVar2;
      FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                   *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
      if (1.0 <= *(float *)(DAT_08b01040 + 0x94)) {
        uVar1 = 1;
        DAT_08b0104c = DAT_08b0104c + 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    *(float *)(DAT_08b01040 + 0x94) = *(float *)(DAT_08b01040 + 0x94) - 0.125;
    FUN_089f4954(*(undefined4 *)(DAT_08b01040 + 0x90),*(undefined4 *)(DAT_08b01040 + 0x94),
                 *(undefined4 *)(DAT_08b01040 + 0x9c),DAT_08b01040,0);
    *(float *)(DAT_08b01040 + 0xbc) = *(float *)(DAT_08b01040 + 0xbc) - 0.125;
    if (*(float *)(DAT_08b01040 + 0xbc) <= 0.0) {
      *(undefined4 *)(DAT_08b01040 + 0xbc) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

