#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08863390(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    *(undefined *)(iVar2 + 0x5d8) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = param_1 + iVar1;
  } while (iVar1 < 8);
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  return;
}

