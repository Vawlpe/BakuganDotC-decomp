#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dacd0(undefined4 param_1,int param_2,int param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined auVar8 [16];
  undefined auVar10 [16];
  undefined auVar12 [16];
  undefined4 in_V00;
  undefined4 uVar13;
  undefined4 in_V18;
  undefined4 in_V19;
  undefined4 in_V1A;
  undefined4 in_V1B;
  undefined4 in_V1C;
  undefined4 in_V1D;
  undefined4 in_V1E;
  undefined4 in_V1F;
  undefined auVar9 [16];
  undefined auVar11 [16];
  
  uVar3 = vh2f_p(CONCAT44(CONCAT22(*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0xe)),
                          CONCAT22(*(undefined2 *)(param_2 + 8),*(undefined2 *)(param_2 + 2))));
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar4 = vh2f_p(CONCAT44(CONCAT22(*(undefined2 *)(param_3 + 0x14),*(undefined2 *)(param_3 + 0xe)),
                          CONCAT22(*(undefined2 *)(param_3 + 8),*(undefined2 *)(param_3 + 2))));
  uVar5 = vh2f_p(CONCAT44(CONCAT22(*(undefined2 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x12)),
                          CONCAT22(*(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 6))));
  uVar6 = vh2f_p(CONCAT44(CONCAT22(*(undefined2 *)(param_3 + 0x16),*(undefined2 *)(param_3 + 0x10)),
                          CONCAT22(*(undefined2 *)(param_3 + 10),*(undefined2 *)(param_3 + 4))));
  auVar1._12_4_ = in_V1E;
  auVar1._8_4_ = in_V1A;
  auVar1._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar1._0_4_ = (int)uVar5;
  auVar2._12_4_ = in_V1C;
  auVar2._8_4_ = in_V18;
  auVar2._4_4_ = uVar7;
  auVar2._0_4_ = (int)uVar3;
  auVar1 = vadd_q(auVar1,auVar2);
  auVar8._12_4_ = in_V1F;
  auVar8._8_4_ = in_V1B;
  auVar8._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
  auVar8._0_4_ = (int)uVar6;
  auVar9._12_4_ = in_V1D;
  auVar9._8_4_ = in_V19;
  auVar9._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar9._0_4_ = (int)uVar4;
  auVar2 = vadd_q(auVar8,auVar9);
  uVar13 = vocp_s(param_1);
  vpfxt(4,4,4,4);
  vscl_q(auVar1,in_V00);
  vpfxt(4,4,4,4);
  vscl_q(auVar2,in_V00);
  uVar5 = vmul_p(CONCAT44(param_1,uVar13),CONCAT44(param_1,uVar13));
  vpfxs(0,1,1,0);
  vpfxt(2,3,2,3);
  auVar10._8_8_ = uVar5;
  auVar10._4_4_ = param_1;
  auVar10._0_4_ = uVar13;
  auVar11._8_8_ = uVar5;
  auVar11._4_4_ = param_1;
  auVar11._0_4_ = uVar13;
  auVar1 = vmul_q(auVar10,auVar11);
  auVar12._8_8_ = uVar4;
  auVar12._4_4_ = uVar7;
  auVar12._0_4_ = (int)uVar3;
  vtfm4_q(auVar12,auVar1);
  return;
}

