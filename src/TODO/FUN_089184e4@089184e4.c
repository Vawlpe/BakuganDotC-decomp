#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089184e4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *ptr;
  float fVar6;
  float fVar7;
  undefined auStack_70 [72];
  int local_28;
  
  memset_jak((undefined *)(param_1 + 0x91c),0,0x28);
  ptr = (undefined *)(param_1 + 0x944);
  memset_jak(ptr,0,0x40);
  FUN_0892bd00(*(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0),ptr);
  local_28 = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = local_28;
  if (iVar3 != 0) {
    FUN_089de2e4(iVar3,(&PTR_DAT_08ab0308)
                       [*(byte *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0)],0);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x914) = iVar4;
  FUN_089e0860();
  FUN_089b4c84(auStack_70,"%s.gmo",ptr);
  uVar2 = FUN_089d9674();
  FUN_089d9914(uVar2,auStack_70);
  uVar5 = *(undefined4 *)(param_1 + 0x914);
  uVar2 = FUN_089d9674();
  uVar2 = FUN_089d9c84(uVar2,ptr);
  FUN_089df400(0x3e4ccccd,uVar5,uVar2,1);
  iVar4 = *(int *)(*(int *)(param_1 + 0x914) + 0x14);
  (**(code **)(iVar4 + 0x3c))(*(int *)(param_1 + 0x914) + (int)*(short *)(iVar4 + 0x38));
  *(uint *)(*(int *)(param_1 + 0x914) + 8) =
       (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0);
  FUN_0885e260(*(undefined4 *)(param_1 + 0x914));
  iVar4 = *(int *)(*(int *)(param_1 + 0x914) + 0x130);
  fVar6 = (float)FUN_0892c0dc(*(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0),0);
  fVar7 = (float)FUN_0892c3f8(*(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0),0);
  fVar6 = fVar6 * fVar7;
  *(float *)(iVar4 + 0xa8) = fVar6;
  *(float *)(iVar4 + 0x94) = fVar6;
  *(float *)(iVar4 + 0x80) = fVar6;
  FUN_0892c034(*(undefined4 *)(param_1 + 0x914),
               *(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0),0);
  *(undefined4 *)(*(int *)(param_1 + 0x914) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x914) + 0x24) = 0xc2200000;
  iVar4 = *(int *)(param_1 + 0x914);
  iVar3 = *(int *)(iVar4 + 0x130);
  uVar2 = *(undefined4 *)(iVar4 + 0x24);
  uVar5 = *(undefined4 *)(iVar4 + 0x28);
  uVar1 = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(iVar3 + 0xb4) = uVar2;
  *(undefined4 *)(iVar3 + 0xb8) = uVar5;
  *(undefined4 *)(iVar3 + 0xbc) = uVar1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x914) + 0x130) + 0xbc) = 0x3f800000;
  iVar4 = *(int *)(*(int *)(param_1 + 0x914) + 0x14);
  (**(code **)(iVar4 + 0x34))(0x3f000000,*(int *)(param_1 + 0x914) + (int)*(short *)(iVar4 + 0x30));
  *(undefined4 *)(*(int *)(param_1 + 0x914) + 0x6c) = 0x3f800000;
  return;
}

