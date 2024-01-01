#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a1488(int param_1)

{
  undefined auVar1 [16];
  bool bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (DAT_08ac5c90 == 0) {
    return;
  }
  fVar10 = 0.0;
  fVar11 = 0.0;
  if ((*(int *)(param_1 + 0x14) < 1) && (-1 < *(int *)(param_1 + 0x14))) {
    iVar6 = 0;
    ppuVar7 = &PTR_s_flare01_08a83d18;
    iVar8 = param_1;
    do {
      iVar5 = FUN_089f5484(*(undefined4 *)(param_1 + 0x20),*ppuVar7,&DAT_08b007d0,1);
      *(int *)(iVar8 + 0x40) = iVar5;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar5 + 0xdc) = 2;
      ppuVar7 = ppuVar7 + 4;
      iVar8 = iVar8 + 4;
    } while (iVar6 < 8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  bVar2 = false;
  local_70 = 0x43700000;
  local_6c = 136.0;
  local_68 = 0;
  local_64 = 0;
  iVar8 = FUN_089bf93c(0x1e1,1);
  if (iVar8 != 0) goto LAB_088a1688;
  FUN_089e34f0(DAT_08ac5c90,&local_80,param_1 + 0x30);
  fVar11 = ((400.0 - ABS(local_7c - local_6c)) + 60.0) * 0.0025;
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  iVar6 = (int)local_80;
  iVar8 = (int)local_7c;
  fVar11 = (-local_78 - 0.2) * 1.4 * fVar11;
  if (DAT_08abd4c8 == 0) {
    iVar5 = FUN_089f2b8c(iVar6 + -10,iVar8);
    if (iVar5 == 0xb2) goto LAB_088a1688;
    iVar5 = FUN_089f2b8c(iVar6 + 10,iVar8);
    if (iVar5 == 0xb2) goto LAB_088a1688;
    iVar5 = FUN_089f2b8c(iVar6,iVar8 + -10);
    if ((iVar5 == 0xb2) || (iVar8 = FUN_089f2b8c(iVar6,iVar8 + 10), iVar8 == 0xb2))
    goto LAB_088a1688;
  }
  bVar2 = true;
LAB_088a1688:
  if (1.0 < fVar11) {
    fVar11 = 1.0;
  }
  if (0.0 < fVar11) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (bVar2) {
      fVar9 = *(float *)(param_1 + 0x18) - 0.05;
      *(float *)(param_1 + 0x18) = fVar9;
      if (fVar9 < 0.0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      fVar9 = *(float *)(param_1 + 0x18) + 0.1;
      *(float *)(param_1 + 0x18) = fVar9;
      if (1.0 < fVar9) {
        *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
      }
    }
    if (*(float *)(param_1 + 0x18) <= 0.0) {
      if (bVar2) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      iVar8 = 0;
      do {
        iVar8 = iVar8 + 1;
        *(uint *)(*(int *)(param_1 + 0x40) + 0xd0) =
             *(uint *)(*(int *)(param_1 + 0x40) + 0xd0) & 0xfffffffe;
        param_1 = param_1 + 4;
      } while (iVar8 < 8);
    }
    else {
      iVar6 = 0;
      ppuVar7 = &PTR_s_flare01_08a83d18;
      iVar8 = param_1;
      do {
        fVar9 = ((float)iVar6 * 0.5 + 1.0) * (float)ppuVar7[1];
        fVar10 = fVar10 + (float)ppuVar7[2];
        auVar3._4_4_ = local_7c;
        auVar3._0_4_ = local_80;
        auVar3._8_4_ = local_78;
        auVar3._12_4_ = uStack_74;
        auVar1._4_4_ = local_7c;
        auVar1._0_4_ = local_80;
        auVar1._8_4_ = local_78;
        auVar1._12_4_ = uStack_74;
        auVar4._4_4_ = local_6c;
        auVar4._0_4_ = local_70;
        auVar4._8_4_ = local_68;
        auVar4._12_4_ = local_64;
        auVar1 = vsub_q(auVar4,auVar1);
        auVar1 = vscl_q(auVar1,fVar10);
        auVar1 = vadd_q(auVar3,auVar1);
        local_60 = auVar1._0_4_;
        uStack_5c = auVar1._4_4_;
        uStack_58 = auVar1._8_4_;
        uStack_54 = auVar1._12_4_;
        *(undefined4 *)(*(int *)(iVar8 + 0x40) + 0x60) = local_60;
        *(undefined4 *)(*(int *)(iVar8 + 0x40) + 100) = uStack_5c;
        local_50 = local_60;
        local_4c = uStack_5c;
        uStack_48 = uStack_58;
        uStack_44 = uStack_54;
        FUN_089f4924(fVar9,fVar9,*(undefined4 *)(iVar8 + 0x40));
        *(uint *)(*(int *)(iVar8 + 0x40) + 0xd0) = *(uint *)(*(int *)(iVar8 + 0x40) + 0xd0) | 1;
        *(float *)(*(int *)(iVar8 + 0x40) + 0xbc) =
             fVar11 * (float)ppuVar7[3] * *(float *)(param_1 + 0x18) * 0.8;
        iVar6 = iVar6 + 1;
        ppuVar7 = ppuVar7 + 4;
        iVar8 = iVar8 + 4;
      } while (iVar6 < 8);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
      *(uint *)(*(int *)(param_1 + 0x40) + 0xd0) =
           *(uint *)(*(int *)(param_1 + 0x40) + 0xd0) & 0xfffffffe;
      param_1 = param_1 + 4;
    } while (iVar8 < 8);
  }
  return;
}

