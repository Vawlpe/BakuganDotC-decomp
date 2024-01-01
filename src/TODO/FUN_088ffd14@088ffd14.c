#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ffd14(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_088660c8();
  if ((piVar1 != (int *)0x0) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) {
    uVar4 = 0;
    for (iVar3 = *piVar1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = FUN_088663e4(iVar3);
      if (0 < iVar2) {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  return 0;
}

