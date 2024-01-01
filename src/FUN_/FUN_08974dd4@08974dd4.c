#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08974dd4(int param_1,char param_2)

{
  float fVar1;
  
  memset_jak(param_1 + 0x524,0,0x28);
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x544) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x548) = 0x3f000000;
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x20) = 0x43200000;
    *(undefined2 *)(param_1 + 0x53a) = 0x28;
    *(undefined2 *)(param_1 + 0x538) = 0xa0;
    fVar1 = (float)FUN_089a4b3c((float)(int)*(short *)(param_1 + 0x538),
                                (float)(int)*(short *)(param_1 + 0x53a));
    *(short *)(param_1 + 0x53c) = (short)(int)fVar1;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x544) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x548) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x20) = 0x42200000;
    *(undefined2 *)(param_1 + 0x538) = 0x28;
    *(undefined2 *)(param_1 + 0x53a) = 0xa0;
    fVar1 = (float)FUN_089a4b3c((float)(int)*(short *)(param_1 + 0x538),
                                (float)(int)*(short *)(param_1 + 0x53a));
    *(short *)(param_1 + 0x53c) = (short)(int)fVar1;
  }
  return;
}

