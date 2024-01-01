#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e55c4(int param_1,uint **param_2)

{
  if (*(int *)(param_1 + 0x460) != 0) {
    **param_2 = *(uint *)(&DAT_08a98cd8 + *(int *)(param_1 + 0x460) * 4) & 0xffffff | 0xe8000000;
    *param_2 = *param_2 + 1;
    FUN_089df8d0(param_1,param_2);
    **param_2 = 0xe8000000;
    *param_2 = *param_2 + 1;
  }
  return;
}

