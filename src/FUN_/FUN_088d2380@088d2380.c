#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d2380(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088f505c(0x38e);
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x3a0) == '\0') {
      *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
    }
    else {
      *(undefined4 *)(iVar1 + 0xb8) = 0;
    }
    FUN_088d1ec8(param_1,1,param_1 + 0xe8);
  }
  return;
}

