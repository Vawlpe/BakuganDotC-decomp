#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08904bc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0x28 < param_2) && (param_2 < 0x49)) {
    return 1;
  }
  if ((0x2d6 < param_2) && (param_2 < 0x2f7)) {
    return 1;
  }
  if ((0x48 < param_2) && (param_2 < 0x89)) {
    return 2;
  }
  if ((param_2 >= 0x89) && (param_2 < 0x151)) {
    return 3;
  }
  if ((0x180 < param_2) && (param_2 < 0x1e5)) {
    uVar1 = 4;
  }
  return uVar1;
}

