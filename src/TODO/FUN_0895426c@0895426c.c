#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895426c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0880d354();
  if (iVar1 == 0) {
    iVar1 = *(char *)(param_1 + 0xa44) + 0xb;
  }
  else {
    iVar1 = *(char *)(param_1 + 0xa44) + 0xe;
  }
  FUN_089a4f4c(0x40000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4),0,0);
  return;
}

