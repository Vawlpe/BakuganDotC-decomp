#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08862838(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_08860344();
  if (iVar1 == 0) {
    return 1;
  }
  fVar2 = (float)atan2f(*(float *)(iVar1 + 0x28) - *(float *)(param_2 + 0x28),
                        *(float *)(iVar1 + 0x20) - *(float *)(param_2 + 0x20));
  fVar2 = (param_1 - fVar2) - (float)(int)((param_1 - fVar2) * 0.3183099) * 6.283185;
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + 6.283185;
  }
  if (3.141593 <= fVar2) {
    fVar2 = 6.283185 - fVar2;
  }
  else {
    fVar2 = -fVar2;
  }
  if (ABS(fVar2) < 0.7853982) {
    return 1;
  }
  if (2.356194 < ABS(fVar2)) {
    return 0;
  }
  if (fVar2 < 0.0) {
    return 3;
  }
  return 2;
}

