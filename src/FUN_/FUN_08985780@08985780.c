#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08985780(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0xce8) + 0.0625;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0xce8) = fVar3;
    *(float *)(param_1 + 0xcdc) =
         *(float *)(param_1 + 0xcdc) + (1.0 - (fVar3 - 1.0) * (fVar3 - 1.0));
    if (1.0 <= fVar3) {
      *(undefined4 *)(param_1 + 0xcdc) = 0x3f800000;
      uVar1 = 1;
    }
  }
  else {
    *(float *)(param_1 + 0xce8) = fVar3;
    *(float *)(param_1 + 0xcdc) =
         *(float *)(param_1 + 0xcdc) - (1.0 - (fVar3 - 1.0) * (fVar3 - 1.0));
    if (1.0 <= fVar3) {
      iVar2 = *(int *)(param_1 + 0xcd8);
      *(undefined4 *)(param_1 + 0xce4) = 0;
      FUN_089f51b8(iVar2);
      *(undefined4 *)(iVar2 + 0x84) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

