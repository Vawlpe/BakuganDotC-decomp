#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4a90(float param_1,float param_2,int param_3)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = false;
  fVar4 = *(float *)(*(int *)(param_3 + 0xd4) + 0xa4);
  fVar5 = *(float *)(*(int *)(param_3 + 0xd4) + 0xa8);
  if ((-1 < *(int *)(param_3 + 0xe4)) && (*(int *)(param_3 + 0xe4) < 2)) {
    bVar1 = true;
  }
  if (!bVar1) {
    pfVar2 = *(float **)(param_3 + 0x120);
    fVar6 = *(float *)(param_3 + 0x70) * param_1 * fVar4;
    *(float *)(*(int *)(param_3 + 0x120) + 0x18) = fVar6;
    *pfVar2 = fVar6;
    iVar3 = *(int *)(param_3 + 0x120);
    fVar4 = *(float *)(param_3 + 0x70) * (param_1 + 1.0) * fVar4;
    *(float *)(*(int *)(param_3 + 0x120) + 0x24) = fVar4;
    *(float *)(iVar3 + 0xc) = fVar4;
    iVar3 = *(int *)(param_3 + 0x120);
    fVar4 = *(float *)(param_3 + 0x74) * param_2 * fVar5;
    *(float *)(*(int *)(param_3 + 0x120) + 0x10) = fVar4;
    *(float *)(iVar3 + 4) = fVar4;
    iVar3 = *(int *)(param_3 + 0x120);
    fVar5 = *(float *)(param_3 + 0x74) * (param_2 + 1.0) * fVar5;
    *(float *)(*(int *)(param_3 + 0x120) + 0x28) = fVar5;
    *(float *)(iVar3 + 0x1c) = fVar5;
  }
  return;
}

