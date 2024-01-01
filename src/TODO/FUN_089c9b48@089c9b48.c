#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089c9b48(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_1 & 0x1f);
  return (*(uint *)(param_2 + (param_1 >> 5) * 4) & uVar1) == uVar1;
}

