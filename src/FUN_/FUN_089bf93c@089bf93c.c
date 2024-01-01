#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bf93c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((DAT_08af8270 != 0) && (puVar1 = (undefined4 *)FUN_08a2dc90(), puVar1 != (undefined4 *)0x0)) {
    piVar2 = (int *)puVar1[3];
    while (piVar2 != (int *)0x0) {
      if (*piVar2 == param_1) {
        if (*(char *)(puVar1 + 2) == '\0') {
          uVar3 = 1;
          puVar1 = (undefined4 *)*puVar1;
        }
        else {
          puVar1 = (undefined4 *)*puVar1;
        }
      }
      else {
        puVar1 = (undefined4 *)*puVar1;
      }
      if (puVar1 == (undefined4 *)0x0) {
        return uVar3;
      }
      piVar2 = (int *)puVar1[3];
    }
  }
  return uVar3;
}

