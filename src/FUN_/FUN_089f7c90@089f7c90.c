#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7c90(undefined4 param_1,int param_2)

{
  if ('\x01' < *(char *)(*(int *)(param_2 + 0xa0) + 0x11)) {
    *(undefined4 *)(*(int *)(param_2 + 0xa0) + 0x18) = param_1;
    *(uint *)(*(int *)(param_2 + 0xb0) + (*(int *)(param_2 + 0x130) + -2) * 4) =
         *(uint *)(*(int *)(param_2 + 0xa0) + 0x18) >> 8 | 0xd0000000;
  }
  return;
}

