#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1ec10(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = DAT_08afcf9c;
  puVar5 = *(uint **)(DAT_08afcf9c + 8);
  *puVar5 = (param_1[3] & 0xf) << 0xc | (param_1[2] & 0xf) << 8 | (param_1[1] & 0xf) << 4 |
            *param_1 & 0xf | 0xe2000000;
  puVar5[1] = (param_1[7] & 0xf) << 0xc | (param_1[6] & 0xf) << 8 | (param_1[5] & 0xf) << 4 |
              param_1[4] & 0xf | 0xe3000000;
  puVar5[2] = (param_1[0xb] & 0xf) << 0xc | (param_1[10] & 0xf) << 8 | (param_1[9] & 0xf) << 4 |
              param_1[8] & 0xf | 0xe4000000;
  uVar2 = param_1[0xf];
  uVar4 = param_1[0xe];
  uVar3 = param_1[0xd];
  uVar6 = param_1[0xc];
  *(uint **)(iVar1 + 8) = puVar5 + 4;
  puVar5[3] = (uVar2 & 0xf) << 0xc | (uVar4 & 0xf) << 8 | (uVar3 & 0xf) << 4 | uVar6 & 0xf |
              0xe5000000;
  return;
}

