#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f4320(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined *)(param_1 + 0xca) = 0;
  uVar3 = 0;
  bVar1 = *(byte *)(param_1 + 0xc9);
  iVar4 = 0;
  do {
    bVar2 = *(byte *)(param_1 + 0xca);
    if (*(char *)(*(int *)((int)&DAT_08b00d40 + iVar4) + 0x37) != '\0') {
      *(char *)(param_1 + (uint)bVar2 + 0xa9) = (char)uVar3;
      *(byte *)(param_1 + 0xca) = bVar2 + 1;
    }
    uVar3 = uVar3 + 1 & 0xff;
    iVar4 = uVar3 << 2;
  } while (uVar3 < bVar1);
  return;
}

