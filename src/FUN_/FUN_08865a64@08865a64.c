#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08865a64(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x20);
  fVar3 = (float)FUN_08862cd8(param_1);
  fVar4 = fVar4 * fVar3;
  bVar1 = false;
  if (*(char *)(param_1 + 0x391) != '\0') {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    bVar1 = false;
    if (iVar2 != 2) {
      bVar1 = true;
    }
  }
  if ((bVar1) && (*(int *)(param_1 + 8) != 0xf)) {
    fVar4 = fVar4 * 0.5;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    if (iVar2 == 5) {
      fVar4 = fVar4 * 0.5;
    }
  }
  return fVar4;
}

