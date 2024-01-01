#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885b148(int param_1)

{
  int iVar1;
  
  if (DAT_08aba7f0 != (int *)0x0) {
    iVar1 = *DAT_08aba7f0;
    while (iVar1 != 0) {
      if (iVar1 == param_1) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        if (*(char *)(iVar1 + 0x30) != '\0') {
          return 1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
  }
  return 0;
}

