#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089efc70(undefined (*param_1) [16],undefined (*param_2) [12],undefined (*param_3) [16],
                 undefined4 *param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [36];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [12];
  undefined4 in_V74;
  
  FUN_089d8634();
  uVar6 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar6);
  FUN_089d866c();
  iVar8 = 0;
  if (iVar7 != 0) {
    FUN_089efae0(iVar7);
    iVar8 = iVar7;
  }
  pauVar9 = (undefined (*) [12])(iVar8 + 0x60);
  if (param_4 == (undefined4 *)0x0) {
    uVar6 = *(undefined4 *)(*param_1 + 4);
    uVar3 = *(undefined4 *)(*param_1 + 8);
    uVar4 = *(undefined4 *)(*param_1 + 0xc);
    *(undefined4 *)*pauVar9 = *(undefined4 *)*param_1;
    *(undefined4 *)(iVar8 + 100) = uVar6;
    *(undefined4 *)(iVar8 + 0x68) = uVar3;
    *(undefined4 *)(iVar8 + 0x6c) = uVar4;
    uVar6 = *(undefined4 *)(*param_1 + 0xc);
    auVar1 = vadd_t(*(undefined (*) [12])*param_1,*param_2);
    *(undefined4 *)(iVar8 + 0x70) = auVar1._0_4_;
    *(int *)(iVar8 + 0x74) = auVar1._4_4_;
    *(int *)(iVar8 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(iVar8 + 0x7c) = uVar6;
  }
  else {
    auVar2._8_8_ = *(undefined8 *)(param_4 + 4);
    auVar2._4_4_ = param_4[1];
    auVar2._0_4_ = *param_4;
    auVar2 = vtfm4_q(auVar2,*param_1);
    *(int *)*pauVar9 = auVar2._0_4_;
    *(int *)(iVar8 + 100) = auVar2._4_4_;
    *(int *)(iVar8 + 0x68) = auVar2._8_4_;
    *(int *)(iVar8 + 0x6c) = auVar2._12_4_;
    auVar5._24_12_ = *(undefined (*) [12])(param_4 + 8);
    auVar5._20_4_ = param_4[6];
    auVar5._16_4_ = param_4[5];
    auVar5._12_4_ = param_4[4];
    auVar5._8_4_ = param_4[2];
    auVar5._4_4_ = param_4[1];
    auVar5._0_4_ = *param_4;
    auVar1 = vtfm3_t(auVar5,*param_2);
    auVar1 = vadd_t(*pauVar9,auVar1);
    *(undefined4 *)(iVar8 + 0x70) = auVar1._0_4_;
    *(int *)(iVar8 + 0x74) = auVar1._4_4_;
    *(int *)(iVar8 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(iVar8 + 0x7c) = *(undefined4 *)(iVar8 + 0x6c);
  }
  auVar2 = vsat0_q(*param_3);
  auVar2 = vscl_q(auVar2,in_V74);
  auVar2 = vf2iz_q(auVar2,0x17);
  uVar6 = vi2uc_q(auVar2);
  *(undefined4 *)(iVar8 + 0x84) = uVar6;
  return;
}

