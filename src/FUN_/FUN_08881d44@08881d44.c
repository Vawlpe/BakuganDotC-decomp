#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08881d44(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auVar6 [16];
  int iVar7;
  undefined (*pauVar8) [12];
  undefined (*pauVar9) [12];
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V73;
  undefined auStack_70 [4];
  float local_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (90.0 < (float)*(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    fVar10 = (float)atan2f(*(undefined4 *)(param_1 + 0x84),
                           SQRT(*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) +
                                *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88)));
    pauVar9 = (undefined (*) [12])(param_1 + 0x60);
    if (0.5235988 < fVar10) {
      pauVar8 = (undefined (*) [12])(param_1 + 0x80);
      uStack_44 = *(undefined4 *)(param_1 + 0x8c);
      vpfxs(0x12,1,0,3);
      auVar1 = vmov_t(*pauVar8);
      local_50 = auVar1._0_4_;
      uStack_4c = auVar1._4_4_;
      uStack_48 = auVar1._8_4_;
      uVar11 = vcst_s(6);
      uVar11 = vmul_s(uVar11,0.5235988 - fVar10);
      uStack_34 = vcos_s(uVar11);
      uVar11 = vsin_s(uVar11);
      auVar1 = vscl_t(auVar1,uVar11);
      local_40 = auVar1._0_4_;
      uStack_3c = auVar1._4_4_;
      uStack_38 = auVar1._8_4_;
      auVar6._12_4_ = uStack_34;
      auVar6._0_12_ = auVar1;
      auVar3._12_4_ = uStack_34;
      auVar3._0_12_ = auVar1;
      vpfxs(0x10,0x11,0x12,3);
      auVar3 = vmov_q(auVar3);
      uVar11 = vmov_s(in_V73);
      auVar2._12_4_ = uVar11;
      auVar2._8_4_ = *(undefined4 *)(param_1 + 0x88);
      auVar2._4_4_ = *(undefined4 *)(param_1 + 0x84);
      auVar2._0_4_ = *(undefined4 *)*pauVar8;
      auVar2 = vqmul_q(auVar6,auVar2);
      auVar2 = vqmul_q(auVar2,auVar3);
      local_60 = auVar2._0_4_;
      uStack_5c = auVar2._4_4_;
      uStack_58 = auVar2._8_4_;
      uStack_54 = auVar2._12_4_;
      *(undefined4 *)*pauVar8 = local_60;
      *(undefined4 *)(param_1 + 0x84) = uStack_5c;
      *(undefined4 *)(param_1 + 0x88) = uStack_58;
      *(undefined4 *)(param_1 + 0x8c) = uStack_54;
    }
    FUN_08877af0(0x42340000,0x42a00000,param_1,1,0);
    if ((*(char *)(param_1 + 0x114) != '\0') || (iVar7 = FUN_088787a0(param_1), iVar7 != 0)) {
      FUN_08823f5c(DAT_08b00920,0xc5,pauVar9);
      FUN_08876ee0(param_1);
      return;
    }
    iVar7 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar9,
                         (undefined (*) [12])(param_1 + 0x70),0x90,3,0,0x31bf337e);
    if (iVar7 != 0) {
      FUN_08823f5c(DAT_08b00920,0xc5,pauVar9);
      FUN_08877060(param_1,0x200097,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    iVar7 = *(int *)(param_1 + 0xbc);
    uVar11 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(iVar7 + 0x90) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar7 + 0x94) = uVar11;
    *(undefined4 *)(iVar7 + 0x98) = uVar4;
    *(undefined4 *)(iVar7 + 0x9c) = uVar5;
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar9,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar9 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    iVar7 = FUN_0889d57c(pauVar9,auStack_70);
    if ((iVar7 != 0) && (*(float *)(param_1 + 100) - 200.0 < local_6c)) {
      FUN_08824024(DAT_08b00920,0xfd,auStack_70,(undefined4 *)(param_1 + 0x80));
    }
  }
  return;
}

