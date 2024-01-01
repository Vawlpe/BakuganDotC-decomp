#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a0f64c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  uVar3 = 0;
  if (uVar1 < 2) {
    uVar2 = uVar2 | 0x100000;
    uVar3 = 0xff;
    goto LAB_08a0f674;
  }
  if (uVar1 == 4) {
LAB_08a0f770:
    uVar3 = 0xff;
    uVar2 = 0;
  }
  else {
    if (uVar1 == 2) {
      uVar2 = 0;
      goto LAB_08a0f674;
    }
    if (uVar2 == 0) goto LAB_08a0f674;
    uVar1 = param_1[2];
    if ((int)uVar1 < -0x7e) {
      uVar1 = -uVar1 - 0x7e;
      if ((int)uVar1 < 0x1a) {
        uVar2 = uVar2 >> (uVar1 & 0x1f) | (uint)((uVar2 & (1 << (uVar1 & 0x1f)) - 1U) != 0);
      }
      else {
        uVar2 = 0;
      }
      if ((uVar2 & 0x7f) == 0x40) {
        if ((uVar2 & 0x80) != 0) {
          uVar2 = uVar2 + 0x40;
        }
      }
      else {
        uVar2 = uVar2 + 0x3f;
      }
      if (0x3fffffff < uVar2) {
        uVar3 = 1;
      }
    }
    else {
      if (0x7f < (int)uVar1) goto LAB_08a0f770;
      uVar3 = uVar1 + 0x7f;
      if ((uVar2 & 0x7f) == 0x40) {
        if ((uVar2 & 0x80) != 0) {
          uVar2 = uVar2 + 0x40;
        }
      }
      else {
        uVar2 = uVar2 + 0x3f;
      }
      if (-1 < (int)uVar2) {
        uVar2 = uVar2 >> 7;
        goto LAB_08a0f674;
      }
      uVar2 = uVar2 >> 1;
      uVar3 = uVar1 + 0x80;
    }
    uVar2 = uVar2 >> 7;
  }
LAB_08a0f674:
  return uVar2 & 0x7fffff | (uVar3 & 0xff) << 0x17 | param_1[1] << 0x1f;
}

