#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ae024(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0xbbc) == 0) {
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf6e8(0x1fe,100);
    iVar1 = FUN_0880dc00("DWMesHelp");
    FUN_088cc354(iVar1);
    FUN_0890e844(*(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0xbbd) * 4));
    *(undefined4 *)(iVar2 + 0x7c) = 1;
    *(char *)(param_1 + 0xbbc) = *(char *)(param_1 + 0xbbc) + '\x01';
  }
  else {
    if (1 < *(byte *)(param_1 + 0xbbc)) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf93c(0x1fe,1);
    if (iVar2 == 0) {
      iVar2 = FUN_0890e868();
      if (iVar2 == 1) {
        *(undefined *)(param_1 + 0xbbe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xbbe) = 1;
      }
      *(undefined *)(param_1 + 0xbbc) = 2;
    }
  }
  return 0;
}

