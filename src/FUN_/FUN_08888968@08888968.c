#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08888968(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 1;
    }
    param_1 = param_1 + 6;
  } while (iVar1 < 0x15);
  return 0;
}

