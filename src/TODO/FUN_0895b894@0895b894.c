#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895b894(int param_1,uint param_2,uint param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  undefined *ptr;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_38;
  
  param_2 = param_2 & 0xff;
  ptr = (undefined *)(param_1 + param_2 * 0x40 + 0x4d2c);
  param_3 = param_3 & 0xff;
  *(undefined4 *)(param_1 + 0x4f7c) = 0;
  memset_jak(ptr,0,0x40);
  iVar6 = FUN_0895b878(param_1,param_2);
  iVar12 = param_1 + param_2 * 4;
  if (iVar6 == 0) {
    FUN_0892bd00(param_3,ptr);
  }
  else {
    iVar6 = FUN_08956e90(param_1,param_2,param_3);
    if (iVar6 == 0) {
      FUN_0892c818(param_3,ptr);
    }
    else {
      FUN_0892bd00(param_3,ptr);
    }
  }
  local_38 = 0;
  FUN_089d8634();
  uVar7 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar8 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar7);
  FUN_089d866c();
  iVar6 = local_38;
  if (iVar8 != 0) {
    FUN_089de2e4(iVar8,(&PTR_DAT_08ab0308)[param_3],0);
    iVar6 = iVar8;
  }
  *(int *)(iVar12 + 0x4d08) = iVar6;
  FUN_089e0860();
  uVar13 = *(undefined4 *)(iVar12 + 0x4d08);
  uVar7 = FUN_089d9674();
  uVar7 = FUN_089d9c84(uVar7,ptr);
  FUN_089df400(0x3e4ccccd,uVar13,uVar7,1);
  iVar6 = *(int *)(*(int *)(iVar12 + 0x4d08) + 0x14);
  (**(code **)(iVar6 + 0x3c))(*(int *)(iVar12 + 0x4d08) + (int)*(short *)(iVar6 + 0x38));
  *(uint *)(*(int *)(iVar12 + 0x4d08) + 8) = param_3;
  FUN_0885e260(*(undefined4 *)(iVar12 + 0x4d08));
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    iVar6 = *(int *)(*(int *)(iVar12 + 0x4d08) + 0x130);
    uVar7 = FUN_0892c0dc(param_3,0);
    *(undefined4 *)(iVar6 + 0xa8) = uVar7;
    *(undefined4 *)(iVar6 + 0x94) = uVar7;
    *(undefined4 *)(iVar6 + 0x80) = uVar7;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar12 + 0x4d08) + 0x130);
    uVar7 = FUN_0892c0dc(param_3,1);
    *(undefined4 *)(iVar6 + 0xa8) = uVar7;
    *(undefined4 *)(iVar6 + 0x94) = uVar7;
    *(undefined4 *)(iVar6 + 0x80) = uVar7;
  }
  uVar7 = *(undefined4 *)(iVar12 + 0x4d08);
  uVar5 = FUN_0895b878(param_1,param_2);
  FUN_0892c034(uVar7,param_3,uVar5);
  FUN_08957078(&local_58,param_1,param_2);
  pfVar9 = (float *)(*(int *)(iVar12 + 0x4d08) + 0x20);
  *pfVar9 = *pfVar9 + local_58;
  pfVar9 = (float *)(*(int *)(iVar12 + 0x4d08) + 0x24);
  *pfVar9 = *pfVar9 + local_54;
  iVar6 = *(int *)(iVar12 + 0x4d08);
  iVar8 = *(int *)(iVar6 + 0x130);
  uVar7 = *(undefined4 *)(iVar6 + 0x24);
  uVar13 = *(undefined4 *)(iVar6 + 0x28);
  uVar4 = *(undefined4 *)(iVar6 + 0x2c);
  *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar8 + 0xb4) = uVar7;
  *(undefined4 *)(iVar8 + 0xb8) = uVar13;
  *(undefined4 *)(iVar8 + 0xbc) = uVar4;
  *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x4d08) + 0x130) + 0xbc) = 0x3f800000;
  iVar6 = *(int *)(*(int *)(iVar12 + 0x4d08) + 0x14);
  (**(code **)(iVar6 + 0x34))(0x3f800000,*(int *)(iVar12 + 0x4d08) + (int)*(short *)(iVar6 + 0x30));
  *(undefined4 *)(*(int *)(iVar12 + 0x4d08) + 0x6c) = 0;
  iVar6 = FUN_08956e90(param_1,param_2,param_3);
  if (iVar6 != 0) {
    FUN_089e0a70(*(undefined4 *)(iVar12 + 0x4d08),&LAB_08956448,0);
    iVar6 = *(int *)(*(int *)(iVar12 + 0x4d08) + 0x130);
    local_50 = 0xbf800000;
    local_4c = 0x3f800000;
    local_48 = 0x3f800000;
    local_44 = 0;
    auVar1 = vscl_q(*(undefined (*) [16])(iVar6 + 0x80),0xbf800000);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar6 + 0x90),0x3f800000);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar6 + 0xa0),0x3f800000);
    *(int *)*(undefined (*) [16])(iVar6 + 0x80) = auVar1._0_4_;
    *(int *)(iVar6 + 0x84) = auVar1._4_4_;
    *(int *)(iVar6 + 0x88) = auVar1._8_4_;
    *(int *)(iVar6 + 0x8c) = auVar1._12_4_;
    *(int *)(iVar6 + 0x90) = auVar2._0_4_;
    *(int *)(iVar6 + 0x94) = auVar2._4_4_;
    *(int *)(iVar6 + 0x98) = auVar2._8_4_;
    *(int *)(iVar6 + 0x9c) = auVar2._12_4_;
    *(int *)(iVar6 + 0xa0) = auVar3._0_4_;
    *(int *)(iVar6 + 0xa4) = auVar3._4_4_;
    *(int *)(iVar6 + 0xa8) = auVar3._8_4_;
    *(int *)(iVar6 + 0xac) = auVar3._12_4_;
  }
  if (param_2 == 0) {
    FUN_0885de00(*(undefined4 *)(iVar12 + 0x4d08),0);
  }
  else {
    uVar10 = 0;
    if (param_2 < 4) {
      cVar11 = '\0';
      iVar6 = param_1;
      if (param_2 != 0) {
        do {
          if ((int)*(char *)(iVar6 + 0x4cdd) == param_3) {
            cVar11 = cVar11 + '\x01';
          }
          uVar10 = uVar10 + 1;
          iVar6 = param_1 + uVar10;
        } while (uVar10 < param_2);
      }
      FUN_0885de00(*(undefined4 *)(iVar12 + 0x4d08),cVar11);
    }
  }
  return;
}

