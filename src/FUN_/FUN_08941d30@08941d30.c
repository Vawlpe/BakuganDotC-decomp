#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08941d30(int param_1,char param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = 0.6;
  if (param_2 == '\0') {
    iVar2 = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x78) = iVar2;
    if (0x77 < iVar2) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x78);
    if (0x3b < iVar2) {
      iVar2 = 0x78 - iVar2;
    }
    fVar1 = 0.8 - (float)iVar2 * 0.6 * 0.01666667;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  fVar1 = fVar1 * *(float *)(param_1 + 0x84);
  *(float *)(*(int *)(param_1 + 0x98) + 0x1c) = fVar1;
  if (fVar1 != 0.0) {
    FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),1);
    return;
  }
  FUN_089ed6a0(*(undefined4 *)(param_1 + 0x98),0);
  return;
}

