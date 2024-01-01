#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08952834(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_10 [8];
  
  puVar5 = local_10;
  local_10[0] = 1;
  local_10[1] = 1;
  local_10[2] = 1;
  local_10[3] = 1;
  local_10[4] = 1;
  local_10[5] = 1;
  local_10[6] = 1;
  iVar1 = FUN_0880d354();
  iVar2 = 0;
  puVar4 = local_10;
  if (iVar1 != 0) {
    local_10[1] = 0;
    local_10[3] = 0;
    puVar4 = local_10;
  }
  do {
    iVar3 = iVar2 + 1;
    *(undefined *)(param_1 + iVar2 + 0x5f9) = *puVar4;
    iVar1 = iVar2 + 1;
    iVar2 = iVar3;
    puVar4 = local_10 + iVar1;
  } while (iVar3 < 4);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    *(undefined *)(param_1 + iVar2 + 0x5fd) = puVar5[4];
    puVar5 = local_10 + iVar2 + 1;
    iVar2 = iVar1;
  } while (iVar1 < 3);
  return;
}

