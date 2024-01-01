#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08939d9c(int param_1,char param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = param_1 + (param_3 & 0xff) * 0x28;
  fVar6 = *(float *)(iVar5 + 0x90) + 0.125;
  iVar4 = (param_3 & 0xff) * 4;
  piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
  if (param_2 == '\0') {
    *(float *)(iVar5 + 0x90) = fVar6;
    *(float *)(*piVar2 + 0xbc) = *(float *)(iVar5 + 0x94) + (1.0 - (fVar6 - 1.0) * (fVar6 - 1.0));
    fVar6 = *(float *)(iVar5 + 0x90) - 1.0;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) =
         *(float *)(iVar5 + 0x98) - (1.0 - fVar6 * fVar6) * 0.5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    bVar1 = 1.0 <= *(float *)(iVar5 + 0x90);
    iVar5 = *piVar2;
    if (bVar1) {
      *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x94) = 0x3f800000;
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
      iVar5 = *piVar2;
    }
    iVar4 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                 *(undefined4 *)(iVar4 + 0x9c),iVar5,0);
  }
  else {
    *(float *)(iVar5 + 0x90) = fVar6;
    *(float *)(*piVar2 + 0xbc) = *(float *)(iVar5 + 0x94) - fVar6 * fVar6;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) =
         *(float *)(iVar5 + 0x98) + *(float *)(iVar5 + 0x90) * *(float *)(iVar5 + 0x90) * 0.5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    bVar1 = 1.0 <= *(float *)(iVar5 + 0x90);
    iVar5 = *piVar2;
    if (bVar1) {
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
      iVar5 = *piVar2;
    }
    iVar4 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                 *(undefined4 *)(iVar4 + 0x9c),iVar5,0);
  }
  return bVar1;
}

