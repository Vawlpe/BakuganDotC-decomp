#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08907920(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 2) {
    if (-1 < param_2) {
      if (0 < param_2) {
        return 1;
      }
      if (param_3 < 6) {
        if (param_3 == 1) {
          return 4;
        }
        if (param_3 == 2) {
          return 5;
        }
        if (param_3 == 3) {
          return 6;
        }
        if (param_3 == 4) {
          return 7;
        }
        if (param_3 == 5) {
          return 8;
        }
        return 3;
      }
    }
  }
  else if (param_2 == 0xff) {
    uVar1 = 2;
  }
  return uVar1;
}

