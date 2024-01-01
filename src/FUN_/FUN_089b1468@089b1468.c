#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089b1468(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_089a50c0(0);
  iVar2 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x9b0);
  iVar3 = param_1 + *(char *)(param_1 + 0x75) * 0x28;
  fVar4 = (float)(int)*(short *)(iVar3 + 300);
  fVar5 = (float)(int)*(short *)(iVar3 + 0x130);
  if (((int)*(char *)(iVar2 + 8) & 0x80U) == 0) {
    if (((*(byte *)(iVar2 + 8) & 0x20) != 0) && (cVar1 == '\x01')) {
      *(undefined4 *)(param_1 + 0x9b4) = 0x40800000;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x9b4) = 0x40800000;
  }
  if (((int)*(char *)(iVar2 + 4) & 0x80U) == 0) {
    if (((*(byte *)(iVar2 + 4) & 0x20) != 0) && (cVar1 == '\x01')) {
      *(undefined *)(param_1 + 0x9b1) = 1;
      *(undefined4 *)(param_1 + 0x9b4) = 0x40800000;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x9b4) = 0x40800000;
    *(undefined *)(param_1 + 0x9b1) = 1;
  }
  fVar6 = *(float *)(param_1 + 0x9b8) + 1.0 / *(float *)(param_1 + 0x9b4);
  *(float *)(param_1 + 0x9b8) = fVar6;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x10);
  if (cVar1 == '\0') {
    *(float *)(iVar2 + 0x60) = fVar4 + (1.0 - (fVar6 - 1.0) * (fVar6 - 1.0)) * fVar5;
    fVar4 = *(float *)(param_1 + 0x9b8) - 1.0;
    iVar2 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x10) + 0x60) =
         (float)(int)*(short *)(iVar2 + 300) +
         (1.0 - fVar4 * fVar4) * (float)(int)*(short *)(iVar2 + 0x130);
    fVar4 = *(float *)(param_1 + 0x9b8);
  }
  else {
    *(float *)(iVar2 + 0x60) = fVar4 - (1.0 - (fVar6 - 1.0) * (fVar6 - 1.0)) * fVar5;
    fVar4 = *(float *)(param_1 + 0x9b8) - 1.0;
    iVar2 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x10) + 0x60) =
         (float)(int)*(short *)(iVar2 + 300) -
         (1.0 - fVar4 * fVar4) * (float)(int)*(short *)(iVar2 + 0x130);
    fVar4 = *(float *)(param_1 + 0x9b8);
  }
  if (fVar4 < 1.0) {
    return 0;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x10) + 0x60) =
       (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0x75) * 0x28 + 0x12e);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x10) + 0x60) =
       (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0x74) * 0x28 + 0x12e);
  *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc);
  return 1;
}

