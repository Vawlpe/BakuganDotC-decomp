#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf850(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((DAT_08af8270 != 0) && (piVar1 = (int *)FUN_08a2dc90(), piVar1 != (int *)0x0)) {
    piVar2 = (int *)piVar1[3];
    while (piVar2 != (int *)0x0) {
      if (*piVar2 == param_1) {
        FUN_089bf7a8(piVar2,1);
        return;
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)piVar1[3];
    }
  }
  return;
}

