#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889f9ec(float param_1,int param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined (*pauVar5) [12];
  float fVar6;
  float fVar7;
  undefined4 in_V7D;
  
  fVar6 = *(float *)(param_2 + 0x10) * 2.0 * param_1 * (1.0 - param_1) + param_1 * param_1;
  fVar7 = 1.0 - fVar6;
  auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x20),fVar7 * fVar7);
  *(int *)*(undefined (*) [12])(param_2 + 0x20) = auVar1._0_4_;
  *(int *)(param_2 + 0x24) = auVar1._4_4_;
  *(int *)(param_2 + 0x28) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x2c) = in_V7D;
  auVar3 = *(undefined (*) [12])(param_2 + 0x20);
  auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x30),fVar6 * 2.0 * fVar7);
  *(int *)*(undefined (*) [12])(param_2 + 0x30) = auVar1._0_4_;
  *(int *)(param_2 + 0x34) = auVar1._4_4_;
  *(int *)(param_2 + 0x38) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x3c) = in_V7D;
  auVar4 = *(undefined (*) [12])(param_2 + 0x30);
  auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x40),fVar6 * fVar6);
  *(int *)*(undefined (*) [12])(param_2 + 0x40) = auVar1._0_4_;
  *(int *)(param_2 + 0x44) = auVar1._4_4_;
  *(int *)(param_2 + 0x48) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x4c) = in_V7D;
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x48);
  pauVar5 = (undefined (*) [12])(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  auVar1 = vadd_t(*pauVar5,auVar3);
  *(int *)*pauVar5 = auVar1._0_4_;
  *(int *)(param_2 + 0x54) = auVar1._4_4_;
  *(int *)(param_2 + 0x58) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x5c) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  auVar1 = vadd_t(*pauVar5,auVar4);
  *(int *)*pauVar5 = auVar1._0_4_;
  *(int *)(param_2 + 0x54) = auVar1._4_4_;
  *(int *)(param_2 + 0x58) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x5c) = uVar2;
  return;
}

