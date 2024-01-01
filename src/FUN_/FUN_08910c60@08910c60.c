#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910c60(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != -1) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + param_3 * 4 + 0x14);
    fVar6 = (float)FUN_089f4944(iVar5);
    fVar7 = (float)FUN_089f494c(iVar5);
    FUN_089f4924(fVar6 * 0.9090909,fVar7 * 0.9090909,iVar5);
    uVar3 = FUN_089f7720("p_waku_02");
    *(undefined4 *)(iVar5 + 0xd4) = uVar3;
    *(undefined4 *)(iVar5 + 0xc0) = 0;
    *(undefined4 *)(iVar5 + 0xc4) = 0;
    *(undefined4 *)(iVar5 + 200) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4 + 0x34);
    fVar6 = (float)FUN_089f4944(uVar3);
    fVar7 = (float)FUN_089f494c(uVar3);
    FUN_089f4924(fVar6 * 0.9090909,fVar7 * 0.9090909,uVar3);
  }
  if (param_2 == -1) {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    param_2 = param_2 * 4;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + 0x14);
    fVar6 = (float)FUN_089f4944(iVar5);
    fVar7 = (float)FUN_089f494c(iVar5);
    FUN_089f4924(fVar6 * 1.1,fVar7 * 1.1,iVar5);
    uVar3 = FUN_089f7720("p_waku_01");
    *(undefined4 *)(iVar5 + 0xd4) = uVar3;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 + 0x34);
    fVar6 = (float)FUN_089f4944(uVar3);
    fVar7 = (float)FUN_089f494c(uVar3);
    FUN_089f4924(fVar6 * 1.1,fVar7 * 1.1,uVar3);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x50);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + 0x14);
    uVar3 = *(undefined4 *)(iVar4 + 100);
    uVar1 = *(undefined4 *)(iVar4 + 0x68);
    uVar2 = *(undefined4 *)(iVar4 + 0x6c);
    *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined4 *)(iVar5 + 100) = uVar3;
    *(undefined4 *)(iVar5 + 0x68) = uVar1;
    *(undefined4 *)(iVar5 + 0x6c) = uVar2;
    *(undefined4 *)(iVar5 + 0x68) = 0xc3480000;
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  *(undefined4 *)(*(int *)(iVar5 + 0x90) + 0xbc) = 0xbf800000;
  return;
}

