#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089c9d1c(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x44);
  uVar2 = (uint)**(ushort **)(param_1 + 0x30);
  *(ushort **)(param_1 + 0x30) = *(ushort **)(param_1 + 0x30) + 1;
  if (((uint)*(ushort *)(param_1 + 0x42) & 1 << (bVar1 & 0x1f)) != 0) {
    if (0xfff < uVar2) {
      uVar2 = *(uint *)(DAT_08ac58c4 + (uVar2 - 0x1000 & 0xffff) * 4);
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      return uVar2 & 0xffff;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x34) + uVar2 * 4) & 0xffff;
  }
  *(byte *)(param_1 + 0x44) = bVar1 + 1;
  return uVar2;
}

