#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887ea84(int param_1)

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
  
  if (0x78 < *(int *)(param_1 + 0xf4)) {
    FUN_08824658(DAT_08b00920,0x200,param_1 + 0x60);
    iVar5 = FUN_08823f5c(DAT_08b00920,0xbd,param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0xb0);
    *(int *)(iVar5 + 0x1fc) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar5 + 0x200) = *(undefined4 *)(iVar6 + 0xc);
    }
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    iVar5 = (int)*(float *)(param_1 + 0x10c);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0 < iVar5) {
      if (iVar5 < 2) {
        pauVar7 = (undefined (*) [16])(param_1 + 0x80);
        uVar11 = vmul_s(0x40060a92,in_V7C);
        auVar2 = vmov_q(*pauVar7);
        auVar3 = vrot_q(uVar11,1,0,3,0);
        auVar4 = vrot_q(uVar11,2,0,1,0);
        uVar11 = vdot_t(*(undefined (*) [12])*pauVar7,auVar3._0_12_);
        uVar10 = vdot_t(*(undefined (*) [12])*pauVar7,auVar4._0_12_);
        *(undefined4 *)*pauVar7 = uVar11;
        *(int *)(param_1 + 0x84) = auVar2._4_4_;
        *(undefined4 *)(param_1 + 0x88) = uVar10;
        *(int *)(param_1 + 0x8c) = auVar2._12_4_;
      }
      else {
        pauVar7 = (undefined (*) [16])(param_1 + 0x80);
        if (iVar5 < 3) {
          uVar11 = vmul_s(0x40860a92,in_V7C);
          auVar2 = vmov_q(*pauVar7);
          auVar3 = vrot_q(uVar11,1,0,3,0);
          auVar4 = vrot_q(uVar11,2,0,1,0);
          uVar11 = vdot_t(*(undefined (*) [12])*pauVar7,auVar3._0_12_);
          uVar10 = vdot_t(*(undefined (*) [12])*pauVar7,auVar4._0_12_);
          *(undefined4 *)*pauVar7 = uVar11;
          *(int *)(param_1 + 0x84) = auVar2._4_4_;
          *(undefined4 *)(param_1 + 0x88) = uVar10;
          *(int *)(param_1 + 0x8c) = auVar2._12_4_;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x10c) = 0x41000000;
  }
  else {
    FUN_08877af0(*(undefined4 *)(param_1 + 0x20),0x42c80000,param_1,1,0);
    pauVar8 = (undefined (*) [12])(param_1 + 0x60);
    if ((4 < *(int *)(param_1 + 0xf4)) &&
       (iVar5 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar8,
                             (undefined (*) [12])(param_1 + 0x70),0x41,3,0,0x31bf337e), iVar5 != 0))
    {
      FUN_08824658(DAT_08b00920,0x200,pauVar8);
      iVar5 = FUN_08823f5c(DAT_08b00920,0xbd,pauVar8);
      iVar6 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar5 + 0x1fc) = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(iVar5 + 0x200) = *(undefined4 *)(iVar6 + 0xc);
      }
      FUN_08877060(param_1,0x200098,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    fVar9 = *(float *)(param_1 + 0x20) - 0.3;
    if ((int)fVar9 < 1) {
      fVar9 = 0.0;
    }
    *(float *)(param_1 + 0x20) = fVar9;
    uVar11 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar8,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x10c);
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) * 0.8;
  }
  return;
}

