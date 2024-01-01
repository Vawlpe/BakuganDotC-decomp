#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885da0c(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x6f4) == '\0') {
    *(undefined *)(param_1 + 0x6f4) = 1;
  }
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x6d0),*(undefined (*) [16])(param_1 + 0x20));
  uVar5 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar6 = (float)vsqrt_s(uVar5);
  *(float *)(param_1 + 0x6f0) = *(float *)(param_1 + 0x6f0) + fVar6;
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)*(undefined (*) [16])(param_1 + 0x6d0) =
       *(undefined4 *)*(undefined (*) [16])(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x6d4) = uVar5;
  *(undefined4 *)(param_1 + 0x6d8) = uVar2;
  *(undefined4 *)(param_1 + 0x6dc) = uVar3;
  if ((*(char *)(param_1 + 0x6f5) != '\0') &&
     (*(float *)(*(int *)(param_1 + 0x554) + 0x88) * *(float *)(*(int *)(param_1 + 0x554) + 0x84) <=
      0.4)) {
    iVar4 = FUN_08887a90(param_1 + 0x434);
    fVar6 = (float)iVar4;
    if (iVar4 < 0) {
      fVar6 = fVar6 + 4.294967e+09;
    }
    FUN_08887ae4(fVar6,param_1 + 0x434);
  }
  FUN_088686b0(param_1);
  FUN_0885d724(param_1);
  iVar4 = FUN_0885fc80(param_1);
  if (((iVar4 == 0) && (iVar4 = FUN_08899b0c(param_1), iVar4 != 0)) &&
     (*(int *)(param_1 + 0x6cc) != 0)) {
    FUN_08897224(*(undefined4 *)(param_1 + 0x6cc));
  }
  return;
}

