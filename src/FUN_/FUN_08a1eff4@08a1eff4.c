#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1eff4(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_08afcf9c;
  puVar2 = *(uint **)(DAT_08afcf9c + 8);
  *puVar2 = ((param_1 << 4) >> 0x1c) << 0x10 | 0x9f000000 | param_2;
  *(uint **)(iVar1 + 8) = puVar2 + 2;
  puVar2[1] = param_1 & 0xffffff | 0x9e000000;
  DAT_08afcf8c = param_2;
  DAT_08afcf88 = param_1;
  return;
}

