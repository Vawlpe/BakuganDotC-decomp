#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0b28(int param_1,uint param_2,short param_3)

{
  param_2 = param_2 & 0xff;
  if (param_2 == 100) {
    param_2 = (uint)*(byte *)(param_1 + 0x2d4);
  }
  *(short *)(*(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + param_2 + 0x292) * 0x4c + 0x3a) =
       (short)(int)((float)(int)param_3 * 65536.0 * 0.002777778);
  return;
}

