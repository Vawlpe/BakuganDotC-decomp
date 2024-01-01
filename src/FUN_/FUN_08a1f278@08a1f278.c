#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1f278(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_08afcf9c;
  puVar2 = *(uint **)(DAT_08afcf9c + 8);
  *puVar2 = param_2 << 8 | param_1 | 0xc6000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

