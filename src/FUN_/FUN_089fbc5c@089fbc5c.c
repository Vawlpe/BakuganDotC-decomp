#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fbc5c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
  *(undefined *)(param_1 + 0x39) = 1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      goto LAB_089fbc9c;
    }
    *(undefined *)(param_1 + 0x39) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
LAB_089fbc9c:
  *(int *)(param_1 + 0x3c) = param_2;
  FUN_089bb790(uVar1);
  return;
}

