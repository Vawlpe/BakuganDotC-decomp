#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08859164(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [12];
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar11;
  
  uVar9 = 0;
  iVar5 = FUN_08858fcc();
  if (((iVar5 != 0) && (*(char *)(iVar5 + 0x4c1) == '\0')) && (*(char *)(iVar5 + 0x574) == '\0')) {
    iVar8 = *(int *)(param_1 + 0x8c0);
    if (iVar8 < 2) {
      if (iVar8 < 0) {
        uVar9 = 1;
      }
      else {
        if (iVar8 < 1) {
          auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(iVar5 + 0x20))
          ;
          uVar6 = vdot_t(auVar2._0_12_,auVar2._0_12_);
          fVar10 = (float)vsqrt_s(uVar6);
          if (*(float *)(param_1 + 0x9f0) <= fVar10) {
            return 0;
          }
          *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
        }
        iVar8 = DONE_NotZero_DAT_08AC5258();
        if (iVar8 != 0) {
          uVar6 = DONE_Get_DAT_08AC5258(param_1);
          FUN_089c00c4(uVar6,0x20001e,*(int *)(param_1 + 0x130) + 0xb0,0,1);
        }
        FUN_0886271c(param_1,iVar5);
        uVar6 = atan2f(*(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28),
                       *(float *)*(undefined (*) [16])(iVar5 + 0x20) - *(float *)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 0x930) = uVar6;
        uVar6 = vmul_s(uVar6,in_V7C);
        vrot_q(uVar6,1,0,2,0);
        uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x930),in_V7C);
        auVar2 = vrot_q(uVar6,1,0,2,0);
        auVar1 = vscl_t(auVar2._0_12_,0x437a0000);
        vadd_t(auVar1,*(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x20));
        FUN_08824024(DAT_08abd5b0,0x1c);
        *(undefined4 *)(param_1 + 0x8d0) = 0;
        *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
      }
    }
    else {
      if (iVar8 < 3) {
        iVar8 = *(int *)(param_1 + 0x8d0);
        *(int *)(param_1 + 0x8d0) = iVar8 + 1;
        if (iVar8 < 0x15) {
          return 0;
        }
        *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
      }
      else if (3 < iVar8) {
        return 1;
      }
      FUN_089d8634();
      uVar6 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar7 = FUN_089d7d74(0x160,0,0);
      FUN_089d816c(uVar6);
      FUN_089d866c();
      iVar8 = 0;
      if (iVar7 != 0) {
        FUN_08876d00(iVar7,param_1,0x7e);
        iVar8 = iVar7;
      }
      uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x930),in_V7C);
      auVar2 = vrot_q(uVar6,1,0,2,0);
      auVar1 = vscl_t(auVar2._0_12_,0x437a0000);
      auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x20));
      auVar3._4_4_ = *(float *)(iVar5 + 0x24) + *(float *)(*(int *)(iVar5 + 0x4bc) + 4);
      auVar3._0_4_ = *(undefined4 *)(iVar5 + 0x20);
      auVar3._8_4_ = *(undefined4 *)(iVar5 + 0x28);
      auVar4._4_4_ = auVar1._4_4_ + 125.0;
      auVar4._0_4_ = auVar1._0_4_;
      auVar4._8_4_ = auVar1._8_4_;
      auVar1 = vsub_t(auVar3,auVar4);
      uVar6 = vdot_t(auVar1,auVar1);
      uVar11 = vcmp_s(8,uVar6,auVar1._0_4_);
      vrsq_s(uVar6);
      uVar6 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar1,uVar6);
      vscl_t(auVar1,0x40200000);
      *(undefined4 *)(iVar8 + 0xfc) = *(undefined4 *)(param_1 + 0xa8c);
      *(undefined4 *)(iVar8 + 0x100) = *(undefined4 *)(param_1 + 0xa88);
      FUN_0887799c();
      *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
    }
  }
  return uVar9;
}

