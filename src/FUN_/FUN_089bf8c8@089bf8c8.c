#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf8c8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if ((DAT_08af8270 != 0) &&
     (puVar1 = (undefined4 *)FUN_08a2dc90(DAT_08af8270), puVar1 != (undefined4 *)0x0)) {
    piVar2 = (int *)puVar1[3];
    while (piVar2 != (int *)0x0) {
      if (*piVar2 == param_1) {
        FUN_089bf7a8(piVar2,1);
        puVar1 = (undefined4 *)*puVar1;
      }
      else {
        puVar1 = (undefined4 *)*puVar1;
      }
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      piVar2 = (int *)puVar1[3];
    }
  }
  return;
}

