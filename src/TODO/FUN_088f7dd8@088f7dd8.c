#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f7dd8(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = 1.8;
  if (*(int *)(param_2 + 0x104) != 0) {
    FUN_088f77dc(param_2);
    if (*(int *)(param_2 + 0x108) != 0) {
      FUN_088fd4ec(param_1,param_2,*(int *)(param_2 + 0x108) + 0x10);
    }
    piVar1 = *(int **)(param_2 + 0x104);
    fVar5 = (float)piVar1[8];
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    fVar4 = *(float *)(iVar3 + 0x44) * (1.0 - fVar5) + *(float *)(iVar2 + 0x44) * fVar5;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    fVar6 = *(float *)(iVar3 + 0x50);
    fVar7 = *(float *)(iVar2 + 0x50);
    *(float *)(*(int *)(param_2 + 4) + 0x24) =
         *(float *)(iVar3 + 0x54) * (1.0 - fVar5) + *(float *)(iVar2 + 0x54) * fVar5;
    *(float *)(*(int *)(param_2 + 4) + 0x20) = fVar6 * (1.0 - fVar5) + fVar7 * fVar5;
  }
  FUN_088fc500(param_1,0x3f99999a,fVar4,0x43c80000,0x44960000,param_2,param_2 + 0x60);
  if ((*(int **)(param_2 + 0x104) == (int *)0x0) ||
     (*(char *)(**(int **)(param_2 + 0x104) + 0x61) != '\0')) {
    FUN_088fc7c0(param_1,param_2);
  }
  FUN_088fc600(param_1,param_2,param_2 + 0x60,param_2 + 0x20,param_2 + 0x30);
  FUN_088fd51c(param_2);
  return;
}

