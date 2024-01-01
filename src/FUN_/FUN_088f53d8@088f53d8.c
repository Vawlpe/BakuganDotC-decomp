#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f53d8(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    FUN_088f52e0(*(undefined2 *)((int)&DAT_08a99408 + iVar1));
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = uVar2 * 2;
  } while (uVar2 < 7);
  return;
}

