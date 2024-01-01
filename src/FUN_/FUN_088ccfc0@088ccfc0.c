#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ccfc0(float param_1,undefined (**param_2) [12],undefined4 *param_3,undefined4 *param_4,
                 undefined (*param_5) [12],undefined (*param_6) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined (*pauVar6) [12];
  undefined (*pauVar7) [12];
  undefined (*pauVar8) [12];
  float fVar9;
  
  pauVar6 = *param_2;
  pauVar7 = (undefined (*) [12])(pauVar6[2] + 8);
  if (DAT_08b00f34 == 0) {
    DAT_08b00f34 = 1;
    DAT_08b00f30 = 10.0;
  }
  auVar1 = vsub_t(*param_5,*pauVar7);
  fVar9 = DAT_08b00f30 / (param_1 * 2.0);
  auVar1 = vscl_t(auVar1,fVar9 * fVar9);
  pauVar8 = (undefined (*) [12])(pauVar6[1] + 4);
  auVar2 = vscl_t(*pauVar8,DAT_08b00f30);
  auVar1 = vsub_t(auVar1,auVar2);
  auVar1 = vscl_t(auVar1,0x3d088889);
  uVar4 = *(undefined4 *)(pauVar6[2] + 4);
  auVar1 = vadd_t(*pauVar8,auVar1);
  *(int *)*pauVar8 = auVar1._0_4_;
  *(int *)(pauVar6[1] + 8) = auVar1._4_4_;
  *(int *)pauVar6[2] = auVar1._8_4_;
  *(undefined4 *)(pauVar6[2] + 4) = uVar4;
  auVar1 = vscl_t(*pauVar8,0x3d088889);
  uVar4 = *(undefined4 *)(pauVar6[3] + 8);
  auVar1 = vadd_t(*pauVar7,auVar1);
  *(int *)*pauVar7 = auVar1._0_4_;
  *(int *)pauVar6[3] = auVar1._4_4_;
  *(int *)(pauVar6[3] + 4) = auVar1._8_4_;
  *(undefined4 *)(pauVar6[3] + 8) = uVar4;
  if (DAT_08b00f34 == 0) {
    DAT_08b00f34 = 1;
    DAT_08b00f30 = 10.0;
  }
  pauVar8 = pauVar6 + 4;
  auVar1 = vsub_t(*param_6,*pauVar8);
  fVar9 = DAT_08b00f30 / (param_1 * 2.0);
  auVar1 = vscl_t(auVar1,fVar9 * fVar9);
  auVar2 = vscl_t(*pauVar6,DAT_08b00f30);
  auVar1 = vsub_t(auVar1,auVar2);
  auVar1 = vscl_t(auVar1,0x3d088889);
  uVar4 = *(undefined4 *)pauVar6[1];
  auVar1 = vadd_t(*pauVar6,auVar1);
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(*pauVar6 + 4) = auVar1._4_4_;
  *(int *)(*pauVar6 + 8) = auVar1._8_4_;
  *(undefined4 *)pauVar6[1] = uVar4;
  auVar1 = vscl_t(*pauVar6,0x3d088889);
  uVar4 = *(undefined4 *)pauVar6[5];
  auVar1 = vadd_t(*pauVar8,auVar1);
  *(int *)*pauVar8 = auVar1._0_4_;
  *(int *)(pauVar6[4] + 4) = auVar1._4_4_;
  *(int *)(pauVar6[4] + 8) = auVar1._8_4_;
  *(undefined4 *)pauVar6[5] = uVar4;
  uVar4 = *(undefined4 *)pauVar6[3];
  uVar3 = *(undefined4 *)(pauVar6[3] + 4);
  uVar5 = *(undefined4 *)(pauVar6[3] + 8);
  *param_3 = *(undefined4 *)*pauVar7;
  param_3[1] = uVar4;
  param_3[2] = uVar3;
  param_3[3] = uVar5;
  uVar4 = *(undefined4 *)(pauVar6[4] + 4);
  uVar3 = *(undefined4 *)(pauVar6[4] + 8);
  uVar5 = *(undefined4 *)pauVar6[5];
  *param_4 = *(undefined4 *)*pauVar8;
  param_4[1] = uVar4;
  param_4[2] = uVar3;
  param_4[3] = uVar5;
  return;
}

