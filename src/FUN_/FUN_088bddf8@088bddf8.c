#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088bddf8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    if ((param_2 == 0) && (param_3 == 10)) {
      return 1;
    }
    if ((param_2 == 1) && (param_3 == 10)) {
      return 1;
    }
  }
  if (param_1 == 1) {
    if ((param_2 == 0) && (param_3 == 9)) {
      return 1;
    }
    if ((param_2 == 1) && (param_3 == 0x15)) {
      return 1;
    }
  }
  if (param_1 == 2) {
    if ((param_2 == 0) && (param_3 == 0x12)) {
      return 1;
    }
    if ((param_2 == 1) && (param_3 == 0x10)) {
      return 1;
    }
  }
  if (param_1 == 3) {
    if ((param_2 == 0) && (param_3 == 0x1f)) {
      return 1;
    }
    if ((param_2 == 2) && (param_3 == 10)) {
      return 1;
    }
  }
  if (param_1 == 4) {
    if ((param_2 == 0) && (param_3 == 0xd)) {
      return 1;
    }
    if ((param_2 == 1) && (param_3 == 6)) {
      return 1;
    }
  }
  if (((param_1 == 5) && (param_2 == 0)) && (param_3 == 9)) {
    uVar1 = 1;
  }
  return uVar1;
}

