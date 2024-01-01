#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a51fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + 0x90) = param_1;
  *(undefined4 *)(param_4 + 0x94) = param_2;
  *(undefined4 *)(param_4 + 0x9c) = param_3;
  FUN_089f4954(*(undefined4 *)(param_4 + 0x90),*(undefined4 *)(param_4 + 0x94),param_4,0);
  return;
}

