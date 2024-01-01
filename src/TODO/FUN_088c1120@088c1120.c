#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c1120(undefined4 param_1,int param_2,char param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [36];
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar8;
  uint local_48;
  
  local_48 = 0x3f800000;
  if (param_3 != '\0') {
    local_48 = 0xbf800000;
  }
  iVar4 = *(int *)(param_2 + 0x130);
  auVar2._4_8_ = 0;
  auVar2._0_4_ = local_48;
  auVar3._24_12_ = *(undefined (*) [12])(iVar4 + 0xa0);
  auVar3._20_4_ = *(undefined4 *)(iVar4 + 0x98);
  auVar3._16_4_ = *(undefined4 *)(iVar4 + 0x94);
  auVar3._12_4_ = *(undefined4 *)(iVar4 + 0x90);
  auVar3._8_4_ = *(undefined4 *)(iVar4 + 0x88);
  auVar3._4_4_ = *(undefined4 *)(iVar4 + 0x84);
  auVar3._0_4_ = *(undefined4 *)(iVar4 + 0x80);
  auVar2 = vtfm3_t(auVar3,auVar2 << 0x40);
  uVar6 = vdot_t(auVar2,auVar2);
  uVar8 = vcmp_s(8,uVar6,auVar2._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar2,uVar6);
  iVar4 = FUN_088e1948();
  auVar2 = vsub_t(*(undefined (*) [12])(iVar4 + 0x20),*(undefined (*) [12])(param_2 + 0x20));
  uVar6 = vdot_t(auVar2,auVar2);
  uVar8 = vcmp_s(8,uVar6,auVar2._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar6);
  fVar7 = (float)vdot_t(auVar1,auVar2);
  uVar6 = vmul_s(0x3f860a92,in_V7C);
  fVar5 = (float)vcos_s(uVar6);
  if (fVar7 < fVar5) {
    return 0;
  }
  return 1;
}

