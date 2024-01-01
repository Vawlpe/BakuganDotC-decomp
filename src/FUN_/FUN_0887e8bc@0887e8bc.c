#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887e8bc(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [12];
  int iVar6;
  undefined (*pauVar7) [12];
  uint uVar8;
  undefined4 uVar9;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if (60.0 < (float)*(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    iVar6 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
    local_40 = in_V72;
    local_3c = in_V76;
    uStack_38 = in_V7A;
    if (iVar6 != 0) {
      auVar1 = vsub_t(*(undefined (*) [12])(iVar6 + 0x20),
                      *(undefined (*) [12])(*(int *)(param_1 + 0xb0) + 0x20));
      uVar9 = vmul_s(0x3fc90fdb,in_V7C);
      auVar2._12_4_ = *(undefined4 *)(iVar6 + 0x2c);
      auVar2._0_12_ = auVar1;
      vmov_q(auVar2);
      auVar2 = vrot_q(uVar9,1,0,3,0);
      auVar3 = vrot_q(uVar9,2,0,1,0);
      uVar8 = vdot_t(auVar1,auVar2._0_12_);
      uVar9 = vdot_t(auVar1,auVar3._0_12_);
      auVar5._4_4_ = 0;
      auVar5._0_4_ = uVar8;
      auVar5._8_4_ = uVar9;
      auVar4._4_4_ = 0;
      auVar4._0_4_ = uVar8;
      auVar4._8_4_ = uVar9;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = uVar8;
      auVar1._8_4_ = uVar9;
      uVar9 = vdot_t(auVar1,auVar4);
      uVar10 = vcmp_s(8,uVar9,uVar8);
      vrsq_s(uVar9);
      uVar9 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
      uVar9 = vmul_s(uVar9,*(float *)(param_1 + 0x10c) * 80.0);
      auVar1 = vscl_t(auVar5,uVar9);
      local_40 = auVar1._0_4_;
      local_3c = auVar1._4_4_;
      uStack_38 = auVar1._8_4_;
    }
    iVar6 = FUN_0887979c(param_1,0xd3);
    if (iVar6 == 0) {
      FUN_08877af0(0x42c80000,0x42a00000,param_1,1,&local_40);
      pauVar7 = (undefined (*) [12])(param_1 + 0x60);
      iVar6 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar7,
                           (undefined (*) [12])(param_1 + 0x70),0x52,3,0,0x31bf337e);
      if (iVar6 != 0) {
        FUN_08878cc4(param_1,0xd3,&DAT_08aba930);
        return;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar7,*(undefined (*) [12])(param_1 + 0x70));
      *(int *)*pauVar7 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar9;
    }
  }
  return;
}

