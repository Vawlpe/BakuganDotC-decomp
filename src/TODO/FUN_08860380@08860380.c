#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08860380(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08860344();
  if ((iVar1 != 0) && ((*(char *)(param_1 + 0x158) != '\0' || (*(char *)(iVar1 + 0x158) != '\0'))))
  {
    return 1;
  }
  return 0;
}

