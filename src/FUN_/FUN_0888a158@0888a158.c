#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_0888a158(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x8c) == 2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
    iVar1 = (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x68));
    if ((iVar1 == 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14),
       iVar1 = (**(code **)(iVar1 + 100))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x60)),
       iVar1 == 0)) {
      fVar2 = *(float *)(param_1 + 0x70) * 80.0 * 0.001;
      if (fVar2 < 20.0) {
        fVar2 = 20.0;
      }
      else if (80.0 < fVar2) {
        fVar2 = 80.0;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x70) * 80.0 * 0.001 * 0.7 + 24.0;
      if (fVar2 < 24.0) {
        fVar2 = 24.0;
      }
      else if (80.0 < fVar2) {
        fVar2 = 80.0;
      }
    }
  }
  else {
    iVar1 = FUN_0888a108(param_1);
    if (iVar1 == 0) {
      fVar3 = *(float *)(param_1 + 0x70) * 80.0 * 0.001;
      fVar2 = 20.0;
      if ((20.0 <= fVar3) && (fVar2 = fVar3, 80.0 < fVar3)) {
        fVar2 = 80.0;
      }
    }
    else {
      fVar2 = (float)FUN_08889d78(param_1);
      fVar2 = ((fVar2 / *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4bc) + 0x90) - 0.5) * 0.7 +
              0.3) * 177.0 + 24.0;
    }
  }
  return fVar2;
}

