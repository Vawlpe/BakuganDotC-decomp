#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893dfa4(int param_1,char param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = param_1 + (param_3 & 0xff) * 0x28;
  fVar6 = *(float *)(iVar5 + 0x94);
  iVar4 = (param_3 & 0xff) * 4;
  bVar1 = false;
  piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
  if (param_2 == '\0') {
    if (*(char *)(iVar5 + 0x7f) == '\0') {
      fVar7 = (fVar6 + 0.125) - 1.0;
      *(float *)(iVar5 + 0x94) = fVar6 + 0.125;
      *(float *)(*piVar2 + 0xbc) = *(float *)(iVar5 + 0x98) + (1.0 - fVar7 * fVar7);
      fVar6 = *(float *)(iVar5 + 0x94) - 1.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) =
           *(float *)(iVar5 + 0x9c) + (1.0 - fVar6 * fVar6) * 1.2;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
      iVar3 = *piVar2;
      if (1.0 <= *(float *)(iVar5 + 0x94)) {
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        *(undefined *)(iVar5 + 0x7f) = 1;
        iVar3 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar5 + 0x94) = 0;
        piVar2 = (int *)(iVar3 + iVar4);
        *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(*piVar2 + 0x90);
        iVar3 = *piVar2;
      }
    }
    else {
      fVar6 = fVar6 + 0.25;
      *(float *)(iVar5 + 0x94) = fVar6;
      *(float *)(*piVar2 + 0x90) = *(float *)(iVar5 + 0x9c) - fVar6 * fVar6 * 0.2;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
      iVar3 = *piVar2;
      if (1.0 <= *(float *)(iVar5 + 0x94)) {
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) = 0x3f800000;
        bVar1 = true;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x94) = 0x3f800000;
        piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
        iVar3 = *piVar2;
      }
    }
    iVar4 = *piVar2;
    FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                 *(undefined4 *)(iVar4 + 0x9c),iVar3,0);
  }
  else {
    fVar6 = fVar6 + 0.125;
    *(float *)(iVar5 + 0x94) = fVar6;
    *(float *)(*piVar2 + 0xbc) = *(float *)(iVar5 + 0x98) - fVar6 * fVar6;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) =
         *(float *)(iVar5 + 0x9c) - *(float *)(iVar5 + 0x94) * *(float *)(iVar5 + 0x94);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x90);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    bVar1 = 1.0 <= *(float *)(iVar5 + 0x94);
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

