#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08919b44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (*(byte *)(param_1 + 0x909) == 0) {
    DAT_08ac0e70 = 1;
    iVar3 = FUN_089bf6e8(0x1fe,100);
    iVar1 = FUN_0880dc00("DWMesHelp");
    FUN_088cc354(iVar1);
    iVar2 = FUN_089a5650(9,*(undefined *)(param_1 + 0x908));
    FUN_0890e844(*(undefined4 *)(iVar1 + iVar2 * 4));
    *(undefined4 *)(iVar3 + 0x7c) = 0;
    if (*(char *)(param_1 + 0x908) == '\0') {
      *(undefined4 *)(iVar3 + 0x84) = 1;
      cVar4 = *(char *)(param_1 + 0x909);
    }
    else {
      cVar4 = *(char *)(param_1 + 0x909);
    }
    *(char *)(param_1 + 0x909) = cVar4 + '\x01';
  }
  else {
    if (1 < *(byte *)(param_1 + 0x909)) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar3 = FUN_089bf93c(0x1fe,1);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x90a) = 0;
      if (*(char *)(param_1 + 0x908) == '\x01') {
        iVar3 = FUN_0890e868();
        if (iVar3 == 1) {
          *(undefined *)(param_1 + 0x90a) = 0;
        }
        else {
          *(undefined *)(param_1 + 0x90a) = 1;
        }
      }
      *(undefined *)(param_1 + 0x909) = 2;
    }
  }
  return 0;
}

