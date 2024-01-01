#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893b970(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7f8) != '\0') {
    *(undefined4 *)(param_1 + 0x7f4) = 0;
    *(undefined4 *)(param_1 + 0x7f0) = 0;
    FUN_089f4954(0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90),0);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0xbc) = 0x3e99999a;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x90);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  }
  return;
}

