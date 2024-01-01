#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886427c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < 6)) {
    uVar1 = 1;
    if (2 < (int)param_2) {
      uVar1 = 0x11;
    }
    return uVar1;
  }
  if (((int)param_2 >= 6) && ((int)param_2 < 9)) {
    return 2;
  }
  if (((int)param_2 >= 9) && ((int)param_2 < 0xc)) {
    return 2;
  }
  if (((int)param_2 >= 0xc) && ((int)param_2 < 0x12)) {
    uVar1 = 4;
    if (0xe < (int)param_2) {
      uVar1 = 0x14;
    }
    return uVar1;
  }
  if (((int)param_2 >= 0x12) && (uVar1 = 5, (int)param_2 < 0x14)) {
    if (param_2 == 0x13) {
      uVar1 = 0x15;
    }
    return uVar1;
  }
  if (((int)param_2 >= 0x14) && ((int)param_2 < 0x16)) {
    uVar1 = 6;
    if (param_2 == 0x15) {
      uVar1 = 0x16;
    }
    return uVar1;
  }
  if (param_2 == 0xa7) {
    return 3;
  }
  if (param_2 == 0x1f) {
    return 10;
  }
  if (param_2 == 0x86) {
    return 5;
  }
  if (param_2 != 0x87) {
    if (param_2 == 0x48) {
      return 1;
    }
    if (param_2 == 0xba) {
      return 3;
    }
    if (param_2 == 0x20) {
      return 1;
    }
    if ((((param_2 == 0x61) || (param_2 == 0x1d)) || (param_2 == 0x1e)) || (param_2 == 0x8b)) {
      return 4;
    }
    if (param_2 == 0x54) {
      return 2;
    }
    if ((0x1a < (int)param_2) && ((int)param_2 < 0x1f)) {
      return 3;
    }
    if (param_2 == 0x1a) {
      *(undefined4 *)(param_1 + 0x1cc) = 100;
      return 1;
    }
    if ((0x2b < (int)param_2) && ((int)param_2 < 0x2e)) {
      return 3;
    }
    if (param_2 == 0xb3) {
      return 1;
    }
    if ((0xb4 < (int)param_2) && ((int)param_2 < 0xb8)) {
      return 8;
    }
    if ((param_2 != 0x3f) && (param_2 != 0x44)) {
      uVar2 = 0;
      if (param_2 == 0xb8) {
        return 9;
      }
      puVar3 = &DAT_08a67852;
      do {
        uVar2 = uVar2 + 1;
        if ((uint)*puVar3 == (param_2 & 0xffff)) {
          return 2;
        }
        puVar3 = puVar3 + 1;
      } while (uVar2 < 7);
      return 1;
    }
    return 10;
  }
  return 3;
}

