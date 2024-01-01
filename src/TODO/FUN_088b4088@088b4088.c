#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b4088(int param_1,undefined4 *param_2,int param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_28;
  
  FUN_088ab2d0(param_1,0xa9,param_2);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2b94;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(int *)(param_1 + 0x32c) = param_3;
  *(undefined2 *)(param_1 + 0x396) = param_4;
  *(undefined *)(param_1 + 0x398) = 1;
  *(undefined4 *)(param_1 + 0x204) = 0x96;
  *(undefined4 *)(param_1 + 0x200) = 0x96;
  FUN_088aca0c(param_1);
  iVar4 = FUN_089bed14(0x78);
  *(int *)(param_1 + 0x33c) = iVar4 + 0x96;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 800) = 0;
  local_28 = 0;
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(0x680,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar4 = local_28;
  if (iVar6 != 0) {
    local_80 = *param_2;
    uStack_7c = param_2[1];
    uStack_78 = param_2[2];
    uStack_74 = param_2[3];
    FUN_0885b894(0x428c0000,0x42480000,iVar6,&local_80,1,5);
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 800) = iVar4;
  *(undefined *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x370) = in_V72;
  *(undefined4 *)(param_1 + 0x374) = in_V76;
  *(undefined4 *)(param_1 + 0x378) = in_V7A;
  *(undefined4 *)(param_1 + 0x37c) = in_V7E;
  *(undefined4 *)(param_1 + 0x338) = 0;
  fVar7 = (float)param_2[1];
  iVar4 = FUN_088a9614(param_1);
  fVar7 = fVar7 + -(*(float *)(iVar4 + 4) * *(float *)(param_1 + 0x44));
  param_2[1] = fVar7;
  *(float *)(*(int *)(param_1 + 0x130) + 0xb4) = fVar7;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xb4);
  *(undefined *)(param_1 + 0x395) = 0;
  if (param_3 == 2) {
    *(undefined *)(param_1 + 0x395) = 1;
  }
  iVar4 = FUN_089df7ec(param_1,"fz_crystal03_01");
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0x1f | 0x20;
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0xfc | 2;
  }
  FUN_089df7ec(param_1,"fz_crystal01");
  iVar4 = FUN_089df7ec(param_1,"fz_crystal02");
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0xfc;
  }
  *(undefined *)(param_1 + 0xbc) = 1;
  iVar4 = FUN_0889da6c();
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x3d8f5c29;
    *(undefined4 *)(param_1 + 100) = 0x3ca3d70a;
    *(undefined4 *)(param_1 + 0x68) = 0x3e2e147b;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    local_70 = 0x3ee66666;
    local_6c = 0x3ee66666;
    local_68 = 0x3f0ccccd;
    local_64 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x70) = 0x3ee66666;
    *(undefined4 *)(param_1 + 0x74) = 0x3ee66666;
    *(undefined4 *)(param_1 + 0x78) = 0x3f0ccccd;
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  }
  iVar4 = FUN_089ded60(param_1,"fz_crystal05");
  *(undefined4 *)(iVar4 + 0x58) = 0x41200000;
  *(undefined4 *)(iVar4 + 0x44) = 0x41200000;
  *(undefined4 *)(iVar4 + 0x30) = 0x41200000;
  *(undefined4 *)(iVar4 + 0xa8) = 0x41200000;
  *(undefined4 *)(iVar4 + 0x94) = 0x41200000;
  *(undefined4 *)(iVar4 + 0x80) = 0x41200000;
  uVar5 = *(undefined4 *)(iVar4 + 0x40);
  uVar1 = *(undefined4 *)(iVar4 + 0x44);
  uVar2 = *(undefined4 *)(iVar4 + 0x48);
  uVar3 = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x5c);
  *(undefined4 *)(iVar4 + 0x50) = uVar5;
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  *(undefined4 *)(iVar4 + 0x5c) = uVar3;
  uVar5 = *(undefined4 *)(iVar4 + 0x90);
  uVar1 = *(undefined4 *)(iVar4 + 0x94);
  uVar2 = *(undefined4 *)(iVar4 + 0x98);
  uVar3 = *(undefined4 *)(iVar4 + 0x9c);
  *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(iVar4 + 0xa0);
  *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar4 + 0xa4);
  *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar4 + 0xa8);
  *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar4 + 0xac);
  *(undefined4 *)(iVar4 + 0xa0) = uVar5;
  *(undefined4 *)(iVar4 + 0xa4) = uVar1;
  *(undefined4 *)(iVar4 + 0xa8) = uVar2;
  *(undefined4 *)(iVar4 + 0xac) = uVar3;
  FUN_088598a8(&local_60,*(undefined4 *)(param_1 + 0x32c));
  local_50 = local_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  FUN_089e0460(param_1,&local_50,0);
  FUN_088b403c(param_1);
  return param_1;
}

