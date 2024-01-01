#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1f924(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_08afcf90 = 0x1e0;
  DAT_08afcf60 = 0xffffffff;
  DAT_08afcf58 = 0;
  DAT_08afcf7c = 0x1e0;
  DAT_08afcf80 = 0;
  iVar1 = 4;
  DAT_08afcf84 = 0;
  DAT_08afcf88 = 0;
  DAT_08afcf8c = 0;
  DAT_08afcf5c = 0;
  DAT_08afcf64 = 0;
  DAT_08afcf9c = 0;
  DAT_08afcf98 = 0;
  DAT_08afcf78 = 1;
  puVar2 = &DAT_08afcfa0;
  DAT_08afcf94 = 0x110;
  puVar3 = &DAT_08afd098;
  do {
    iVar1 = iVar1 + -1;
    *puVar2 = 4;
    puVar2[4] = 0;
    puVar2[0x25] = 100;
    puVar2[0x26] = 0;
    puVar2[0x27] = 1;
    puVar2[0x28] = 0x1e0;
    puVar2[0x29] = 0x110;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x36] = 0;
    puVar2[0x37] = 1;
    puVar2[0x38] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    puVar2[0x33] = 0;
    puVar2[0x34] = 0;
    puVar2[0x35] = 0xffff;
    puVar2[0x39] = 0;
    puVar2[0x3b] = 0;
    puVar2[0x3a] = 0;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = 0;
    puVar2 = puVar2 + 0x3f;
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 0x3f;
  } while (-1 < iVar1);
  DAT_08afcf24 = 0;
  DAT_08afcf28 = 0;
  return;
}

