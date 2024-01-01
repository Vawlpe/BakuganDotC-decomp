#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08877af0(undefined4 param_1,float param_2,int param_3,char param_4,undefined (*param_5) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  undefined (*pauVar4) [16];
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7D;
  undefined4 uVar7;
  undefined4 local_70;
  undefined4 uStack_68;
  
  iVar3 = FUN_088663a0(*(undefined4 *)(param_3 + 0xb4));
  pauVar4 = (undefined (*) [16])(param_3 + 0x80);
  if (iVar3 == 0) {
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar4,param_1);
    *(undefined4 *)(param_3 + 0x70) = auVar1._0_4_;
    *(int *)(param_3 + 0x74) = auVar1._4_4_;
    *(int *)(param_3 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_3 + 0x7c) = in_V7D;
    return 0;
  }
  local_70 = *(undefined4 *)*(undefined (*) [12])(iVar3 + 0x20);
  fVar5 = *(float *)(iVar3 + 0x24);
  uStack_68 = *(undefined4 *)(iVar3 + 0x28);
  if (param_5 != (undefined (*) [12])0x0) {
    auVar1 = vadd_t(*(undefined (*) [12])(iVar3 + 0x20),*param_5);
    local_70 = auVar1._0_4_;
    fVar5 = auVar1._4_4_;
    uStack_68 = auVar1._8_4_;
  }
  auVar1._4_4_ = fVar5 + param_2;
  auVar1._0_4_ = local_70;
  auVar1._8_4_ = uStack_68;
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_3 + 0x60));
  uVar6 = vdot_t(auVar1,auVar1);
  uVar7 = vcmp_s(8,uVar6,auVar1._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar6);
  auVar2._12_4_ = in_V7D;
  auVar2._0_12_ = auVar1;
  auVar2 = vsub_q(auVar2,*pauVar4);
  auVar2 = vscl_q(auVar2,*(undefined4 *)(param_3 + 0xe0));
  auVar2 = vadd_q(*pauVar4,auVar2);
  *(int *)*pauVar4 = auVar2._0_4_;
  *(int *)(param_3 + 0x84) = auVar2._4_4_;
  *(int *)(param_3 + 0x88) = auVar2._8_4_;
  *(int *)(param_3 + 0x8c) = auVar2._12_4_;
  uVar6 = vdot_t(*(undefined (*) [12])*pauVar4,*(undefined (*) [12])*pauVar4);
  uVar7 = vcmp_s(8,uVar6,*(undefined4 *)*pauVar4);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*(undefined (*) [12])*pauVar4,uVar6);
  *(int *)*pauVar4 = auVar1._0_4_;
  *(int *)(param_3 + 0x84) = auVar1._4_4_;
  *(int *)(param_3 + 0x88) = auVar1._8_4_;
  *(undefined4 *)(param_3 + 0x8c) = in_V7D;
  auVar1 = vscl_t(*(undefined (*) [12])*pauVar4,param_1);
  *(undefined4 *)(param_3 + 0x70) = auVar1._0_4_;
  *(int *)(param_3 + 0x74) = auVar1._4_4_;
  *(int *)(param_3 + 0x78) = auVar1._8_4_;
  *(undefined4 *)(param_3 + 0x7c) = in_V7D;
  if ((param_4 != '\0') && (0x2d < *(int *)(param_3 + 0xf4))) {
    *(float *)(param_3 + 0xe0) = *(float *)(param_3 + 0xe0) * 0.96;
  }
  return 1;
}

