#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1f11c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_08afcf9c;
  puVar2 = *(uint **)(DAT_08afcf9c + 8);
  *puVar2 = (uint)((float)param_3 * 0.5) >> 8 | 0x42000000;
  *(uint **)(iVar1 + 8) = puVar2 + 4;
  puVar2[1] = (uint)((float)param_4 * -0.5) >> 8 | 0x43000000;
  puVar2[2] = (uint)(float)param_1 >> 8 | 0x45000000;
  puVar2[3] = (uint)(float)param_2 >> 8 | 0x46000000;
  return;
}

