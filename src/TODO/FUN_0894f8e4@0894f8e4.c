#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894f8e4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  FUN_089a50c0(0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (((int)*(char *)(iVar2 + 8) & 0x80U) == 0) {
    if ((*(byte *)(iVar2 + 8) & 0x20) != 0) {
      if (*(char *)(param_1 + 0x708) == '\x01') {
        *(undefined4 *)(param_1 + 0x70c) = 0x40800000;
      }
      goto LAB_0894f970;
    }
    cVar1 = *(char *)(iVar2 + 4);
  }
  else {
    if (*(char *)(param_1 + 0x708) == '\0') {
      *(undefined4 *)(param_1 + 0x70c) = 0x40800000;
    }
LAB_0894f970:
    cVar1 = *(char *)(iVar2 + 4);
  }
  if (((int)cVar1 & 0x80U) == 0) {
    if ((*(byte *)(iVar2 + 4) & 0x20) == 0) {
      fVar7 = *(float *)(param_1 + 0x70c);
      goto LAB_0894f9cc;
    }
    if (*(char *)(param_1 + 0x708) == '\x01') {
      *(undefined *)(param_1 + 0x709) = 1;
      *(undefined4 *)(param_1 + 0x70c) = 0x40800000;
    }
  }
  else if (*(char *)(param_1 + 0x708) == '\0') {
    *(undefined4 *)(param_1 + 0x70c) = 0x40800000;
    *(undefined *)(param_1 + 0x709) = 1;
  }
  fVar7 = *(float *)(param_1 + 0x70c);
LAB_0894f9cc:
  fVar7 = *(float *)(param_1 + 0x710) + 1.0 / fVar7;
  *(float *)(param_1 + 0x710) = fVar7;
  if (fVar7 < 0.5) {
    *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = 1.0 - fVar7 * 2.0;
    iVar2 = (int)*(char *)(param_1 + 0x74);
  }
  else {
    *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = (fVar7 - 0.5) * 2.0 + 1.0;
    iVar2 = (int)*(char *)(param_1 + 0x74);
    if (*(char *)(param_1 + 0x7f) == '\0') {
      FUN_0894e6cc(param_1,*(char *)(param_1 + 0x74));
      *(undefined *)(param_1 + 0x7f) = 1;
      iVar2 = (int)*(char *)(param_1 + 0x74);
    }
  }
  iVar4 = *(char *)(param_1 + 0x75) + 4;
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc);
  iVar3 = param_1 + iVar4 * 0x28;
  iVar5 = (*(int **)(param_1 + 0x1c))[iVar4];
  iVar6 = param_1 + (iVar2 + 4) * 0x28;
  iVar2 = (iVar2 + 4) * 4;
  if (*(char *)(param_1 + 0x708) == '\0') {
    fVar7 = *(float *)(param_1 + 0x710) - 1.0;
    *(float *)(iVar5 + 0x60) =
         (float)(int)*(short *)(iVar3 + 0x8c) +
         (1.0 - fVar7 * fVar7) * (float)(int)*(short *)(iVar3 + 0x90);
    fVar7 = *(float *)(param_1 + 0x710) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x60) =
         (float)(int)*(short *)(iVar6 + 0x8c) +
         (1.0 - fVar7 * fVar7) * (float)(int)*(short *)(iVar6 + 0x90);
    fVar7 = *(float *)(param_1 + 0x710);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x710) - 1.0;
    *(float *)(iVar5 + 0x60) =
         (float)(int)*(short *)(iVar3 + 0x8c) -
         (1.0 - fVar7 * fVar7) * (float)(int)*(short *)(iVar3 + 0x90);
    fVar7 = *(float *)(param_1 + 0x710) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x60) =
         (float)(int)*(short *)(iVar6 + 0x8c) -
         (1.0 - fVar7 * fVar7) * (float)(int)*(short *)(iVar6 + 0x90);
    fVar7 = *(float *)(param_1 + 0x710);
  }
  if (fVar7 < 1.0) {
    return 0;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 0x60) =
       (float)(int)*(short *)(iVar3 + 0x8e);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x60) =
       (float)(int)*(short *)(iVar6 + 0x8e);
  *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc);
  return 1;
}

