#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dce80(uint **param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = param_1[9];
  uVar5 = 0xffffffff;
  bVar3 = *(byte *)(puVar6 + 4);
  if (*(byte *)((int)puVar6 + 0x11) == 0) {
    uVar5 = 0;
  }
  uVar4 = 0xffffffff;
  if (*(byte *)((int)puVar6 + 0x12) == 0) {
    uVar4 = 0;
  }
  cVar1 = (&DAT_08aa2f8d)[*(byte *)((int)puVar6 + 0x11)];
  cVar2 = (&DAT_08aa2f8d)[*(byte *)((int)puVar6 + 0x12)];
  puVar6 = *param_1;
  *param_1 = puVar6 + 1;
  *puVar6 = (int)cVar2 << 4 | (int)cVar1 | (uint)bVar3 << 8 | 0xdf000000;
  puVar6 = *param_1;
  *param_1 = puVar6 + 1;
  *puVar6 = uVar5 & 0xffffff | 0xe0000000;
  puVar6 = *param_1;
  *param_1 = puVar6 + 1;
  *puVar6 = uVar4 & 0xffffff | 0xe1000000;
  return;
}

