#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a21d00(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = **(byte **)(param_1 + 0x1c);
  uVar2 = (uint)bVar1;
  *(byte **)(param_1 + 0x1c) = *(byte **)(param_1 + 0x1c) + 1;
  if ((bVar1 & 0x80) != 0) {
    uVar2 = uVar2 & 0x7f;
    do {
      bVar1 = **(byte **)(param_1 + 0x1c);
      *(byte **)(param_1 + 0x1c) = *(byte **)(param_1 + 0x1c) + 1;
      uVar2 = uVar2 * 0x80 + (bVar1 & 0x7f);
    } while ((char)bVar1 < '\0');
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  return 0;
}

