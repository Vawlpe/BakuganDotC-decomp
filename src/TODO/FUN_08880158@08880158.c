#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08880158(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x10c);
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xfc) = param_2;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 50.0;
    if ((int)fVar1 == 2) {
      fVar1 = 0.0;
      *(undefined4 *)(param_1 + 0xfc) = 6;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      if (((int)fVar1 & 1U) == 0) {
        fVar1 = 30.0;
      }
      else {
        fVar1 = -30.0;
      }
      *(float *)(param_1 + 0x10c) = fVar1;
    }
    *(undefined4 *)(param_1 + 0x100) = 0x9b;
  }
  FUN_08878e5c(0x3dcccccd,fVar1,param_1,*(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(param_1 + 0x100),0x1a);
  return;
}

