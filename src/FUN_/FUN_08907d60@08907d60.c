#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08907d60(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08907920(param_1,(int)(uint)*(ushort *)(param_2 + 2) >> 8,
                       *(ushort *)(param_2 + 2) & 0xff);
  FUN_089079cc(param_1,param_2,uVar1);
  return;
}

