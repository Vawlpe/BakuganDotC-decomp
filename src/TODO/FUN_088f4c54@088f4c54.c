#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f4c54(int param_1,char param_2,undefined param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(*(int *)((int)&DAT_08b00d40 + iVar2) + 0x3c) == param_2) break;
    uVar1 = uVar1 + 1 & 0xff;
    iVar2 = uVar1 << 2;
  } while (uVar1 < *(byte *)(param_1 + 0xc9));
  if (uVar1 < *(byte *)(param_1 + 0xc9)) {
    *(undefined *)(*(int *)(param_1 + uVar1 * 4) + 0xb8) = param_3;
  }
  return;
}

