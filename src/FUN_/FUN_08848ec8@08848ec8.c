#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08848ec8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x2dc) < 3) {
    uVar1 = FUN_089f2178(0x40a00000);
    fVar2 = *(float *)(param_1 + 0x2d8);
    FUN_089f31d4(0x43700000,0x43080000,fVar2 * 16.0 * 16.0 + 60.0,fVar2 * 9.0 * 16.0 + 33.0,
                 0.6 - fVar2 * 0.6,uVar1,&DAT_08b00190);
  }
  if (DAT_08aba77f == '\0') {
    uVar1 = FUN_089f2178(0);
    FUN_08826304(uVar1);
  }
  return;
}

