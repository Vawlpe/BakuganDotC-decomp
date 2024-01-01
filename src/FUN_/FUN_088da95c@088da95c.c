#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088da95c(int param_1)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x188) == 0x73) && (*(int *)(param_1 + 0x184) != 0)) {
    iVar1 = FUN_088e1948();
    *(int *)(param_1 + 0x18c) = iVar1;
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x3a1) == '\x01') {
        *(undefined4 *)(*(int *)(param_1 + 0x184) + 0xbc) = 0x3f800000;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x184) + 0xbc) = 0;
      }
    }
  }
  return;
}

