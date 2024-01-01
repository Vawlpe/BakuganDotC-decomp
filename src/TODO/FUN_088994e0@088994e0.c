#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088994e0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0xe0) + 0x4bc) + 1) == '\x01') {
    *(uint *)(param_1 + 0x1c) = uVar1 | 2;
    return 1;
  }
  if (*(int *)(*(int *)(param_1 + 0xe0) + 0x140) != 0xd) {
    *(uint *)(param_1 + 0x1c) = uVar1 | 0x202;
    return 1;
  }
  *(uint *)(param_1 + 0x1c) = uVar1 | 0x200;
  return 1;
}

