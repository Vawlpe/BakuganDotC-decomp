#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c8ed8(int **param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = *param_1;
  iVar1 = *piVar2;
  fVar3 = (float)piVar2[2];
  if (0 < iVar1) {
    if (iVar1 < 2) {
      fVar3 = fVar3 - 0.1;
      piVar2[2] = (int)fVar3;
      if (fVar3 <= 0.0) {
        piVar2[2] = 0;
        fVar3 = 0.0;
        *piVar2 = 0;
      }
    }
    else {
      if (2 < iVar1) {
        iVar1 = piVar2[1];
        goto LAB_088c8f6c;
      }
      fVar3 = fVar3 + 0.1;
      piVar2[2] = (int)fVar3;
      if (1.0 <= fVar3) {
        piVar2[2] = 0x3f800000;
        fVar3 = 1.0;
        *piVar2 = 0;
      }
    }
  }
  iVar1 = piVar2[1];
LAB_088c8f6c:
  *(float *)(*(int *)(iVar1 + 0x78) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0xa0) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x110) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 8) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x50) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x70) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x10) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x48) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x54) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0xc) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x4c) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x6c) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x44) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x14) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x74) + 0xbc) = fVar3;
  *(float *)(*(int *)(piVar2[1] + 0x9c) + 0xbc) = fVar3;
  return;
}

