#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899af04(int param_1,char param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = param_1 + param_3 * 0x28;
  fVar5 = *(float *)(iVar4 + 0x90) + 0.0625;
  param_3 = param_3 * 4;
  piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_3);
  if (param_2 == '\0') {
    *(float *)(iVar4 + 0x90) = fVar5;
    *(float *)(*piVar2 + 0xbc) = *(float *)(iVar4 + 0x94) + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0));
    fVar5 = *(float *)(iVar4 + 0x90) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x90) =
         *(float *)(iVar4 + 0x98) - (1.0 - fVar5 * fVar5) * 0.5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + param_3);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
    fVar5 = *(float *)(iVar4 + 0x90) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x60) =
         (float)(int)*(short *)(iVar4 + 0x88) -
         (1.0 - fVar5 * fVar5) * (float)(int)*(short *)(iVar4 + 0x8c);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_3);
    bVar1 = 1.0 <= *(float *)(iVar4 + 0x90);
    iVar3 = *piVar2;
    if (bVar1) {
      *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x90) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x94) = 0x3f800000;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x60) =
           (float)(int)*(short *)(iVar4 + 0x8a);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_3);
      iVar3 = *piVar2;
    }
    iVar4 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                 *(undefined4 *)(iVar4 + 0x9c),iVar3,0);
  }
  else {
    *(float *)(iVar4 + 0x90) = fVar5;
    *(float *)(*piVar2 + 0xbc) = *(float *)(iVar4 + 0x94) - fVar5 * fVar5;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x90) =
         *(float *)(iVar4 + 0x98) + *(float *)(iVar4 + 0x90) * *(float *)(iVar4 + 0x90) * 0.5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + param_3);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + param_3) + 0x60) =
         (float)(int)*(short *)(iVar4 + 0x88) +
         *(float *)(iVar4 + 0x90) * *(float *)(iVar4 + 0x90) * (float)(int)*(short *)(iVar4 + 0x8c);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_3);
    bVar1 = 1.0 <= *(float *)(iVar4 + 0x90);
    iVar4 = *piVar2;
    if (bVar1) {
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + param_3);
      iVar4 = *piVar2;
    }
    iVar3 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                 *(undefined4 *)(iVar3 + 0x9c),iVar4,0);
  }
  return bVar1;
}

