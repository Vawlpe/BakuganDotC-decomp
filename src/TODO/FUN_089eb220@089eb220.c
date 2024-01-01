#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb220(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = param_1;
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x94) = *(undefined4 *)(param_2 + 4);
  }
  return;
}

