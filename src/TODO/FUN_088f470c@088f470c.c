#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f470c(int param_1)

{
  int iVar1;
  byte bVar2;
  
  *(undefined *)(param_1 + 0xca) = 0;
  if (*(char *)(param_1 + 0xc9) != '\0') {
    bVar2 = 0;
    do {
      FUN_088f46a8(param_1,bVar2);
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)(param_1 + 0xc9));
    *(undefined *)(param_1 + 0xc9) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar1,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}

