#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4bf4(float param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = false;
  fVar3 = *(float *)(*(int *)(param_2 + 0xd4) + 0xa8);
  if ((-1 < *(int *)(param_2 + 0xe4)) && (*(int *)(param_2 + 0xe4) < 2)) {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar2 = *(int *)(param_2 + 0x120);
    fVar4 = *(float *)(param_2 + 0x74) * param_1 * fVar3;
    *(float *)(*(int *)(param_2 + 0x120) + 0x10) = fVar4;
    *(float *)(iVar2 + 4) = fVar4;
    iVar2 = *(int *)(param_2 + 0x120);
    fVar3 = *(float *)(param_2 + 0x74) * (param_1 + 1.0) * fVar3;
    *(float *)(*(int *)(param_2 + 0x120) + 0x28) = fVar3;
    *(float *)(iVar2 + 0x1c) = fVar3;
  }
  return;
}

