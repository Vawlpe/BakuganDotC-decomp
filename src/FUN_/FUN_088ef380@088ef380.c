#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ef380(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = uVar2 * 4 + iVar1 * 3;
    if (*(int *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30) != 0) {
      FUN_088ea52c();
      FUN_088ea570(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30));
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0x30) = 0;
    }
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = uVar2 << 5;
  } while (uVar2 < 10);
  return;
}

