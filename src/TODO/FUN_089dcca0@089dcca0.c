#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dcca0(uint **param_1)

{
  uint *puVar1;
  uint **ppuVar2;
  uint uVar3;
  uint local_40;
  uint local_3c;
  uint local_38 [3];
  
  puVar1 = param_1[9];
  if (param_1[0x17] == (uint *)0xffffffff) {
    **param_1 = puVar1[0xb] & 0xffffff | 0x56000000;
    (*param_1)[1] = puVar1[0xc] & 0xffffff | 0x57000000;
    (*param_1)[2] = puVar1[0xe] & 0xffffff | 0x55000000;
    (*param_1)[3] = puVar1[0xe] >> 0x18 | 0x58000000;
    (*param_1)[4] = puVar1[0xf] >> 8 | 0x5b000000;
    *param_1 = *param_1 + 5;
  }
  else {
    local_40 = puVar1[0xb];
    ppuVar2 = param_1 + 0x17;
    local_3c = puVar1[0xc];
    local_38[0] = puVar1[0xe];
    FUN_089dd730(&local_40,&local_40,ppuVar2);
    FUN_089dd730(&local_3c,&local_3c,ppuVar2);
    FUN_089dd730(local_38,local_38,ppuVar2);
    puVar1 = *param_1;
    *param_1 = puVar1 + 1;
    *puVar1 = local_40 & 0xffffff | 0x56000000;
    puVar1 = *param_1;
    *param_1 = puVar1 + 1;
    *puVar1 = local_3c & 0xffffff | 0x57000000;
    puVar1 = *param_1;
    *param_1 = puVar1 + 1;
    *puVar1 = local_38[0] & 0xffffff | 0x55000000;
    puVar1 = *param_1;
    *param_1 = puVar1 + 1;
    *puVar1 = local_38[0] >> 0x18 | 0x58000000;
    puVar1 = *param_1;
    uVar3 = param_1[9][0xf];
    *param_1 = puVar1 + 1;
    *puVar1 = uVar3 >> 8 | 0x5b000000;
  }
  return;
}

