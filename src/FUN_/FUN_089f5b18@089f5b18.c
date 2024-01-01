#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_089f5b18(uint param_1,uint *param_2,uint param_3,int param_4)

{
  if (DAT_08ac601c != '\0') {
    *param_2 = DAT_08ac6018 >> 8 | 0x4a000000;
    param_2[1] = 0x4b000000;
    param_2[2] = param_1 >> 8 | 0x48000000;
    param_2[3] = 0x49414000;
    param_2[4] = 0x12000118;
    param_2[5] = 0x10080000;
    param_2[6] = 0x1ac5f98;
    param_2[7] = 0x5000404;
    param_2[8] = 0x483f8000;
    param_2[9] = 0x493f8000;
    param_2[10] = 0x4a000000;
    param_2[0xb] = 0x4b000000;
    param_2 = param_2 + 0xc;
    *param_2 = param_4 << 8 | 0x36000000U | param_3;
  }
  return param_2;
}

