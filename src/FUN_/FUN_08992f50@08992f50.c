#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08992f50(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0x10c) == 0) {
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf6e8(0x1fe,100);
    iVar1 = FUN_0880dc00("DWSpecialUnlock");
    FUN_088cc354(iVar1);
    FUN_0890e844(*(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x10d) * 4));
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 1;
    *(char *)(param_1 + 0x10c) = *(char *)(param_1 + 0x10c) + '\x01';
  }
  else {
    if (1 < *(byte *)(param_1 + 0x10c)) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf93c(0x1fe,1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0x10c) = 2;
    }
  }
  return 0;
}

