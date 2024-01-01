#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088abb68(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x154) == 0) {
    return 0;
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x154) + 0x32);
  if (sVar1 < 0xbb) {
    if (sVar1 < 0x2e) {
      if (sVar1 < 0x2d) {
        return 0;
      }
    }
    else if (sVar1 != 0x55) {
      return 0;
    }
  }
  else if (sVar1 < 0xcf) {
    if (0xcc < sVar1) {
      return 0;
    }
  }
  else if (0xdf < sVar1) {
    return 0;
  }
  return 1;
}

