#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void dl_write_blend_fixed(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_08afcf9c;
  puVar2 = *(uint **)(DAT_08afcf9c + 8);
  *puVar2 = param_1 << 8 | param_3 << 4 | param_2 | 0xdf000000;
  *(uint **)(iVar1 + 8) = puVar2 + 3;
  puVar2[1] = param_4 & 0xffffff | 0xe0000000;
  puVar2[2] = param_5 & 0xffffff | 0xe1000000;
  return;
}

