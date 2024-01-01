#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0897d218(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0xf20) + 0.0625;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0xf20) = fVar3;
    *(float *)(param_1 + 0xf14) =
         *(float *)(param_1 + 0xf14) + (1.0 - (fVar3 - 1.0) * (fVar3 - 1.0));
    if (1.0 <= fVar3) {
      *(undefined4 *)(param_1 + 0xf14) = 0x3f800000;
      uVar1 = 1;
    }
  }
  else {
    *(float *)(param_1 + 0xf20) = fVar3;
    *(float *)(param_1 + 0xf14) =
         *(float *)(param_1 + 0xf14) - (1.0 - (fVar3 - 1.0) * (fVar3 - 1.0));
    if (1.0 <= fVar3) {
      iVar2 = *(int *)(param_1 + 0xf10);
      *(undefined4 *)(param_1 + 0xf1c) = 0;
      FUN_089f51b8(iVar2);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

