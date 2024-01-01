#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894b238(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  
  param_2 = param_2 * 4;
  iVar8 = (param_2 + 0x2f) * 4;
  iVar3 = (int)*(short *)(param_1 + param_3 * 2 + 0xfc);
  iVar6 = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
  if (iVar3 != 0) {
    iVar4 = 0;
    iVar5 = param_1;
    iVar7 = iVar6;
    do {
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + *(short *)(iVar5 + 0xfc);
      iVar5 = iVar5 + 2;
    } while (iVar4 < 0x14);
    iVar6 = (iVar3 * 100) / iVar7;
    if (((float)iVar3 * 100.0) / (float)iVar7 <= (float)iVar6) {
      if (iVar6 == 0) {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if (iVar6 < 10) {
    FUN_089f4a90((float)(iVar6 / 5),(float)(iVar6 % 5),uVar1);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-2] + 0x60) + 8.0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + -4);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + -8);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + 300);
  }
  else if (iVar6 < 100) {
    FUN_089f4a90((float)((iVar6 % 10) / 5),(float)((iVar6 % 10) % 5),uVar1);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-2] + 0x60) + 12.0;
    FUN_089f4a90((float)((iVar6 / 10) / 5),(float)((iVar6 / 10) % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + -4));
    iVar3 = *(int *)(param_1 + 0x1c) + iVar8;
    *(float *)(*(int *)(iVar3 + -4) + 0x60) = *(float *)(*(int *)(iVar3 + -8) + 0x60) + 4.0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + -4);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + -8);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + 300);
  }
  else {
    FUN_089f4a90((float)((iVar6 % 10) / 5),(float)((iVar6 % 10) % 5),uVar1);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(*piVar2 + 0x60) = *(float *)(piVar2[-2] + 0x60) + 16.0;
    iVar3 = (iVar6 % 100) / 10;
    FUN_089f4a90((float)(iVar3 / 5),(float)(iVar3 % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + -4));
    iVar3 = *(int *)(param_1 + 0x1c) + iVar8;
    *(float *)(*(int *)(iVar3 + -4) + 0x60) = *(float *)(*(int *)(iVar3 + -8) + 0x60) + 8.0;
    FUN_089f4a90((float)((iVar6 / 100) / 5),(float)((iVar6 / 100) % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 + -8));
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + -4);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 + -8);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + 300);
  }
  fVar10 = (float)iVar6 * 154.0 * 0.01;
  uVar9 = FUN_089f494c(uVar1);
  FUN_089f4924(0x431a0000,uVar9,uVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + param_2 + 300) + 0x60) = 0x433d0000;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + 300);
  local_34 = FUN_089f494c(uVar1);
  local_40 = 0x40800000;
  local_3c = 0;
  local_38 = fVar10;
  FUN_089f4060(uVar1,&local_40);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + 300);
  uVar9 = FUN_089f494c(uVar1);
  FUN_089f4924(fVar10,uVar9,uVar1);
  return;
}

