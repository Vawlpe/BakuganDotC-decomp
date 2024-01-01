#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3d9c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int *piVar3;
  int iVar4;
  undefined (*pauVar5) [16];
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_V7D;
  undefined4 uVar10;
  
  *(short *)(param_1 + 0x410) = *(short *)(param_1 + 0x410) + 1;
  if (*(int *)(param_1 + 0x3f4) != 0) {
    piVar3 = (int *)FUN_088dfa48();
    iVar6 = *piVar3;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 0x14);
      while( true ) {
        iVar4 = (**(code **)(iVar4 + 0x5c))(iVar6 + *(short *)(iVar4 + 0x58));
        if (iVar4 == 0) {
          iVar6 = *(int *)(iVar6 + 4);
        }
        else if (*(int *)(param_1 + 0x3f4) == iVar6) {
          if (*(int *)(*(int *)(param_1 + 0x3f4) + 0x3a0) != 8) {
            pauVar5 = (undefined (*) [16])(iVar6 + 0x20);
            fVar7 = *(float *)(iVar6 + 0x1b4) + 12.0;
            auVar2._4_4_ = fVar7;
            auVar2._0_4_ = *(undefined4 *)(iVar6 + 0x1b0);
            auVar2._8_4_ = *(undefined4 *)(iVar6 + 0x1b8);
            auVar2._12_4_ = *(undefined4 *)(iVar6 + 0x1bc);
            auVar2 = vsub_q(auVar2,*pauVar5);
            fVar9 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
            auVar1._4_4_ = fVar7;
            auVar1._0_4_ = *(undefined4 *)(iVar6 + 0x1b0);
            auVar1._8_4_ = *(undefined4 *)(iVar6 + 0x1b8);
            auVar1 = vsub_t(auVar1,*(undefined (*) [12])*pauVar5);
            uVar8 = vdot_t(auVar1,auVar1);
            uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar5);
            vrsq_s(uVar8);
            uVar8 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(auVar1,uVar8);
            auVar1 = vscl_t(auVar1,SQRT(fVar9) - 6.3);
            auVar1 = vadd_t(*(undefined (*) [12])*pauVar5,auVar1);
            auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_1 + 0x400));
            uVar8 = vrcp_s(0x41900000);
            auVar1 = vscl_t(auVar1,uVar8);
            iVar4 = *(int *)(param_1 + 0x418);
            *(int *)(iVar4 + 0x80) = auVar1._0_4_;
            *(int *)(iVar4 + 0x84) = auVar1._4_4_;
            *(int *)(iVar4 + 0x88) = auVar1._8_4_;
            *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar6 + 0x2c);
            *(undefined4 *)(*(int *)(param_1 + 0x418) + 0x84) = *(undefined4 *)(iVar4 + 0x84);
            return;
          }
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        if (iVar6 == 0) break;
        iVar4 = *(int *)(iVar6 + 0x14);
      }
    }
  }
  return;
}

