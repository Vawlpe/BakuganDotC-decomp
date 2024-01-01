#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c4814(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  if (DAT_08ac5638 != (int *)0x0) {
    if (param_1 < 0) {
      iVar2 = 0;
      piVar3 = DAT_08ac5638;
      do {
        iVar2 = iVar2 + 1;
        if (*piVar3 != 0) {
          return 1;
        }
        piVar3 = piVar3 + 1;
      } while (iVar2 < 3);
    }
    else if ((param_1 < 3) && (DAT_08ac5638[param_1] != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

