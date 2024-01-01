#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d4778(undefined param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_08abf040;
  DAT_08abefbc = param_1;
  do {
    if (*piVar1 != 0) {
      *(undefined *)(*piVar1 + 0xbc) = param_1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  return;
}

