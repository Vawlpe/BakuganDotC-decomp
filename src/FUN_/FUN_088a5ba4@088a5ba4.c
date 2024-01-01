#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a5ba4(int param_1,int param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined (*pauVar3) [16];
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  
  FUN_088ab2d0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2674;
  iVar2 = FUN_088a9614(param_1);
  pauVar3 = (undefined (*) [16])FUN_088a9614(param_1);
  if (param_2 == 0xb4) {
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x40400000;
    *(undefined4 *)(param_1 + 0x44) = 0x40400000;
    *(undefined4 *)(param_1 + 0x48) = 0x40400000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  auVar1 = vsub_q(*(undefined (*) [16])(iVar2 + 0x10),*pauVar3);
  uVar5 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar6 = (float)vsqrt_s(uVar5);
  *(float *)(param_1 + 0x214) = fVar6 * 0.4 * *(float *)(param_1 + 0x40);
  pfVar4 = (float *)(*(int *)(param_1 + 0x130) + 0xb4);
  fVar6 = *pfVar4;
  iVar2 = FUN_088a9614(param_1);
  *pfVar4 = fVar6 + *(float *)(iVar2 + 4);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xb4);
  FUN_088ac608(param_1,1);
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined *)(param_1 + 0x330) = 0;
  *(undefined *)(param_1 + 0x331) = 0;
  *(undefined *)(param_1 + 0x332) = 0;
  return param_1;
}

