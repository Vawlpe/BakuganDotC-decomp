#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089df014(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xec))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x100) + param_2 * 4);
  }
  return 0;
}

