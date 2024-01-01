#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08892da8(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 != 0) && (*(char *)(param_1 + 0xa1c) == '\0')) &&
      (iVar1 = (**(code **)(*(int *)(param_2 + 0x14) + 0x54))
                         (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x50)), iVar1 != 0)) &&
     ((*(uint *)(param_2 + 0x16c) & 0xc00) != 0)) {
    return 1;
  }
  return 0;
}

