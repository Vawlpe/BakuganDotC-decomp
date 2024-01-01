#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893eb90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + *(char *)(param_1 + 0x74) + 0x75) * 4;
  if (*(char *)(param_1 + 0x74) == 0) {
    FUN_089a4f4c(0x40000000,*(undefined4 *)(iVar1 + 4),1,0);
    return;
  }
  FUN_089a4f4c(0x40000000,*(undefined4 *)(iVar1 + 0x2c),1,0);
  return;
}

