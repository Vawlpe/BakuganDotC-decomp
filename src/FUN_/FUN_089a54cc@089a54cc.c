#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a54cc(undefined4 param_1,float param_2,float param_3,char param_4,int param_5,
                 int param_6,uint param_7)

{
  if (param_4 == '\0') {
    *(undefined4 *)(param_6 + 0x1c) = 0;
    if ((param_7 & 1) != 0) {
      *(undefined4 *)(param_6 + 0x20) = *(undefined4 *)(param_5 + 0xbc);
    }
    if ((param_7 & 2) != 0) {
      FUN_089f46dc(param_5);
      *(uint *)(param_5 + 0xd0) = *(uint *)(param_5 + 0xd0) | 0x20;
      FUN_089a51fc(param_1,param_1,0,param_5);
      *(undefined4 *)(param_6 + 0x24) = *(undefined4 *)(param_5 + 0x90);
    }
  }
  else {
    *(undefined4 *)(param_6 + 0x1c) = 0;
    if ((param_7 & 1) != 0) {
      *(undefined4 *)(param_6 + 0x20) = *(undefined4 *)(param_5 + 0xbc);
    }
    if ((param_7 & 2) != 0) {
      *(undefined4 *)(param_6 + 0x24) = *(undefined4 *)(param_5 + 0x90);
    }
  }
  if ((param_7 & 4) == 0) {
    if ((param_7 & 8) != 0) {
      *(short *)(param_6 + 0x16) = (short)(int)(*(float *)(param_5 + 100) + param_3);
      *(float *)(param_5 + 100) = *(float *)(param_5 + 100) + param_2;
      *(short *)(param_6 + 0x14) = (short)(int)*(float *)(param_5 + 100);
      *(short *)(param_6 + 0x18) = *(short *)(param_6 + 0x16) - *(short *)(param_6 + 0x14);
    }
  }
  else {
    *(short *)(param_6 + 0x16) = (short)(int)(*(float *)(param_5 + 0x60) + param_3);
    *(float *)(param_5 + 0x60) = *(float *)(param_5 + 0x60) + param_2;
    *(short *)(param_6 + 0x14) = (short)(int)*(float *)(param_5 + 0x60);
    *(short *)(param_6 + 0x18) = *(short *)(param_6 + 0x16) - *(short *)(param_6 + 0x14);
  }
  return;
}

