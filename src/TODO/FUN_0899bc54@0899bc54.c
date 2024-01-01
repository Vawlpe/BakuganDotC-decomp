#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899bc54(int param_1,char param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == '\0') {
    fVar7 = *(float *)(param_1 + 0x225c) + 0.0625;
    fVar8 = fVar7 - 1.0;
    *(float *)(param_1 + 0x225c) = fVar7;
    *(float *)(*(int *)(param_1 + 0x1f04) + 0x6c) =
         *(float *)(param_1 + 0x2260) + (1.0 - fVar8 * fVar8);
    fVar7 = *(float *)(param_1 + 0x225c) - 1.0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1f04) + 0x130);
    fVar7 = *(float *)(param_1 + 0x2264) - (1.0 - fVar7 * fVar7) * 0.5;
    *(float *)(iVar5 + 0xa8) = fVar7;
    *(float *)(iVar5 + 0x94) = fVar7;
    *(float *)(iVar5 + 0x80) = fVar7;
    fVar7 = *(float *)(param_1 + 0x225c) - 1.0;
    *(float *)(*(int *)(param_1 + 0x1f04) + 0x20) =
         *(float *)(param_1 + 0x10e4) + (1.0 - fVar7 * fVar7) * 64.0;
    bVar1 = 1.0 <= *(float *)(param_1 + 0x225c);
    if (bVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x1f04) + 0x6c) = 0x3f800000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1f04) + 0x130);
      *(undefined4 *)(iVar5 + 0xa8) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x94) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x80) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1f04) + 0x20) = *(undefined4 *)(param_1 + 0x10e0);
      iVar5 = *(int *)(param_1 + 0x1f04);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1f04);
    }
    iVar6 = *(int *)(iVar5 + 0x130);
    uVar2 = *(undefined4 *)(iVar5 + 0x24);
    uVar3 = *(undefined4 *)(iVar5 + 0x28);
    uVar4 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(iVar6 + 0xb4) = uVar2;
    *(undefined4 *)(iVar6 + 0xb8) = uVar3;
    *(undefined4 *)(iVar6 + 0xbc) = uVar4;
    return bVar1;
  }
  fVar7 = *(float *)(param_1 + 0x225c) + 0.0625;
  *(float *)(param_1 + 0x225c) = fVar7;
  *(float *)(*(int *)(param_1 + 0x1f04) + 0x6c) = *(float *)(param_1 + 0x2260) - fVar7 * fVar7;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1f04) + 0x130);
  fVar7 = *(float *)(param_1 + 0x2264) +
          *(float *)(param_1 + 0x225c) * *(float *)(param_1 + 0x225c) * 0.5;
  *(float *)(iVar5 + 0xa8) = fVar7;
  *(float *)(iVar5 + 0x94) = fVar7;
  *(float *)(iVar5 + 0x80) = fVar7;
  *(float *)(*(int *)(param_1 + 0x1f04) + 0x20) =
       *(float *)(param_1 + 0x10e4) -
       *(float *)(param_1 + 0x225c) * *(float *)(param_1 + 0x225c) * 64.0;
  bVar1 = 1.0 <= *(float *)(param_1 + 0x225c);
  if (bVar1) {
    *(undefined4 *)(*(int *)(param_1 + 0x1f04) + 0x6c) = 0;
    iVar5 = *(int *)(param_1 + 0x1f04);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1f04);
  }
  iVar6 = *(int *)(iVar5 + 0x130);
  uVar2 = *(undefined4 *)(iVar5 + 0x24);
  uVar3 = *(undefined4 *)(iVar5 + 0x28);
  uVar4 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar6 + 0xb4) = uVar2;
  *(undefined4 *)(iVar6 + 0xb8) = uVar3;
  *(undefined4 *)(iVar6 + 0xbc) = uVar4;
  return bVar1;
}

