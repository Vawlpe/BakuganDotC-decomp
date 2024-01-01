#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898f79c(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x1284);
  fVar2 = *(float *)(param_1 + 0x1288);
  if ((*(byte *)(iVar1 + 2) & 0x10) == 0) {
    fVar4 = fVar3;
    if ((*(byte *)(iVar1 + 2) & 0x40) != 0) {
      fVar4 = fVar3 - 0.03;
      *(float *)(param_1 + 0x1284) = fVar4;
      if (fVar4 < -0.78) {
        *(undefined4 *)(param_1 + 0x1284) = 0xbf47ae14;
        fVar4 = -0.78;
      }
    }
  }
  else {
    fVar4 = fVar3 + 0.03;
    *(float *)(param_1 + 0x1284) = fVar4;
    if (0.78 < fVar4) {
      *(undefined4 *)(param_1 + 0x1284) = 0x3f47ae14;
      fVar4 = 0.78;
    }
  }
  if (((int)*(char *)(iVar1 + 2) & 0x80U) == 0) {
    if ((*(byte *)(iVar1 + 2) & 0x20) != 0) {
      *(float *)(param_1 + 0x1288) = fVar2 + 0.03;
    }
  }
  else {
    *(float *)(param_1 + 0x1288) = fVar2 - 0.03;
  }
  if ((fVar3 != fVar4) || (fVar2 != *(float *)(param_1 + 0x1288))) {
    *(undefined4 *)(param_1 + 0x128c) = 0;
  }
  return;
}

