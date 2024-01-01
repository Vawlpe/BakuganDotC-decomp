#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088f4984(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(*(int *)((int)&DAT_08b00d40 + iVar2) + 0x3c) == param_2) {
      return 1;
    }
    uVar1 = uVar1 + 1 & 0xff;
    iVar2 = uVar1 << 2;
  } while (uVar1 < *(byte *)(param_1 + 0xc9));
  return 0;
}

