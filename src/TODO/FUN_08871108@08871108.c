#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08871108(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x3a8) != 0) && (*(int *)(param_1 + 0x3c0) == 0)) &&
      ((*(uint *)(*(int *)(param_1 + 0x3a8) + 0x148) & 0x200) != 0)) &&
     (((*(int *)(param_1 + 0x140) == 3 && (iVar1 = FUN_088886fc(param_1 + 0x434), iVar1 != 0)) &&
      ((0 < *(int *)(param_1 + 0x3a0) && (*(char *)(*(int *)(param_1 + 0x3a8) + 0x47c) == '\0'))))))
  {
    return 1;
  }
  return 0;
}

