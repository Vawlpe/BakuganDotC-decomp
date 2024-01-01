#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08913eec(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined auStack_70 [72];
  int local_28;
  int local_24;
  
  local_24 = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = local_24;
  if (iVar3 != 0) {
    FUN_089de2e4(iVar3,(&PTR_DAT_08ab0308)[*(int *)(param_1 + 0x16a8)],0);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x13dc) = iVar4;
  FUN_089e0860();
  FUN_08913e88(param_1,param_1 + 0x1628,"ability03_a",*(uint *)(param_1 + 0x16a8) & 0xff);
  FUN_089b4c84(auStack_70,"%s.gmo",param_1 + 0x1628);
  uVar2 = FUN_089d9674();
  FUN_089d9914(uVar2,auStack_70);
  iVar4 = param_1 + 0x15e8;
  FUN_08913e88(param_1,iVar4,"stay_sel",*(uint *)(param_1 + 0x16a8) & 0xff);
  FUN_089b4c84(auStack_70,"%s.gmo",iVar4);
  uVar2 = FUN_089d9674();
  FUN_089d9914(uVar2,auStack_70);
  uVar5 = *(undefined4 *)(param_1 + 0x13dc);
  uVar2 = FUN_089d9674();
  uVar2 = FUN_089d9c84(uVar2,iVar4);
  FUN_089df400(0x3e4ccccd,uVar5,uVar2,1);
  iVar4 = *(int *)(*(int *)(param_1 + 0x13dc) + 0x14);
  (**(code **)(iVar4 + 0x3c))(*(int *)(param_1 + 0x13dc) + (int)*(short *)(iVar4 + 0x38));
  *(undefined4 *)(*(int *)(param_1 + 0x13dc) + 8) = *(undefined4 *)(param_1 + 0x16a8);
  FUN_0885e260(*(undefined4 *)(param_1 + 0x13dc));
  iVar4 = *(int *)(*(int *)(param_1 + 0x13dc) + 0x130);
  fVar6 = (float)FUN_0892c0dc(*(uint *)(param_1 + 0x16a8) & 0xff,0);
  fVar7 = (float)FUN_0892c3f8(*(uint *)(param_1 + 0x16a8) & 0xff,0);
  fVar6 = fVar6 * fVar7 * 0.4;
  *(float *)(iVar4 + 0xa8) = fVar6;
  *(float *)(iVar4 + 0x94) = fVar6;
  *(float *)(iVar4 + 0x80) = fVar6;
  FUN_0892c034(*(undefined4 *)(param_1 + 0x13dc),*(uint *)(param_1 + 0x16a8) & 0xff,0);
  *(undefined4 *)(*(int *)(param_1 + 0x13dc) + 0x20) = 0x40400000;
  *(undefined4 *)(*(int *)(param_1 + 0x13dc) + 0x24) = 0xc2700000;
  iVar4 = *(int *)(param_1 + 0x13dc);
  iVar3 = *(int *)(iVar4 + 0x130);
  uVar2 = *(undefined4 *)(iVar4 + 0x24);
  uVar5 = *(undefined4 *)(iVar4 + 0x28);
  uVar1 = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(iVar3 + 0xb4) = uVar2;
  *(undefined4 *)(iVar3 + 0xb8) = uVar5;
  *(undefined4 *)(iVar3 + 0xbc) = uVar1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x13dc) + 0x130) + 0xbc) = 0x3f800000;
  iVar4 = *(int *)(*(int *)(param_1 + 0x13dc) + 0x14);
  (**(code **)(iVar4 + 0x34))(0x3f000000,*(int *)(param_1 + 0x13dc) + (int)*(short *)(iVar4 + 0x30))
  ;
  *(undefined4 *)(*(int *)(param_1 + 0x13dc) + 0x6c) = 0x3f800000;
  local_28 = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x2a0,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = local_28;
  if (iVar3 != 0) {
    FUN_089e2910(iVar3);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x13e0) = iVar4;
  FUN_089e29e4();
  iVar4 = *(int *)(param_1 + 0x13e0);
  *(undefined4 *)(iVar4 + 0x60) = 0;
  *(undefined4 *)(iVar4 + 100) = 0;
  *(undefined4 *)(iVar4 + 0x68) = 0;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  iVar4 = *(int *)(param_1 + 0x13e0);
  *(undefined4 *)(iVar4 + 0x50) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0x43160000;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  FUN_089e3008(0xc30c0000,0xc2b40000,*(undefined4 *)(param_1 + 0x13e0));
  FUN_089e2b14(*(undefined4 *)(param_1 + 0x13e0),0xffffffff);
  iVar4 = *(int *)(*(int *)(param_1 + 0x13e0) + 0x20);
  (**(code **)(iVar4 + 0x14))(*(int *)(param_1 + 0x13e0) + (int)*(short *)(iVar4 + 0x10));
  return;
}

