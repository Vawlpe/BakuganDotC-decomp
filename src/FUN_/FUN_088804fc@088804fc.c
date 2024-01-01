#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088804fc(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined auVar3 [12];
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x60),
                    *(undefined (*) [16])(*(int *)(param_1 + 0xb0) + 0x20));
    uVar6 = vzero_s();
    auVar2._8_4_ = auVar1._8_4_;
    auVar2._4_4_ = uVar6;
    auVar2._0_4_ = auVar1._0_4_;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = uVar6;
    auVar3._0_4_ = auVar1._0_4_;
    uVar6 = vdot_t(auVar2,auVar3);
    vsqrt_s(uVar6);
    iVar5 = (int)*(float *)(param_1 + 0x10c);
    if (iVar5 < 0) {
      if (-2 < iVar5) {
        *(undefined4 *)(param_1 + 0x10c) = 0x45160000;
      }
    }
    else if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else if (iVar5 < 2) {
      *(undefined4 *)(param_1 + 0x10c) = 0xc5160000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (0x1e < *(int *)(param_1 + 0xf4)) {
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * 0.93;
    }
    if (0x5a < *(int *)(param_1 + 0xf4)) {
      iVar5 = FUN_08823f5c(DAT_08b00920,0xb0,param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar5 + 0x1fc) = iVar4;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar5 + 0x200) = *(undefined4 *)(iVar4 + 0xc);
      }
      FUN_08876ee0(param_1);
      return;
    }
  }
  FUN_08878e5c(0x3dcccccd,*(undefined4 *)(param_1 + 0x10c),param_1,0x4f,0xb0,0xb0);
  return;
}

