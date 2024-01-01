#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bfae0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 1;
  if (((param_1 != 0) && (DAT_08ac5248 != 0)) && (DAT_08ac5248 != param_1)) {
    uVar1 = 0;
    iVar3 = 0;
    piVar2 = &DAT_08af8274;
    do {
      iVar3 = iVar3 + 1;
      if (*piVar2 == param_1) {
        return 1;
      }
      piVar2 = piVar2 + 1;
    } while (iVar3 < 8);
  }
  return uVar1;
}

