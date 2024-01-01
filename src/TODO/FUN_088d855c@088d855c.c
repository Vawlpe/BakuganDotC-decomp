#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d855c(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x180) = 1;
      return;
    }
  }
  else if (iVar1 < 2) {
    fVar2 = *(float *)(param_1 + 0x188);
    if (fVar2 * fVar2 < 0.1) {
      *(undefined4 *)(param_1 + 0x188) = 0;
      *(undefined4 *)(param_1 + 0x180) = 2;
    }
    else {
      *(float *)(param_1 + 0x188) = fVar2 * 0.8;
    }
    (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  }
  return;
}

