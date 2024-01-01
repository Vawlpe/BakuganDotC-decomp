#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b062c(int param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  int iVar2;
  undefined (*pauVar3) [16];
  undefined4 uVar4;
  float fVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  FUN_088ab38c(param_1,(&PTR_DAT_08a8fe48)[param_2 * 3],&local_30);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2a44;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  iVar2 = FUN_088a9614(param_1);
  pauVar3 = (undefined (*) [16])FUN_088a9614(param_1);
  auVar1 = vsub_q(*(undefined (*) [16])(iVar2 + 0x10),*pauVar3);
  uVar4 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar5 = (float)vsqrt_s(uVar4);
  *(float *)(param_1 + 800) = fVar5 * 0.7;
  iVar2 = FUN_088a9614(param_1);
  fVar5 = *(float *)(iVar2 + 0x14);
  iVar2 = FUN_088a9614(param_1);
  *(float *)(param_1 + 0x324) = (fVar5 - *(float *)(iVar2 + 4)) * 0.5;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x3f7fbe77;
  iVar2 = FUN_089ded60(param_1,"noise");
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  FUN_089e0a70(param_1,&LAB_088b05ec,0);
  *(undefined *)(param_1 + 0x32c) = 1;
  return param_1;
}

