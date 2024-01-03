#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08933000(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *ptr;
  float fVar8;
  float fVar9;
  undefined auStack_70 [72];
  int local_28;
  
  memset_jak((undefined *)(param_1 + 0x1a88),0,0x28);
  ptr = (undefined *)(param_1 + 0x1ab0);
  memset_jak(ptr,0,0x40);
  piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar7 = *(uint *)(*piVar2 + 0x48c) & 0xff;
  FUN_0892bd00(uVar7,ptr);
  local_28 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = local_28;
  if (iVar4 != 0) {
    FUN_089de2e4(iVar4,(&PTR_DAT_08ab0308)[uVar7],0);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x1a80) = iVar5;
  FUN_089e0860();
  FUN_089b4c84(auStack_70,"%s.gmo",ptr);
  uVar3 = FUN_089d9674();
  FUN_089d9914(uVar3,auStack_70);
  uVar6 = *(undefined4 *)(param_1 + 0x1a80);
  uVar3 = FUN_089d9674();
  uVar3 = FUN_089d9c84(uVar3,ptr);
  FUN_089df400(0x3e4ccccd,uVar6,uVar3,1);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a80) + 0x14);
  (**(code **)(iVar5 + 0x3c))(*(int *)(param_1 + 0x1a80) + (int)*(short *)(iVar5 + 0x38));
  *(uint *)(*(int *)(param_1 + 0x1a80) + 8) = uVar7;
  FUN_0885e260(*(undefined4 *)(param_1 + 0x1a80));
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a80) + 0x130);
  fVar8 = (float)FUN_0892c0dc(uVar7,0);
  fVar9 = (float)FUN_0892c3f8(uVar7,0);
  fVar8 = fVar8 * fVar9 * 0.6;
  *(float *)(iVar5 + 0xa8) = fVar8;
  *(float *)(iVar5 + 0x94) = fVar8;
  *(float *)(iVar5 + 0x80) = fVar8;
  FUN_0892c034(*(undefined4 *)(param_1 + 0x1a80),uVar7,0);
  *(undefined4 *)(*(int *)(param_1 + 0x1a80) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1a80) + 0x24) = 0xc2200000;
  iVar5 = *(int *)(param_1 + 0x1a80);
  iVar4 = *(int *)(iVar5 + 0x130);
  uVar3 = *(undefined4 *)(iVar5 + 0x24);
  uVar6 = *(undefined4 *)(iVar5 + 0x28);
  uVar1 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar6;
  *(undefined4 *)(iVar4 + 0xbc) = uVar1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a80) + 0x130) + 0xbc) = 0x3f800000;
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a80) + 0x14);
  (**(code **)(iVar5 + 0x34))(0x3f000000,*(int *)(param_1 + 0x1a80) + (int)*(short *)(iVar5 + 0x30))
  ;
  *(undefined4 *)(*(int *)(param_1 + 0x1a80) + 0x6c) = 0x3f800000;
  return;
}

