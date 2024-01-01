#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08943ca4(int param_1,uint param_2,int param_3)

{
  if (param_2 < 3) {
    FUN_089bf314(param_1,param_2,param_3);
    return;
  }
  if ((int)param_2 < 4) {
    if ((2 < (int)param_2) && (*(int *)(param_1 + 0x10) != param_3)) {
      *(int *)(param_1 + 0x10) = param_3;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  else if ((int)param_2 < 5) {
    *(int *)(param_1 + 0x14) = param_3;
  }
  return;
}

