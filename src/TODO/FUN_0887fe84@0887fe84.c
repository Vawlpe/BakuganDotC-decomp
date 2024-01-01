#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887fe84(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x10c);
  FUN_0887b044(0x42200000,param_1,0x1b,0x66);
  if (*(int *)(param_1 + 0xf4) == 0) {
    if (fVar2 == 0.0) {
      uVar1 = 0xbf20d97c;
    }
    else {
      uVar1 = 0x3f20d97c;
    }
    *(undefined4 *)(param_1 + 0x104) = uVar1;
  }
  return;
}

