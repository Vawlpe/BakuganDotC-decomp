#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e8294(int param_1,undefined (*param_2) [12])

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
  
  auVar1._4_4_ = *(float *)(param_1 + 0x1b4) + 12.0;
  auVar1._0_4_ = *(undefined4 *)(param_1 + 0x1b0);
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x1b8);
  auVar1 = vsub_t(*param_2,auVar1);
  uVar6 = vdot_t(auVar1,auVar1);
  uVar8 = vcmp_s(8,uVar6,auVar1._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar6);
  iVar4 = *(int *)(param_1 + 0x130);
  auVar3._24_12_ = *(undefined (*) [12])(iVar4 + 0xa0);
  auVar3._20_4_ = *(undefined4 *)(iVar4 + 0x98);
  auVar3._16_4_ = *(undefined4 *)(iVar4 + 0x94);
  auVar3._12_4_ = *(undefined4 *)(iVar4 + 0x90);
  auVar3._8_4_ = *(undefined4 *)(iVar4 + 0x88);
  auVar3._4_4_ = *(undefined4 *)(iVar4 + 0x84);
  auVar3._0_4_ = *(undefined4 *)(iVar4 + 0x80);
  auVar2 = vtfm3_t(auVar3,ZEXT412(0xbf800000) << 0x40);
  uVar6 = vdot_t(auVar2,auVar2);
  uVar8 = vcmp_s(8,uVar6,auVar2._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar6);
  fVar7 = (float)vdot_t(auVar1,auVar2);
  uVar6 = vmul_s(0x3f860a92,in_V7C);
  fVar5 = (float)vcos_s(uVar6);
  if (fVar5 < fVar7) {
    *(undefined4 *)(param_1 + 0x3a0) = 8;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined *)(*(int *)(param_1 + 0x418) + 0x25) = 0;
    FUN_088e5bec(param_1,0x29,0,1);
    FUN_088e5bec(param_1,0x2a,0,1);
    FUN_088241ec(DAT_08ac5c70,0x45,param_1 + 0x180);
    FUN_088df134(param_1,0x2c0002c,0,0);
    FUN_088f4cbc(DAT_08abf710,*(undefined *)(*(int *)(param_1 + 0x350) + 0x3c));
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0x3eae147b;
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    FUN_089e02cc(param_1,"psp_vxsrobo_swich",&LAB_088e8144,param_1 + 0x460);
  }
  return;
}

