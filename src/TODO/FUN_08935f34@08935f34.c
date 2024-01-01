#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08935f34(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0x1a78) == 0) {
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf6e8(0x1fe,100);
    iVar1 = FUN_0880dc00("DWHologramHelp");
    FUN_088cc354(iVar1);
    FUN_0890e844(*(undefined4 *)(iVar1 + 0x8c));
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 1;
    *(char *)(param_1 + 0x1a78) = *(char *)(param_1 + 0x1a78) + '\x01';
  }
  else {
    if (1 < *(byte *)(param_1 + 0x1a78)) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf93c(0x1fe,1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0x1a78) = 2;
    }
  }
  return 0;
}

