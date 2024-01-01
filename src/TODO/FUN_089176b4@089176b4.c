#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089176b4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x8a2) == '\0') {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 6);
  return 0;
}

