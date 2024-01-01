#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089c9e5c(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)(param_1 + 0x30);
  bVar1 = *(byte *)(puVar4 + 1);
  bVar2 = *(byte *)((int)puVar4 + 3);
  uVar3 = *puVar4;
  *(ushort **)(param_1 + 0x30) = puVar4 + 2;
  return (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18 | (uint)uVar3;
}

