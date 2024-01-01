#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970768(undefined4 param_1,int param_2)

{
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) | 1;
  FUN_089f46dc(param_2);
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) | 0x20;
  FUN_089a51fc(0x3f800000,0x3f800000,0,param_2);
  return;
}

