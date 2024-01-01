#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888232c(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined (*pauVar3) [12];
  float fVar4;
  undefined4 in_V7D;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    vpfxs(0x12,1,0,3);
    auVar1 = vmov_t(*(undefined (*) [12])(param_1 + 0x80));
    auVar1 = vscl_t(auVar1,0x42200000);
    pauVar3 = (undefined (*) [12])(param_1 + 0x60);
    if (*(float *)(param_1 + 0x10c) < 0.0) {
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vsub_t(*pauVar3,auVar1);
      *(int *)*pauVar3 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      fVar4 = *(float *)(param_1 + 0x10c);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar3,auVar1);
      *(int *)*pauVar3 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      fVar4 = *(float *)(param_1 + 0x10c);
    }
    if (ABS(fVar4) < 50.0) {
      fVar4 = *(float *)(param_1 + 100) - 12.0;
    }
    else {
      fVar4 = *(float *)(param_1 + 100) + 15.0;
    }
    *(float *)(param_1 + 100) = fVar4;
  }
  FUN_08878e5c(0x3e99999a,*(undefined4 *)(param_1 + 0x10c),param_1,0x97,0x100,0x1b);
  if ((*(int *)(param_1 + 0xf4) == 0) && (ABS(*(float *)(param_1 + 0x10c)) < 50.0)) {
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x70),0x3f4ccccd);
    *(int *)*(undefined (*) [12])(param_1 + 0x70) = auVar1._0_4_;
    *(int *)(param_1 + 0x74) = auVar1._4_4_;
    *(int *)(param_1 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x7c) = in_V7D;
  }
  return;
}

