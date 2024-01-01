#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08892e2c(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x96c), iVar1 != 0)) &&
      ((*(uint *)(iVar1 + 0x144) & 0x100) != 0)) &&
     ((*(int *)(iVar1 + 0x140) == 8 || (*(int *)(iVar1 + 0x140) == 0xb)))) {
    return 1;
  }
  return 0;
}

