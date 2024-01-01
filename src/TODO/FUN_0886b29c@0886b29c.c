#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886b29c(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  float fVar2;
  
  if (param_2 != (undefined2 *)0x0) {
    *(undefined *)(param_1 + 0x5e8) = 1;
    *(undefined *)(param_1 + 0x5e9) = 0;
    *(undefined *)(param_1 + 0x5ea) = 0;
    *(char *)(param_1 + 0x5eb) = (char)param_2[1];
    uVar1 = *param_2;
    *(undefined2 *)(param_1 + 0x5ee) = 0;
    *(undefined2 *)(param_1 + 0x5ec) = uVar1;
    *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 2);
    fVar2 = *(float *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x5f8) = 0;
    *(float *)(param_1 + 0x5f4) = fVar2 * 0.8;
  }
  return;
}

