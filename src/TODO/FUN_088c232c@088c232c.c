#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c232c(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0x6b0) + 0xd0) =
       *(uint *)(*(int *)(param_1 + 0x6b0) + 0xd0) & 0xfffffffe;
  *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) =
       *(uint *)(*(int *)(param_1 + 0x6b4) + 0xd0) & 0xfffffffe;
  *(uint *)(*(int *)(param_1 + 0x6b8) + 0xd0) =
       *(uint *)(*(int *)(param_1 + 0x6b8) + 0xd0) & 0xfffffffe;
  return;
}

