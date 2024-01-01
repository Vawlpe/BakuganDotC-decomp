#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885b534(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (DAT_08aba7f0 != (int *)0x0) {
    for (iVar3 = *DAT_08aba7f0; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = FUN_0885b148(iVar3);
      if (iVar2 == 0) {
        FUN_0885b190(iVar3);
        cVar1 = *(char *)(iVar3 + 0x31);
      }
      else {
        cVar1 = *(char *)(iVar3 + 0x31);
      }
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

