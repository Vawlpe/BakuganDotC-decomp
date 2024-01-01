#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1f2a4(float param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *(uint **)(DAT_08afcf9c + 8);
  uVar3 = (uint)(param_1 * 16.0);
  *(uint **)(DAT_08afcf9c + 8) = puVar2 + 1;
  bVar1 = 0x7f < (int)uVar3;
  if ((int)uVar3 < -0x80) {
    uVar3 = 0xffffff80;
  }
  if (bVar1) {
    uVar3 = 0x7f;
  }
  *puVar2 = (uVar3 & 0xff) << 0x10 | param_2 | 0xc8000000;
  return;
}

