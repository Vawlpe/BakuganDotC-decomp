#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888191c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  int iVar6;
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [12];
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (0x96 < *(int *)(param_1 + 0xf4)) {
    FUN_08824658(DAT_08b00920,0x208,param_1 + 0x60);
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(int *)(param_1 + 0xfc) = (int)*(float *)(param_1 + 0x10c);
    pauVar7 = (undefined (*) [16])(param_1 + 0x80);
    if (*(int *)(param_1 + 0xfc) < 0x15) {
      uVar11 = vmul_s(0xbfc90fdb,in_V7C);
      auVar2 = vmov_q(*pauVar7);
      uStack_5c = auVar2._4_4_;
      auVar2 = vrot_q(uVar11,1,0,3,0);
      auVar3 = vrot_q(uVar11,2,0,1,0);
      local_60 = vdot_t(*(undefined (*) [12])*pauVar7,auVar2._0_12_);
      uStack_58 = vdot_t(*(undefined (*) [12])*pauVar7,auVar3._0_12_);
      *(undefined4 *)(param_1 + 0x108) = 0x3dcccccd;
    }
    else {
      uVar11 = vmul_s(0x3fc90fdb,in_V7C);
      auVar2 = vmov_q(*pauVar7);
      uStack_5c = auVar2._4_4_;
      auVar2 = vrot_q(uVar11,1,0,3,0);
      auVar3 = vrot_q(uVar11,2,0,1,0);
      local_60 = vdot_t(*(undefined (*) [12])*pauVar7,auVar2._0_12_);
      uStack_58 = vdot_t(*(undefined (*) [12])*pauVar7,auVar3._0_12_);
      *(undefined4 *)(param_1 + 0x108) = 0xbdcccccd;
    }
    auVar1._4_4_ = uStack_5c;
    auVar1._0_4_ = local_60;
    auVar1._8_4_ = uStack_58;
    auVar1 = vscl_t(auVar1,0x42a00000);
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),auVar1);
    *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 25.0;
  }
  else if (*(int *)(param_1 + 0xfc) <= *(int *)(param_1 + 0xf4)) {
    pauVar8 = (undefined (*) [12])(param_1 + 0x60);
    if (*(int *)(param_1 + 0xf4) == *(int *)(param_1 + 0xfc)) {
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x170) = 2;
      FUN_08877060(param_1,0xd0001f,0,0,0);
    }
    FUN_08877af0(0x41a00000,0x42c80000,param_1,1,0);
    FUN_088787a0(param_1);
    iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar8,
                         (undefined (*) [12])(param_1 + 0x70),0x8d,3,0,0x31bf337e);
    if (iVar5 != 0) {
      iVar5 = FUN_08823f5c(DAT_08b00920,0xfb,&DAT_08aba930);
      iVar6 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar5 + 0x1fc) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar5 + 0x200) = *(undefined4 *)(iVar6 + 0xc);
      }
      FUN_08824658(DAT_08b00920,0x208,pauVar8);
      FUN_08877060(param_1,0x200098,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    fVar9 = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x108);
    *(float *)(param_1 + 0x104) = fVar9;
    pauVar7 = (undefined (*) [16])(param_1 + 0x80);
    uVar11 = vmul_s(fVar9,in_V7C);
    fVar9 = (float)vsin_s(uVar11);
    uVar11 = vmul_s(fVar9 * 0.03,in_V7C);
    auVar2 = vmov_q(*pauVar7);
    auVar3 = vrot_q(uVar11,1,0,3,0);
    auVar4 = vrot_q(uVar11,2,0,1,0);
    uVar11 = vdot_t(*(undefined (*) [12])*pauVar7,auVar3._0_12_);
    uVar10 = vdot_t(*(undefined (*) [12])*pauVar7,auVar4._0_12_);
    *(undefined4 *)*pauVar7 = uVar11;
    *(int *)(param_1 + 0x84) = auVar2._4_4_;
    *(undefined4 *)(param_1 + 0x88) = uVar10;
    *(int *)(param_1 + 0x8c) = auVar2._12_4_;
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar11 = *(undefined4 *)(param_1 + 0x8c);
    auVar1 = vneg_t(*(undefined (*) [12])*pauVar7);
    *(int *)(iVar5 + 0x90) = auVar1._0_4_;
    *(int *)(iVar5 + 0x94) = auVar1._4_4_;
    *(int *)(iVar5 + 0x98) = auVar1._8_4_;
    *(undefined4 *)(iVar5 + 0x9c) = uVar11;
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar8,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
  }
  return;
}

