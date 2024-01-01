#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3b34(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0x418) != 0) {
    iVar5 = 0x12;
    local_50 = *(undefined4 *)(param_1 + 0x2f0);
    local_4c = *(float *)(param_1 + 0x2f4);
    uStack_48 = *(undefined4 *)(param_1 + 0x2f8);
    uStack_44 = *(undefined4 *)(param_1 + 0x2fc);
    if (*(int *)(param_1 + 0x2d4) == 2) {
      iVar5 = 9;
    }
    *(undefined *)(param_1 + 0x4a9) = 1;
    iVar4 = *(int *)(param_1 + 0x418);
    FUN_088e1a38(param_1,&local_70);
    *(undefined4 *)(iVar4 + 0x20) = local_70;
    *(undefined4 *)(iVar4 + 0x24) = uStack_6c;
    *(undefined4 *)(iVar4 + 0x28) = uStack_68;
    *(undefined4 *)(iVar4 + 0x2c) = uStack_64;
    auVar1._4_4_ = local_4c;
    auVar1._0_4_ = local_50;
    auVar1._8_4_ = uStack_48;
    auVar1 = vsub_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x418) + 0x20));
    local_70 = auVar1._0_4_;
    uStack_6c = auVar1._4_4_;
    uStack_68 = auVar1._8_4_;
    uStack_64 = uStack_44;
    fVar7 = (float)iVar5;
    uVar8 = vrcp_s(fVar7);
    auVar1 = vscl_t(auVar1,uVar8);
    local_60 = auVar1._0_4_;
    uStack_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    uStack_54 = uStack_44;
    iVar4 = *(int *)(param_1 + 0x418);
    uVar8 = *(undefined4 *)(iVar4 + 0x24);
    uVar2 = *(undefined4 *)(iVar4 + 0x28);
    uVar3 = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(param_1 + 0x404) = uVar8;
    *(undefined4 *)(param_1 + 0x408) = uVar2;
    *(undefined4 *)(param_1 + 0x40c) = uVar3;
    *(int *)(*(int *)(param_1 + 0x418) + 0x14c) = param_1;
    iVar4 = *(int *)(param_1 + 0x418);
    *(undefined4 *)(iVar4 + 0x80) = local_60;
    *(undefined4 *)(iVar4 + 0x84) = uStack_5c;
    *(undefined4 *)(iVar4 + 0x88) = uStack_58;
    *(undefined4 *)(iVar4 + 0x8c) = uStack_44;
    if (*(int *)(param_1 + 0x4d4) == 0) {
      fVar7 = ((local_4c - *(float *)(*(int *)(param_1 + 0x418) + 0x24)) - fVar7 * -0.04 * fVar7) /
              fVar7;
      iVar5 = *(int *)(param_1 + 0x418);
    }
    else {
      fVar6 = local_4c - *(float *)(*(int *)(param_1 + 0x418) + 0x24);
      iVar5 = FUN_088e2758(1,1,iVar5 + 1);
      fVar7 = (fVar6 - (float)iVar5 * -0.08) / fVar7;
      iVar5 = *(int *)(param_1 + 0x418);
    }
    *(float *)(iVar5 + 0x84) = fVar7;
    FUN_088b87e0(*(undefined4 *)(param_1 + 0x418));
    if (*(int *)(param_1 + 0x4a4) != 0) {
      *(undefined *)(param_1 + 0x4a8) = 1;
      **(undefined4 **)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x418);
      FUN_088b7808(*(undefined4 *)(param_1 + 0x4a4),1);
    }
  }
  return;
}

