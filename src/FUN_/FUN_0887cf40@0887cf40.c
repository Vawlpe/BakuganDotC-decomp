#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887cf40(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [12];
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  
  if (0x96 < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    fVar10 = (float)atan2f(*(float *)(*(int *)(param_1 + 0xb0) + 0x28) - *(float *)(param_1 + 0x68),
                           *(float *)(*(int *)(param_1 + 0xb0) + 0x20) - *(float *)(param_1 + 0x60))
    ;
    fVar10 = *(float *)(*(int *)(param_1 + 0xb0) + 0x34) - fVar10;
    fVar10 = fVar10 - (float)(int)(fVar10 * 0.3183099) * 6.283185;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + 6.283185;
    }
    if (3.141593 <= fVar10) {
      fVar10 = 6.283185 - fVar10;
    }
    else {
      fVar10 = -fVar10;
    }
    if (fVar10 < 0.0) {
      uVar6 = 0xbdcccccd;
    }
    else {
      uVar6 = 0x3dcccccd;
    }
    *(undefined4 *)(param_1 + 0x108) = uVar6;
  }
  else {
    FUN_08877af0(0x41a00000,0x42c80000,param_1,1,0);
    FUN_088787a0(param_1);
    pauVar9 = (undefined (*) [12])(param_1 + 0x60);
    iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar9,
                         (undefined (*) [12])(param_1 + 0x70),0x39,3,0,0x31bf337e);
    if (iVar5 != 0) {
      iVar5 = FUN_08823f5c(DAT_08b00920,0xaf,&DAT_08aba930);
      iVar7 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar5 + 0x1fc) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar5 + 0x200) = *(undefined4 *)(iVar7 + 0xc);
      }
      FUN_08877060(param_1,0x200098,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    fVar10 = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x108);
    *(float *)(param_1 + 0x104) = fVar10;
    pauVar8 = (undefined (*) [16])(param_1 + 0x80);
    uVar6 = vmul_s(fVar10,in_V7C);
    fVar10 = (float)vsin_s(uVar6);
    uVar6 = vmul_s(fVar10 * 0.03,in_V7C);
    auVar1 = vmov_q(*pauVar8);
    auVar3 = vrot_q(uVar6,1,0,3,0);
    auVar4 = vrot_q(uVar6,2,0,1,0);
    uVar6 = vdot_t(*(undefined (*) [12])*pauVar8,auVar3._0_12_);
    uVar11 = vdot_t(*(undefined (*) [12])*pauVar8,auVar4._0_12_);
    *(undefined4 *)*pauVar8 = uVar6;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(undefined4 *)(param_1 + 0x88) = uVar11;
    *(int *)(param_1 + 0x8c) = auVar1._12_4_;
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar6 = *(undefined4 *)(param_1 + 0x8c);
    auVar2 = vneg_t(*(undefined (*) [12])*pauVar8);
    *(int *)(iVar5 + 0x90) = auVar2._0_4_;
    *(int *)(iVar5 + 0x94) = auVar2._4_4_;
    *(int *)(iVar5 + 0x98) = auVar2._8_4_;
    *(undefined4 *)(iVar5 + 0x9c) = uVar6;
    uVar6 = *(undefined4 *)(param_1 + 0x6c);
    auVar2 = vadd_t(*pauVar9,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar9 = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
  }
  return;
}

