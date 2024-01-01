#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dd7dc(undefined4 *param_1,int param_2)

{
  *param_1 = 0x10080000;
  param_1[1] = 0xaaa3058;
  if (*(int *)(&DAT_08ac5bf4 + param_2 * 4) != 0) {
    FUN_089f7110(*(int *)(&DAT_08ac5bf4 + param_2 * 4),param_1 + 2,0);
  }
  return;
}

