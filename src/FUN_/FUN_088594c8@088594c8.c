#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088594c8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined (*pauVar6) [16];
  undefined (*pauVar7) [12];
  undefined (*pauVar8) [12];
  undefined4 uVar9;
  float fVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar11;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_28;
  
  uVar5 = 0;
  iVar3 = FUN_08858fcc();
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x4c1) == '\0')) && (*(char *)(iVar3 + 0x574) == '\0')) {
    iVar4 = *(int *)(param_1 + 0x8c0);
    if (iVar4 < 2) {
      if (iVar4 < 0) {
        uVar5 = 1;
      }
      else {
        pauVar6 = (undefined (*) [16])(iVar3 + 0x20);
        if (iVar4 < 1) {
          auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),*pauVar6);
          uVar9 = vdot_t(auVar2._0_12_,auVar2._0_12_);
          fVar10 = (float)vsqrt_s(uVar9);
          if (*(float *)(param_1 + 0x9f0) <= fVar10) {
            *(undefined4 *)(param_1 + 0x8c0) = 999;
            return 0;
          }
          *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
        }
        FUN_0886271c(param_1,iVar3);
        uVar9 = atan2f(*(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28),
                       *(float *)*pauVar6 - *(float *)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 0x930) = uVar9;
        uVar9 = vmul_s(uVar9,in_V7C);
        auVar2 = vrot_q(uVar9,1,0,2,0);
        uStack_64 = auVar2._12_4_;
        auVar1 = vscl_t(auVar2._0_12_,0x437a0000);
        local_70 = auVar1._0_4_;
        uStack_6c = auVar1._4_4_;
        uStack_68 = auVar1._8_4_;
        pauVar8 = (undefined (*) [12])(param_1 + 0x910);
        auVar1 = vadd_t(auVar1,*(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x20));
        *(int *)*pauVar8 = auVar1._0_4_;
        *(int *)(param_1 + 0x914) = auVar1._4_4_;
        *(int *)(param_1 + 0x918) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x91c) = uStack_64;
        *(float *)(param_1 + 0x914) = *(float *)(param_1 + 0x914) + 250.0;
        iVar4 = FUN_089bffd4();
        pauVar7 = (undefined (*) [12])(param_1 + 0x920);
        if (iVar4 != 0) {
          uVar9 = FUN_089bfff0();
          FUN_089c00c4(uVar9,0x20025a,*(int *)(param_1 + 0x130) + 0xb0,0,1);
        }
        iVar4 = FUN_08824024(DAT_08abd5b0,0x30,pauVar8,&local_70);
        *(undefined (**) [12])(iVar4 + 0x160) = pauVar8;
        uVar9 = *(undefined4 *)(iVar3 + 0x2c);
        auVar1._4_4_ = *(float *)(iVar3 + 0x24) + *(float *)(*(int *)(iVar3 + 0x4bc) + 4);
        auVar1._0_4_ = *(undefined4 *)*pauVar6;
        auVar1._8_4_ = *(undefined4 *)(iVar3 + 0x28);
        auVar1 = vsub_t(auVar1,*pauVar8);
        *(int *)*pauVar7 = auVar1._0_4_;
        *(int *)(param_1 + 0x924) = auVar1._4_4_;
        *(int *)(param_1 + 0x928) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x92c) = uVar9;
        uVar9 = vdot_t(*pauVar7,*pauVar7);
        uVar11 = vcmp_s(8,uVar9,*(undefined4 *)*pauVar7);
        vrsq_s(uVar9);
        uVar9 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(*pauVar7,uVar9);
        *(int *)*pauVar7 = auVar1._0_4_;
        *(int *)(param_1 + 0x924) = auVar1._4_4_;
        *(int *)(param_1 + 0x928) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x92c) = in_V7D;
        auVar1 = vscl_t(*pauVar7,0x40200000);
        *(int *)*pauVar7 = auVar1._0_4_;
        *(int *)(param_1 + 0x924) = auVar1._4_4_;
        *(int *)(param_1 + 0x928) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x92c) = in_V7D;
        *(undefined4 *)(param_1 + 0x8d0) = 0;
        *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
      }
    }
    else {
      if (iVar4 < 3) {
        iVar3 = *(int *)(param_1 + 0x8d0);
        *(int *)(param_1 + 0x8d0) = iVar3 + 1;
        if (iVar3 < 0x3b) {
          return 0;
        }
        *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
      }
      else if (3 < iVar4) {
        return 1;
      }
      local_28 = 0;
      FUN_089d8634();
      uVar9 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x160,0,0);
      FUN_089d816c(uVar9);
      FUN_089d866c();
      iVar3 = local_28;
      if (iVar4 != 0) {
        FUN_08876d00(iVar4,param_1,0x7f);
        iVar3 = iVar4;
      }
      *(undefined4 *)(iVar3 + 0xfc) = *(undefined4 *)(param_1 + 0xa8c);
      *(undefined4 *)(iVar3 + 0x100) = *(undefined4 *)(param_1 + 0xa88);
      FUN_0887799c(iVar3,param_1 + 0x910,param_1 + 0x920,0);
      *(int *)(param_1 + 0x8c0) = *(int *)(param_1 + 0x8c0) + 1;
    }
  }
  return uVar5;
}

