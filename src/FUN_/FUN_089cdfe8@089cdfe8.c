#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cdfe8(undefined2 *param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x1c) = param_2;
  zz_sceCtrlSetSamplingMode(1);
  zz_sceCtrlSetSamplingCycle(0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  memset_jak(param_1 + 5,0,0x22);
  FUN_089ce1a4(param_1,0x10);
  FUN_089ce1b4(param_1,2);
  *(undefined *)((int)param_1 + 0x39) = 1;
  *(undefined *)(param_1 + 0x1e) = 0;
  zz_sceCtrlSetIdleCancelThreshold(100,0xffffffff);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}

