#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void dl_write_scissor_region(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_3 + param_5 + -1;
  uVar3 = (param_2 + param_4) - 1;
  uVar4 = iVar2 * 0x400 | uVar3;
  *(uint *)(param_1 + 0xac) = param_2;
  *(int *)(param_1 + 0xb0) = param_3;
  *(uint *)(param_1 + 0xb4) = uVar3;
  *(int *)(param_1 + 0xb8) = iVar2;
  if (*(int *)(param_1 + 0xa8) != 0) {
    puVar1 = *(uint **)(param_1 + 8);
    *puVar1 = param_3 << 10 | param_2 | 0xd4000000;
    *(uint **)(param_1 + 8) = puVar1 + 4;
    puVar1[1] = uVar4 | 0xd5000000;
    puVar1[2] = 0x15000000;
    puVar1[3] = uVar4 | 0x16000000;
  }
  return;
}

