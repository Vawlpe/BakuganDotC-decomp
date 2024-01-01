#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08895d40(int param_1,int *param_2,undefined4 param_3,undefined param_4,int param_5)

{
  undefined6 uVar1;
  
  uVar1 = FUN_0888c294();
  if (param_2[1] == 0x1b) {
    if ((int)uVar1 == 0) {
      *(undefined *)(param_2 + 0xf) = param_4;
    }
    else {
      param_2[1] = 0;
      *(undefined *)(param_2 + 0xf) = param_4;
    }
  }
  else {
    *(undefined *)(param_2 + 0xf) = param_4;
  }
  *param_2 = (int)uVar1;
  param_2[0x10] = param_1;
  param_2[0x11] = param_5;
  *(short *)(param_2 + 0x12) = (short)((uint6)uVar1 >> 0x20);
  if (*(char *)(param_2 + 0xf) == '\x03') {
    param_2[0xd] = 0;
    param_2[0xc] = (int)((float)(int)(float)param_2[0x10] * 0.03333334);
    *(bool *)(param_2 + 0xe) = (float)(int)(float)param_2[0x10] * 0.03333334 <= 0.0;
  }
  return;
}

