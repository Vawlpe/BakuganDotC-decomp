#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088651c4(int param_1,char param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  fVar3 = *(float *)(param_1 + 0x5fc);
  if (0.0 < fVar3) {
    if (param_2 == '\0') {
      fVar2 = *(float *)(param_1 + 0x60c);
    }
    else {
      FUN_0885fad0(param_1);
      fVar3 = *(float *)(param_1 + 0x5fc);
      fVar2 = *(float *)(param_1 + 0x60c);
    }
    fVar3 = fVar3 - fVar2;
    *(float *)(param_1 + 0x5fc) = fVar3;
    if (0.0 < fVar3) {
      uVar4 = vmin_s(*(float *)(param_1 + 0x600),in_V7F);
      vmax_s(uVar4,in_V7D);
      pfVar1 = (float *)(*(int *)(param_1 + 0x130) + 0xb0);
      *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x604) * *(float *)(param_1 + 0x600) * fVar3;
      pfVar1 = (float *)(*(int *)(param_1 + 0x130) + 0xb8);
      *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x608) * *(float *)(param_1 + 0x600) *
                          *(float *)(param_1 + 0x5fc);
      *(float *)(param_1 + 0x600) = -*(float *)(param_1 + 0x600);
    }
    else {
      *(undefined4 *)(param_1 + 0x5fc) = 0;
    }
  }
  return;
}

