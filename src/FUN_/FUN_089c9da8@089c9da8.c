#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089c9da8(int param_1)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0x30);
  bVar1 = *(byte *)(param_1 + 0x44);
  uVar2 = (uint)*(byte *)(puVar3 + 1) << 0x10 | (uint)*(byte *)((int)puVar3 + 3) << 0x18 |
          (uint)*puVar3;
  *(ushort **)(param_1 + 0x30) = puVar3 + 2;
  if (((uint)*(ushort *)(param_1 + 0x42) & 1 << (bVar1 & 0x1f)) != 0) {
    if (0xfff < (int)uVar2) {
      uVar2 = *(uint *)(DAT_08ac58c4 + (uVar2 - 0x1000) * 4);
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      return uVar2;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x34) + uVar2 * 4);
  }
  *(byte *)(param_1 + 0x44) = bVar1 + 1;
  return uVar2;
}

