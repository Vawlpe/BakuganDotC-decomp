#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e2af0(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  uint uVar3;
  float fVar4;
  undefined (*pauVar5) [12];
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7C;
  
  if ((*(uint *)(param_1 + 0x168) & 0x400000) == 0) {
    iVar7 = FUN_088e1f38(param_1);
    if (iVar7 != 0) {
      FUN_088e2788(param_1,0xb,0);
    }
    uVar3 = *(uint *)(param_1 + 0x168);
  }
  else {
    FUN_088e2788(param_1,7,0);
    uVar3 = *(uint *)(param_1 + 0x168);
  }
  if ((uVar3 & 1) == 0) {
    FUN_088e2788(param_1,0,0);
  }
  else {
    fVar4 = 2.4;
    iVar7 = 1;
    pauVar5 = (undefined (*) [12])(*(int *)(param_1 + 0x164) + 0x40);
    uVar8 = vdot_t(*pauVar5,*pauVar5);
    fVar9 = (float)vsqrt_s(uVar8);
    if (fVar9 < 0.97) {
      fVar4 = 0.48;
      iVar7 = 0x2e;
    }
    *(int *)(param_1 + 0x394) = iVar7;
    if ((*(uint *)(param_1 + 0x144) & 0x20000) == 0) {
      *(float *)(param_1 + 0x154) =
           *(float *)(param_1 + 0x154) + (fVar4 - *(float *)(param_1 + 0x154)) * 0.2;
    }
    else if (0.3 < *(float *)(param_1 + 0x154)) {
      *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) * 0.8;
    }
    FUN_088def24(param_1,iVar7,1,0);
    fVar9 = (float)FUN_088defe8(*(undefined4 *)(*(int *)(param_1 + 0x164) + 4),0x3e99999a,0,param_1)
    ;
    fVar4 = ABS(fVar9) + 0.9424779;
    if (3.141593 < ABS(fVar9) + 0.9424779) {
      fVar4 = 3.141593;
    }
    fVar4 = (3.141593 - fVar4) * 0.4774648;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    uVar8 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x164) + 4),in_V7C);
    auVar2 = vrot_q(uVar8,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,*(float *)(param_1 + 0x154) * fVar4);
    *(int *)(param_1 + 0x80) = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    iVar6 = *(int *)(param_1 + 0x334) + -1;
    *(int *)(param_1 + 0x334) = iVar6;
    if (iVar6 == 0) {
      uVar8 = 7;
      if (iVar7 == 0x2e) {
        uVar8 = 0xf;
      }
      *(undefined4 *)(param_1 + 0x334) = uVar8;
      uVar3 = vrndi_s();
      FUN_089c1f8c(*(undefined4 *)(param_1 + 300),((uVar3 >> 0x10) * 6 >> 0x10) + 0x2c00001,0,0);
    }
  }
  return;
}

