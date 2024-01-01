#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bb320(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [12];
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  undefined4 in_V7D;
  
  if ((*(int *)(param_1 + 0x5c4) != 0) && (*(int *)(param_1 + 0x2a0) != 0)) {
    uVar7 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x34),in_V7C);
    auVar2 = vrot_q(uVar7,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,0x41200000);
    auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x2a0) + 0x20));
    auVar4._4_4_ = auVar1._4_4_ + 12.0;
    auVar4._0_4_ = auVar1._0_4_;
    auVar4._8_4_ = auVar1._8_4_;
    auVar1 = vscl_t(auVar4,0x41200000);
    iVar6 = *(int *)(param_1 + 0x5c8);
    *(int *)(iVar6 + 0x10) = auVar1._0_4_;
    *(int *)(iVar6 + 0x14) = auVar1._4_4_;
    *(int *)(iVar6 + 0x18) = auVar1._8_4_;
    *(undefined4 *)(iVar6 + 0x1c) = in_V7D;
    iVar6 = *(int *)(*(int *)(param_1 + 0x5c4) + 0x2c);
    (**(code **)(iVar6 + 0x14))
              (0x3d088889,*(int *)(param_1 + 0x5c4) + (int)*(short *)(iVar6 + 0x10));
    auVar1._8_4_ = 0x3dcccccd;
    auVar1._0_8_ = 0x3dcccccd3dcccccd;
    auVar1 = vmul_t(**(undefined (**) [12])(param_1 + 0x5c4),auVar1);
    *(int *)(param_1 + 0x50) = auVar1._0_4_;
    *(int *)(param_1 + 0x54) = auVar1._4_4_;
    *(int *)(param_1 + 0x58) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x5c) = in_V7D;
    pfVar5 = (float *)(param_1 + 0x60);
    auVar3._8_4_ = 0x3dcccccd;
    auVar3._0_8_ = 0x3dcccccd3dcccccd;
    auVar1 = vmul_t(*(undefined (*) [12])(*(int *)(param_1 + 0x5c4) + 0x10),auVar3);
    *pfVar5 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = in_V7D;
    *(float *)(param_1 + 0x2c0) = *pfVar5;
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x6c);
    uVar7 = atan2f(*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x58),
                   *pfVar5 - *(float *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x2f0) = uVar7;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x5c4) + 0x20);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 0x5c4) + 0x24);
  }
  return;
}

