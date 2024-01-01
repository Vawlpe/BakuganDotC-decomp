#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089537f0(int param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x94) + 0.125;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x94) = fVar5;
    *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) =
         *(float *)(param_1 + 0x98) + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * 0.8;
    fVar5 = *(float *)(param_1 + 0x94) - 1.0;
    *(float *)(**(int **)(param_1 + 0x1c) + 0x94) =
         *(float *)(param_1 + 0x9c) + (1.0 - fVar5 * fVar5);
    piVar3 = *(int **)(param_1 + 0x1c);
    bVar1 = 1.0 <= *(float *)(param_1 + 0x94);
    iVar4 = *piVar3;
    if (bVar1) {
      *(undefined4 *)(iVar4 + 0xbc) = 0x3f4ccccd;
      *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x94) = 0x3f800000;
      piVar3 = *(int **)(param_1 + 0x1c);
      iVar4 = *piVar3;
    }
    iVar2 = *piVar3;
    FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x9c),iVar4,0);
  }
  else {
    *(float *)(param_1 + 0x94) = fVar5;
    *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = *(float *)(param_1 + 0x98) - fVar5 * fVar5 * 0.8
    ;
    *(float *)(**(int **)(param_1 + 0x1c) + 0x94) =
         *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94);
    piVar3 = *(int **)(param_1 + 0x1c);
    bVar1 = 1.0 <= *(float *)(param_1 + 0x94);
    iVar4 = *piVar3;
    if (bVar1) {
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      piVar3 = *(int **)(param_1 + 0x1c);
      iVar4 = *piVar3;
    }
    iVar2 = *piVar3;
    FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x9c),iVar4,0);
  }
  return bVar1;
}

