#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886004c(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = 1.0;
  iVar1 = FUN_08886d3c(param_2 + 0x434,0x17);
  if (iVar1 != 0) {
    fVar2 = 1.5;
  }
  iVar1 = FUN_08886d3c(param_2 + 0x434,0x18);
  if (iVar1 != 0) {
    fVar2 = fVar2 + 1.0;
  }
  fVar2 = *(float *)(param_2 + 0x188) + fVar2 * param_1;
  if (100.0 < fVar2) {
    fVar2 = 100.0;
  }
  *(float *)(param_2 + 0x188) = fVar2;
  return;
}

