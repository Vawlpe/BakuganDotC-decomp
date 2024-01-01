#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886b3cc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x5b0) + *(int *)(param_1 + 0x5b8) * 4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iVar1 + *(int *)(param_1 + 0x5c0) * 0x18;
  if (*(char *)(param_1 + 0x5e4) != '\0') {
    return *(undefined4 *)(iVar1 + 0x28);
  }
  return *(undefined4 *)(iVar1 + 0x20);
}

