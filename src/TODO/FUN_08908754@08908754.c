#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08908754(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8;
  return;
}

