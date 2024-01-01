#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088664fc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088886fc(param_1 + 0x434);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x3a8) != 0)) {
    return *(char *)(*(int *)(param_1 + 0x3a8) + 0x1e0) != '\0';
  }
  return false;
}

