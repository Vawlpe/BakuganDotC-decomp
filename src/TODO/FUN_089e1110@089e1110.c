#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e1110(uint **param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar3 = param_1[4];
  uVar6 = (uint)*(ushort *)(param_1[9] + 5) & ~(uint)*(ushort *)(puVar3 + 0xb);
  uVar1 = (uint)*(ushort *)((int)param_1[7] + 0x16) & ~(uint)*(ushort *)(puVar3 + 0xb);
  puVar2 = (uint *)(((uint)*(ushort *)((int)puVar3 + 0x2e) & ~uVar6 |
                    *(ushort *)((int)param_1[9] + 0x16) & uVar6) & ~uVar1 |
                   *(ushort *)(param_1[7] + 6) & uVar1);
  puVar4 = param_1[0xc];
  param_1[0xc] = puVar2;
  uVar1 = 0xffffffff;
  if (puVar4 != (uint *)0xffffffff) {
    uVar1 = (uint)puVar2 ^ (uint)puVar4;
  }
  uVar1 = uVar1 & puVar3[0xc];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 1) != 0 | 0x17000000;
    }
    if ((uVar1 & 2) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 2) != 0 | 0x1f000000;
    }
    if ((uVar1 & 4) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 4) != 0 | 0x1e000000;
    }
    if ((uVar1 & 8) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 8) != 0 | 0x1d000000;
    }
    if ((uVar1 & 0x10) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 0x10) != 0 | 0x23000000;
    }
    if ((uVar1 & 0x20) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 0x20) == 0 | 0xe7000000;
    }
    if ((uVar1 & 0x40) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 0x40) != 0 | 0x22000000;
    }
    if ((uVar1 & 0x80) != 0) {
      uVar6 = 0xff;
      if (((uint)puVar2 & 0x80) != 0) {
        uVar6 = 0;
      }
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = uVar6 | 0xe9000000;
    }
    if ((uVar1 & 0x100) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 0x100) != 0 | 0x9b000000;
    }
    if ((uVar1 & 0x200) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 0x200) != 0 | 0x51000000;
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = ((uint)puVar2 & 0x200) == 0 | 0x38000000;
    }
    if ((uVar1 & 0xc00) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = (uint)(((uint)puVar2 & 0x800) != 0) << 8 | 0xc9000000 |
                (uint)(((uint)puVar2 & 0x400) == 0);
    }
    if ((uVar1 & 0x3000) != 0) {
      uVar6 = 4;
      uVar5 = (uint)(((uint)puVar2 & 0x1000) != 0);
      if (((uint)puVar2 & 0x2000) != 0) {
        uVar6 = 6;
      }
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = uVar5 << 8 | 0xc6000000 | uVar5 | uVar6;
    }
    if ((uVar1 & 0xc000) != 0) {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = (uint)(((uint)puVar2 & 0x8000) == 0) << 8 | 0xc7000000 |
                (uint)(((uint)puVar2 & 0x4000) == 0);
    }
  }
  return;
}

