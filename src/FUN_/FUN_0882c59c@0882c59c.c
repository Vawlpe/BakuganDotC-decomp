#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882c59c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    return;
  }
  iVar3 = FUN_088cc354(param_3);
  if (iVar3 <= param_2) {
    return;
  }
  *(undefined *)(param_1 + 0x918) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  iVar3 = param_1 + 0x6a4;
  strcpy(iVar3,*(undefined4 *)(param_3 + param_2 * 4));
  iVar6 = *(int *)(param_1 + 0x688);
  FUN_089f51b8(iVar6);
  *(undefined4 *)(iVar6 + 0x84) = 0;
  FUN_08817a90(*(undefined4 *)(param_1 + 0x688),1);
  *(undefined4 *)(*(int *)(param_1 + 0x688) + 0xe0) = 0x438e0000;
  FUN_088184e8(0x42400000,*(undefined4 *)(param_1 + 0x688),iVar3,param_1 + 0x8c8,param_1 + 0x8c4,0);
  bVar1 = *(float *)(*(int *)(param_1 + 0x688) + 0x98) * 2.0 < *(float *)(param_1 + 0x8c8);
  if (bVar1) {
    FUN_08817a90(*(int *)(param_1 + 0x688),0);
    *(undefined4 *)(*(int *)(param_1 + 0x688) + 0xe0) = 0x438e0000;
    FUN_088184e8(0x42400000,*(undefined4 *)(param_1 + 0x688),iVar3,param_1 + 0x8c8,param_1 + 0x8c4,0
                );
  }
  iVar6 = FUN_0882c564(param_1);
  iVar4 = *(int *)(param_1 + 0x688);
  if (iVar6 == 0) {
    param_4 = param_4 + 0x78;
  }
  else {
    param_4 = param_4 + 0x40;
  }
  iVar6 = (int)((*(float *)(iVar4 + 0xe0) - *(float *)(param_1 + 0x8c4)) * 0.5);
  if (-1 < iVar6) {
    param_4 = iVar6 + param_4;
  }
  iVar6 = param_5 + 0x18;
  if (*(float *)(param_1 + 0x8c8) <= *(float *)(iVar4 + 0x98) * 2.0) {
    if (*(float *)(param_1 + 0x8c8) <= *(float *)(iVar4 + 0x98)) {
      iVar6 = param_5 + 0x20;
    }
    if (!bVar1) {
      iVar5 = *(int *)(iVar4 + 0x74);
      goto LAB_0882c764;
    }
    iVar6 = iVar6 + 4;
  }
  else {
    iVar6 = param_5 + 0x14;
  }
  iVar5 = *(int *)(iVar4 + 0x74);
LAB_0882c764:
  uVar2 = (**(code **)(iVar5 + 0x14))
                    ((float)param_4,(float)iVar6,0x42400000,iVar4 + *(short *)(iVar5 + 0x10),iVar3,0
                     ,0,0);
  *(undefined *)(param_1 + 0x918) = uVar2;
  *(float *)(param_1 + 0x690) = (float)param_4;
  *(float *)(param_1 + 0x694) = (float)iVar6;
  return;
}

