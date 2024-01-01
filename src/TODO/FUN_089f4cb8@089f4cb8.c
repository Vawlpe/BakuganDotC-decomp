#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4cb8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x1c);
  }
  return;
}

