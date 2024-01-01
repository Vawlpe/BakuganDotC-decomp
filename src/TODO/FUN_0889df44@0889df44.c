#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889df44(void)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  bool bVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 in_V7E;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_4c;
  undefined4 local_48;
  undefined auVar3 [12];
  
  pfVar11 = (float *)(&PTR_DAT_08abd3e0)[DAT_08abd488];
  if (pfVar11 != (float *)0x0) {
    iVar10 = 0;
    if (((uint)*pfVar11 | (uint)pfVar11[1]) == 0) {
      FUN_0889dcec();
    }
    else {
      bVar4 = true;
      local_4c = pfVar11[1] - *pfVar11;
      fVar16 = *pfVar11;
      pfVar11 = pfVar11 + 2;
      local_48 = 0x3f000000;
      fVar17 = local_4c * 0.008;
      pfVar12 = pfVar11;
      do {
        local_70 = *pfVar12;
        iVar10 = iVar10 + 1;
        local_68 = pfVar12[1];
        pfVar12 = pfVar11 + iVar10 * 2;
        if (((uint)*pfVar12 | (uint)pfVar12[1]) == 0) {
          iVar10 = 0;
          bVar4 = false;
          fVar13 = *pfVar11;
          pfVar12 = pfVar11;
        }
        else {
          fVar13 = *pfVar12;
        }
        fVar14 = pfVar12[1];
        auVar5._4_4_ = fVar16;
        auVar5._0_4_ = local_70;
        auVar5._8_4_ = local_68;
        auVar5._12_4_ = in_V7E;
        auVar1._4_4_ = fVar16;
        auVar1._0_4_ = local_70;
        auVar1._8_4_ = local_68;
        auVar1._12_4_ = in_V7E;
        auVar7._4_4_ = fVar16;
        auVar7._0_4_ = fVar13;
        auVar7._8_4_ = fVar14;
        auVar7._12_4_ = in_V7E;
        auVar1 = vsub_q(auVar7,auVar1);
        auVar1 = vscl_q(auVar1,local_48);
        auVar1 = vadd_q(auVar5,auVar1);
        local_80 = auVar1._0_4_;
        uStack_7c = auVar1._4_4_;
        uStack_78 = auVar1._8_4_;
        local_74 = auVar1._12_4_;
        auVar6._4_4_ = fVar16;
        auVar6._0_4_ = local_70;
        auVar6._8_4_ = local_68;
        auVar6._12_4_ = in_V7E;
        auVar8._4_4_ = fVar16;
        auVar8._0_4_ = fVar13;
        auVar8._8_4_ = fVar14;
        auVar8._12_4_ = in_V7E;
        auVar1 = vsub_q(auVar6,auVar8);
        uVar18 = vzero_s();
        auVar2._8_4_ = auVar1._8_4_;
        auVar2._4_4_ = uVar18;
        auVar2._0_4_ = auVar1._0_4_;
        auVar3._8_4_ = auVar1._8_4_;
        auVar3._4_4_ = uVar18;
        auVar3._0_4_ = auVar1._0_4_;
        uVar18 = vdot_t(auVar2,auVar3);
        fVar19 = (float)vsqrt_s(uVar18);
        fStack_6c = fVar16;
        local_74 = (float)atan2f(local_68 - fVar14,local_70 - fVar13);
        local_74 = -local_74;
        iVar9 = FUN_0889ce8c(fVar19,local_4c,(float)(int)FLOOR(fVar19 * 0.006 + 0.5),&local_80);
        if (64.0 < fVar19 * 0.008) {
          iVar15 = 0x40;
        }
        else {
          iVar15 = (int)(fVar19 * 0.008);
        }
        *(int *)(iVar9 + 0x84) = iVar15;
        if (64.0 < fVar17) {
          iVar15 = 0x40;
        }
        else {
          iVar15 = (int)fVar17;
        }
        *(int *)(iVar9 + 0x88) = iVar15;
      } while (bVar4);
      iVar10 = FUN_089f7720("StopWall");
      *(undefined4 *)(*(int *)(iVar10 + 0xa0) + 0x1c) = 0xbf800000;
      *(undefined4 *)(*(int *)(iVar10 + 0xa0) + 0x18) = 0xbb83126f;
      FUN_089f7c90(*(undefined4 *)(*(int *)(iVar10 + 0xa0) + 0x18),iVar10);
      FUN_089f7c04(*(undefined4 *)(*(int *)(iVar10 + 0xa0) + 0x1c),iVar10);
    }
  }
  return;
}

