#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884bf9c(int param_1,uint param_2,int param_3)

{
  if (param_2 < 3) {
    FUN_089bf314(param_1,param_2,param_3);
    return;
  }
  switch(param_2) {
  case 3:
    *(bool *)(param_1 + 0x52e) = param_3 != 0;
    return;
  case 4:
    *(bool *)(param_1 + 0x52f) = param_3 != 0;
    return;
  case 5:
    *(bool *)(param_1 + 0x530) = param_3 != 0;
    return;
  case 6:
    DAT_08aba778 = param_3;
    return;
  case 7:
    *(bool *)(param_1 + 0x531) = param_3 != 0;
    return;
  case 8:
    *(int *)(param_1 + 0x534) = param_3;
  case 9:
    return;
  case 10:
    *(bool *)(param_1 + 0x55a) = param_3 != 0;
    return;
  case 0xb:
    *(int *)(param_1 + 0x564) = param_3;
  default:
    return;
  }
}

