#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void dl_write_viewport(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = (float)(param_2 + param_3) * 0.5;
  *(uint *)(param_1 + 0xd8) = param_2;
  *(uint *)(param_1 + 0xdc) = param_3;
  iVar4 = *(int *)(param_1 + 0xe0);
  uVar1 = param_3;
  uVar2 = param_2;
  if ((int)param_3 <= (int)param_2) {
    uVar1 = param_2;
    uVar2 = param_3;
  }
  puVar3 = *(uint **)(param_1 + 8);
  *puVar3 = (uint)(fVar5 - (float)param_2) >> 8 | 0x44000000;
  *(uint **)(param_1 + 8) = puVar3 + 4;
  puVar3[1] = (uint)(fVar5 + (float)iVar4) >> 8 | 0x47000000;
  puVar3[2] = uVar2 | 0xd6000000;
  puVar3[3] = uVar1 | 0xd7000000;
  return;
}

