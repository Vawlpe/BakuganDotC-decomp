#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886b540(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  int iVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [12];
  undefined4 uVar8;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iVar5 = FUN_08870eb4();
  if (iVar5 == 0) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x1000000;
    iVar5 = FUN_0885fc80(param_1);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    else if (*(int *)(param_1 + 0x5bc) < 3) {
      pauVar7 = (undefined (*) [12])(param_1 + 0x80);
      uVar8 = vdot_t(*pauVar7,*pauVar7);
      uVar9 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar7);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar7,uVar8);
      local_50 = auVar1._0_4_;
      uStack_4c = auVar1._4_4_;
      uStack_48 = auVar1._8_4_;
      FUN_08824024(DAT_08ac5c70,0x1d,param_1 + 0x20,&local_50);
      FUN_08824024(DAT_08ac5c70,0x1d,param_1 + 0x20,&local_50);
      iVar5 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    (**(code **)(iVar5 + 0x10c))(param_1 + *(short *)(iVar5 + 0x108));
    if (*(int *)(param_1 + 0x5bc) < 3) {
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 1;
      pauVar7 = (undefined (*) [12])(param_1 + 0x80);
      uVar8 = vdot_t(*pauVar7,*pauVar7);
      uVar9 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar7);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar7,uVar8);
      *(float *)(param_1 + 0x350) = auVar1._4_4_ * -0.9;
      *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x358) = 0;
      *(undefined4 *)(param_1 + 0x35c) = 0;
      pauVar6 = (undefined (*) [16])(param_1 + 0x350);
      uVar8 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
      auVar2 = vmov_q(*pauVar6);
      auVar3 = vrot_q(uVar8,1,0,3,0);
      auVar4 = vrot_q(uVar8,2,0,1,0);
      uVar8 = vdot_t(*(undefined (*) [12])*pauVar6,auVar3._0_12_);
      uVar9 = vdot_t(*(undefined (*) [12])*pauVar6,auVar4._0_12_);
      *(undefined4 *)*pauVar6 = uVar8;
      *(int *)(param_1 + 0x354) = auVar2._4_4_;
      *(undefined4 *)(param_1 + 0x358) = uVar9;
      *(int *)(param_1 + 0x35c) = auVar2._12_4_;
      uVar8 = vdot_t(*(undefined (*) [12])*pauVar6,*(undefined (*) [12])*pauVar6);
      uVar9 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar6);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*(undefined (*) [12])*pauVar6,uVar8);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x354) = auVar1._4_4_;
      *(int *)(param_1 + 0x358) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x35c) = in_V7D;
      iVar5 = *(int *)(param_1 + 0x140);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x140);
    }
    if (iVar5 != 9) {
      *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x50) = 10;
    }
  }
  return;
}

