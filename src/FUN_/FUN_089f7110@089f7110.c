#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_089f7110(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xad) != '\0') {
    param_3 = 0;
  }
  uVar1 = *(int *)(param_1 + 0xb0) + param_3 * 0x60;
  *param_2 = (uVar1 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  param_2[1] = uVar1 & 0xffffff | 0xa000000;
  return param_2 + 2;
}

