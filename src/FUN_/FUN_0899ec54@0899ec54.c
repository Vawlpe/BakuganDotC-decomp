#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899ec54(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08996448();
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109c) * 4 + 0x40);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  return;
}

