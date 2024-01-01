#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088deadc(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  *(undefined4 *)(*(int *)(param_2 + 0x164) + 4) = param_1;
  return;
}

