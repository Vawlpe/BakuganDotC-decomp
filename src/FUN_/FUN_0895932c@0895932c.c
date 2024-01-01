#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895932c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  iVar1 = (int)*(char *)(param_1 + 0x4cda);
  param_2 = param_2 & 0xffff;
  iVar3 = 0;
  param_4 = param_4 & 0xffff;
  param_5 = param_5 & 0xffff;
  if (0 < iVar1) {
    do {
      iVar4 = 0;
      if (param_5 != 0) {
        iVar6 = param_1 + (param_2 & 0xffff) * 8;
        iVar1 = *(int *)(param_1 + 0x1c);
        do {
          uVar7 = param_4 + iVar4 & 0xffff;
          iVar5 = uVar7 * 4;
          FUN_089f46dc(*(undefined4 *)(iVar1 + iVar5));
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
          iVar1 = *(int *)(param_1 + 0x1c);
          iVar2 = param_1 + uVar7 * 8;
          fVar8 = *(float *)(iVar6 + 0x411c);
          iVar4 = iVar4 + 1;
          *(float *)(iVar2 + 0x4118) =
               *(float *)(*(int *)(iVar1 + iVar5) + 0x60) - *(float *)(iVar6 + 0x4118);
          *(float *)(iVar2 + 0x411c) = *(float *)(*(int *)(iVar1 + iVar5) + 100) - fVar8;
        } while (iVar4 < (int)param_5);
        iVar1 = (int)*(char *)(param_1 + 0x4cda);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + (param_3 & 0xffff);
      param_4 = param_4 + param_5;
    } while (iVar3 < iVar1);
  }
  return;
}

