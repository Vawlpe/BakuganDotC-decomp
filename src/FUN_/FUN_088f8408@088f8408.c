#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f8408(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined (*pauVar7) [12];
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7D;
  undefined4 uVar11;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  iVar8 = *(int *)(*(int *)(param_1 + 8) + 4);
  pauVar7 = (undefined (*) [12])
            (**(code **)(iVar8 + 0x14))(*(int *)(param_1 + 8) + (int)*(short *)(iVar8 + 0x10));
  uVar3 = *(undefined4 *)pauVar7[1];
  auVar1 = vadd_t(*pauVar7,*(undefined (*) [12])(param_1 + 0x110));
  local_d0 = auVar1._0_4_;
  local_c8 = auVar1._8_4_;
  iVar8 = ***(int ***)(param_1 + 0x80);
  pauVar7 = (undefined (*) [12])
            (**(code **)(iVar8 + 0x14))
                      ((int)**(int ***)(param_1 + 0x80) + (int)*(short *)(iVar8 + 0x10));
  auVar2 = vsub_t(*pauVar7,*(undefined (*) [12])(param_1 + 0x60));
  fVar9 = (float)vdot_t(auVar2,auVar2);
  if (fVar9 <= 0.01) {
    local_c0 = DAT_08abf960;
    uStack_bc = DAT_08abf964;
    uStack_b8 = DAT_08abf968;
    iVar8 = *(int *)(param_1 + 4);
  }
  else {
    uVar10 = vdot_t(auVar2,auVar2);
    uVar11 = vcmp_s(8,uVar10,auVar2._0_4_);
    vrsq_s(uVar10);
    uVar10 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar2,uVar10);
    local_c0 = auVar2._0_4_;
    uStack_bc = auVar2._4_4_;
    uStack_b8 = auVar2._8_4_;
    iVar8 = *(int *)(param_1 + 4);
  }
  if (*(char *)(iVar8 + 0x4a) == '\0') {
    auVar2._4_4_ = uStack_bc;
    auVar2._0_4_ = local_c0;
    auVar2._8_4_ = uStack_b8;
    fVar9 = (float)vdot_t(auVar2,*(undefined (*) [12])(param_1 + 0x120));
    if (fVar9 < 0.3) {
      auVar5._4_4_ = uStack_bc;
      auVar5._0_4_ = local_c0;
      auVar5._8_4_ = uStack_b8;
      auVar4._8_4_ = DAT_08abf948;
      auVar4._4_4_ = DAT_08abf944;
      auVar4._0_4_ = DAT_08abf940;
      auVar2 = vcrsp_t(auVar5,auVar4);
      fVar9 = (float)vdot_t(auVar2,*(undefined (*) [12])(param_1 + 0x120));
      if (fVar9 < 0.0) {
        auVar2 = vscl_t(auVar2,*(float *)(*(int *)(param_1 + 0x100) + 0x48) * 1.5);
        local_b0 = auVar2._0_4_;
        uStack_ac = auVar2._4_4_;
        uStack_a8 = auVar2._8_4_;
      }
      else {
        auVar2 = vscl_t(auVar2,*(float *)(*(int *)(param_1 + 0x100) + 0x48) * -1.5);
        local_b0 = auVar2._0_4_;
        uStack_ac = auVar2._4_4_;
        uStack_a8 = auVar2._8_4_;
      }
      iVar8 = ***(int ***)(param_1 + 0x80);
      pauVar7 = (undefined (*) [12])
                (**(code **)(iVar8 + 0x14))
                          ((int)**(int ***)(param_1 + 0x80) + (int)*(short *)(iVar8 + 0x10));
      auVar6._4_4_ = uStack_ac;
      auVar6._0_4_ = local_b0;
      auVar6._8_4_ = uStack_a8;
      auVar2 = vadd_t(*pauVar7,auVar6);
      local_d0 = auVar2._0_4_;
      local_c8 = auVar2._8_4_;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = local_d0;
  *(int *)(param_1 + 0x44) = auVar1._4_4_;
  *(undefined4 *)(param_1 + 0x48) = local_c8;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  if (*(char *)(*(int *)(param_1 + 0x100) + 0x61) != '\0') {
    FUN_088fca60(param_1);
  }
  return;
}

