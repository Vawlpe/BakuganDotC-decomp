#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0890929c(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x18) = param_2[1];
  *(undefined2 *)(param_1 + 0x1a) = *param_2;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x10));
  return iVar1 + 4;
}

