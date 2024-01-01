#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891bf38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined local_10 [16];
  
  puVar3 = local_10;
  local_10[0] = 1;
  local_10[1] = 0;
  local_10[2] = 4;
  local_10[3] = 3;
  local_10[4] = 2;
  local_10[5] = 5;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined *)(param_1 + iVar1 + 0x224e) = *puVar3;
    puVar3 = local_10 + iVar1 + 1;
    iVar1 = iVar2;
  } while (iVar2 < 6);
  return;
}

