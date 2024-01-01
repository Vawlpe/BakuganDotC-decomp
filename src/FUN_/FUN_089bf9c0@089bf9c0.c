#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bf9c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((DAT_08af8270 != 0) && (puVar1 = (undefined4 *)FUN_08a2dc90(), puVar1 != (undefined4 *)0x0)) {
    iVar2 = puVar1[3];
    while (iVar2 != 0) {
      if (iVar2 == param_1) {
        if (*(char *)(puVar1 + 2) == '\0') {
          return 1;
        }
        puVar1 = (undefined4 *)*puVar1;
      }
      else {
        puVar1 = (undefined4 *)*puVar1;
      }
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      iVar2 = puVar1[3];
    }
  }
  return 0;
}

