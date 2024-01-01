#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08954e84(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_089a50c0(0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (((int)*(char *)(iVar2 + 8) & 0x80U) == 0) {
    if ((*(byte *)(iVar2 + 8) & 0x20) != 0) {
      if (*(char *)(param_1 + 0xa34) == '\x01') {
        *(undefined4 *)(param_1 + 0xa38) = 0x40800000;
      }
      goto LAB_08954eec;
    }
    cVar1 = *(char *)(iVar2 + 4);
  }
  else {
    if (*(char *)(param_1 + 0xa34) == '\0') {
      *(undefined4 *)(param_1 + 0xa38) = 0x40800000;
    }
LAB_08954eec:
    cVar1 = *(char *)(iVar2 + 4);
  }
  if (((int)cVar1 & 0x80U) == 0) {
    if ((*(byte *)(iVar2 + 4) & 0x20) == 0) {
      fVar5 = *(float *)(param_1 + 0xa38);
      goto LAB_08954f48;
    }
    if (*(char *)(param_1 + 0xa34) == '\x01') {
      *(undefined *)(param_1 + 0xa35) = 1;
      *(undefined4 *)(param_1 + 0xa38) = 0x40800000;
    }
  }
  else if (*(char *)(param_1 + 0xa34) == '\0') {
    *(undefined4 *)(param_1 + 0xa38) = 0x40800000;
    *(undefined *)(param_1 + 0xa35) = 1;
  }
  fVar5 = *(float *)(param_1 + 0xa38);
LAB_08954f48:
  if (fVar5 != 0.0) {
    iVar2 = param_1 + *(char *)(param_1 + 0x75) * 0x28;
    fVar3 = (float)(int)*(short *)(iVar2 + 0xb4);
    fVar4 = (float)(int)*(short *)(iVar2 + 0xb8);
    fVar5 = *(float *)(param_1 + 0xa3c) + 1.0 / fVar5;
    *(float *)(param_1 + 0xa3c) = fVar5;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 4);
    if (*(char *)(param_1 + 0xa34) == '\0') {
      *(float *)(iVar2 + 0x60) = fVar3 + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * fVar4;
      fVar5 = *(float *)(param_1 + 0xa3c) - 1.0;
      iVar2 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4) + 0x60) =
           (float)(int)*(short *)(iVar2 + 0xb4) +
           (1.0 - fVar5 * fVar5) * (float)(int)*(short *)(iVar2 + 0xb8);
      fVar5 = *(float *)(param_1 + 0xa3c);
    }
    else {
      *(float *)(iVar2 + 0x60) = fVar3 - (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * fVar4;
      fVar5 = *(float *)(param_1 + 0xa3c) - 1.0;
      iVar2 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4) + 0x60) =
           (float)(int)*(short *)(iVar2 + 0xb4) -
           (1.0 - fVar5 * fVar5) * (float)(int)*(short *)(iVar2 + 0xb8);
      fVar5 = *(float *)(param_1 + 0xa3c);
    }
    if (1.0 <= fVar5) {
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 4) + 0x60) =
           (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0x75) * 0x28 + 0xb6);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 4) + 0x60) =
           (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0x74) * 0x28 + 0xb6);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0xbc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x60c) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0xbc);
      return 1;
    }
  }
  return 0;
}

