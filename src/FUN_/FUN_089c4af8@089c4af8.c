#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c4af8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_089bb728(*param_1);
  if (DAT_08ac563c != '\0') {
    if (1 < param_2) {
      uVar1 = *param_1;
      goto LAB_089c4b38;
    }
    param_2 = param_2 + 3;
  }
  uVar1 = *param_1;
LAB_089c4b38:
  param_1[3] = param_2;
  FUN_089bb790(uVar1);
  return;
}

