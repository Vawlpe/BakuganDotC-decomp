#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089a8ebc(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x664) + 0.125;
  uVar1 = 0;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x664) = fVar5;
    iVar4 = 0;
    *(float *)(*(int *)(param_1 + 0x6a0) + 0x6c) =
         *(float *)(param_1 + 0x660) + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0));
    fVar5 = *(float *)(param_1 + 0x664);
    iVar2 = param_1;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x68c) != 0) {
        *(float *)(*(int *)(iVar3 + 0x68c) + 0x6c) =
             *(float *)(iVar2 + 0x598) + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0));
        fVar5 = *(float *)(param_1 + 0x664);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 5);
    if (1.0 <= fVar5) {
      iVar2 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x6a0) + 0x6c) = 0x3f800000;
      do {
        if (*(int *)(param_1 + 0x68c) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0x6c) = 0x3f800000;
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 4;
      } while (iVar2 < 5);
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0x664) = fVar5;
    iVar4 = 0;
    *(float *)(*(int *)(param_1 + 0x6a0) + 0x6c) = *(float *)(param_1 + 0x660) - fVar5 * fVar5;
    fVar5 = *(float *)(param_1 + 0x664);
    iVar2 = param_1;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x68c) != 0) {
        *(float *)(*(int *)(iVar3 + 0x68c) + 0x6c) = *(float *)(iVar2 + 0x598) - fVar5 * fVar5;
        fVar5 = *(float *)(param_1 + 0x664);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 5);
    if (1.0 <= fVar5) {
      iVar2 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x6a0) + 0x6c) = 0;
      do {
        if (*(int *)(param_1 + 0x68c) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0x6c) = 0;
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 4;
      } while (iVar2 < 5);
      uVar1 = 1;
    }
  }
  return uVar1;
}

