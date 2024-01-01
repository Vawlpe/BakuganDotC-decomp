#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894e024(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined local_10 [16];
  
  puVar3 = local_10;
  local_10[0] = 1;
  local_10[1] = 1;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined *)(param_1 + iVar1 + 0x2d1) = *puVar3;
    puVar3 = local_10 + iVar1 + 1;
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

