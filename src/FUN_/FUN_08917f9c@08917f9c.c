#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08917f9c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  do {
    if (iVar4 == 0) {
      fVar5 = *(float *)(*(int *)(iVar3 + 0x70) + 0x60) - *(float *)(*(int *)(iVar3 + 0x80) + 0x60);
    }
    else {
      fVar5 = *(float *)(*(int *)(iVar3 + 0x80) + 0x60) - *(float *)(*(int *)(iVar3 + 0x70) + 0x60);
    }
    *(float *)(param_1 + 0x8dc) = fVar5;
    *(float *)(param_1 + 0x8e0) =
         (*(float *)(*(int *)(iVar3 + 0x70) + 100) - *(float *)(*(int *)(iVar3 + 0x80) + 100)) - 2.0
    ;
    if (iVar4 == 0) {
      fVar5 = *(float *)(*(int *)(iVar3 + 0x70) + 0x60) - *(float *)(*(int *)(iVar3 + 0x78) + 0x60);
    }
    else {
      fVar5 = *(float *)(*(int *)(iVar3 + 0x78) + 0x60) - *(float *)(*(int *)(iVar3 + 0x70) + 0x60);
    }
    *(float *)(param_1 + 0x8e4) = fVar5;
    piVar1 = (int *)(iVar3 + 0x70);
    piVar2 = (int *)(iVar3 + 0x78);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    *(float *)(param_1 + 0x8e8) = (*(float *)(*piVar1 + 100) - *(float *)(*piVar2 + 100)) - 2.0;
    param_1 = param_1 + 0x10;
  } while (iVar4 < 2);
  return;
}

