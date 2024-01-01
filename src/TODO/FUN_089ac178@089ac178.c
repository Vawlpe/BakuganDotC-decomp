#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ac178(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0xb88) = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined4 *)(param_1 + 0x480) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x480) = 0x3f800000;
  return;
}

