#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4b64(float param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = false;
  fVar4 = *(float *)(*(int *)(param_2 + 0xd4) + 0xa4);
  if ((-1 < *(int *)(param_2 + 0xe4)) && (*(int *)(param_2 + 0xe4) < 2)) {
    bVar1 = true;
  }
  if (!bVar1) {
    pfVar3 = *(float **)(param_2 + 0x120);
    fVar5 = *(float *)(param_2 + 0x70) * param_1 * fVar4;
    *(float *)(*(int *)(param_2 + 0x120) + 0x18) = fVar5;
    *pfVar3 = fVar5;
    iVar2 = *(int *)(param_2 + 0x120);
    fVar4 = *(float *)(param_2 + 0x70) * (param_1 + 1.0) * fVar4;
    *(float *)(*(int *)(param_2 + 0x120) + 0x24) = fVar4;
    *(float *)(iVar2 + 0xc) = fVar4;
  }
  return;
}

