#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc7b4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar1 = (undefined4 *)(iVar2 + 0x80);
  if ((*(uint *)(iVar2 + 0x28) & 1) != 0) {
    puVar1 = &DAT_08aa5240;
  }
  puVar3 = puVar1;
  if ((*(uint *)(*(int *)(param_1 + 0x14) + 0x20) & 0x10000) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x60);
    FUN_089dd67c(puVar3,puVar1,*(int *)(param_1 + 0x14) + 0x80,iVar2 + 0x60);
  }
  *(undefined4 **)(param_1 + 0x58) = puVar3;
  FUN_089da7c4(param_1);
  return;
}

