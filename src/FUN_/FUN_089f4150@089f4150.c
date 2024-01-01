#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4150(int param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 < 2) {
    FUN_089f3eb8(param_1,iVar1 + 2);
    iVar1 = *(int *)(param_1 + 0xe4);
  }
  if ((1 < iVar1) && (iVar1 < 5)) {
    fVar3 = *param_2 * *(float *)(*(int *)(param_1 + 0xd4) + 0xa4);
    pfVar2 = *(float **)(param_1 + 0x120);
    *(float *)(*(int *)(param_1 + 0x120) + 0x18) = fVar3;
    *pfVar2 = fVar3;
    fVar3 = param_2[2] * *(float *)(*(int *)(param_1 + 0xd4) + 0xa4);
    iVar1 = *(int *)(param_1 + 0x120);
    *(float *)(*(int *)(param_1 + 0x120) + 0x24) = fVar3;
    *(float *)(iVar1 + 0xc) = fVar3;
    fVar3 = param_2[1] * *(float *)(*(int *)(param_1 + 0xd4) + 0xa8);
    iVar1 = *(int *)(param_1 + 0x120);
    *(float *)(*(int *)(param_1 + 0x120) + 0x10) = fVar3;
    *(float *)(iVar1 + 4) = fVar3;
    fVar3 = param_2[3] * *(float *)(*(int *)(param_1 + 0xd4) + 0xa8);
    iVar1 = *(int *)(param_1 + 0x120);
    *(float *)(*(int *)(param_1 + 0x120) + 0x28) = fVar3;
    *(float *)(iVar1 + 0x1c) = fVar3;
  }
  return;
}

