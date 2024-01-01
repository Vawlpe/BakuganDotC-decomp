#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b0a00(int param_1,int param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined (*pauVar3) [16];
  undefined4 uVar4;
  float fVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088ab2d0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2ae4;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x350) = 1;
  if (param_2 < 0x73) {
    if ((param_2 != 0x3d) && (param_2 != 0x2c)) {
      if (param_2 == 0x19) {
        *(undefined4 *)(param_1 + 0x350) = 0;
      }
      goto LAB_088b0aa4;
    }
  }
  else {
    if (param_2 < 0x88) {
      if (param_2 < 0x75) {
        *(undefined4 *)(param_1 + 0x350) = 0;
      }
      goto LAB_088b0aa4;
    }
    if (0x89 < param_2) goto LAB_088b0aa4;
  }
  *(undefined4 *)(param_1 + 0x350) = 0;
LAB_088b0aa4:
  iVar2 = FUN_088a9614(param_1);
  pauVar3 = (undefined (*) [16])FUN_088a9614(param_1);
  auVar1 = vsub_q(*(undefined (*) [16])(iVar2 + 0x10),*pauVar3);
  uVar4 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar5 = (float)vsqrt_s(uVar4);
  *(float *)(param_1 + 800) = fVar5 * 0.5;
  iVar2 = FUN_088a9614(param_1);
  fVar5 = *(float *)(iVar2 + 0x14);
  iVar2 = FUN_088a9614(param_1);
  *(float *)(param_1 + 0x324) = (fVar5 - *(float *)(iVar2 + 4)) * 0.5;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x360) = in_V72;
  *(undefined4 *)(param_1 + 0x364) = in_V76;
  *(undefined4 *)(param_1 + 0x368) = in_V7A;
  *(undefined4 *)(param_1 + 0x36c) = in_V7E;
  *(undefined4 *)(param_1 + 0x370) = in_V72;
  *(undefined4 *)(param_1 + 0x374) = in_V76;
  *(undefined4 *)(param_1 + 0x378) = in_V7A;
  *(undefined4 *)(param_1 + 0x37c) = in_V7E;
  return param_1;
}

