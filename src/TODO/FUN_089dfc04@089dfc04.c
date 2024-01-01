#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089dfc04(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x13d) != '\0') {
    fVar2 = (float)FUN_089df51c(param_1);
    fVar3 = (float)FUN_089df710(param_1);
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x130) + 0x14) + (uint)*(byte *)(param_1 + 0x134) * 0x30;
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
    *(float *)(iVar1 + 0x14) = fVar2;
    fVar2 = (float)FUN_089df49c(param_1);
    FUN_089dfd70(param_1);
    fVar3 = (float)FUN_089df49c(param_1);
    if (*(float *)(param_1 + 0xb4) < 0.0) {
      if (fVar2 <= fVar3) {
        *(undefined *)(param_1 + 0xb0) = 1;
      }
    }
    else if ((0.0 < *(float *)(param_1 + 0xb4)) && (fVar3 <= fVar2)) {
      *(undefined *)(param_1 + 0xb0) = 1;
    }
    FUN_089df730(uVar4,param_1);
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x130) + 0x14) + (uint)*(byte *)(param_1 + 0x134) * 0x30 + 0x14) =
         uVar4;
    return fVar3;
  }
  return 0.0;
}

