#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886454c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x18) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x398) < 5) && (param_2 == 0xb3)) {
    return 1;
  }
  if (param_2 == 0xb8) {
    return 1;
  }
  if (param_2 != 0x53) {
    if (param_2 == 0x20) {
      return 1;
    }
    if (((0x22 < param_2) && (param_2 < 0xb3)) &&
       (iVar1 = FUN_0888c0c8(param_2 + -0x23), iVar1 != 0)) {
      return 1;
    }
    if (param_2 == 0x94) {
      return 1;
    }
  }
  return 0;
}

