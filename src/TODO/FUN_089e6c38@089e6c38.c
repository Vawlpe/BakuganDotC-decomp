#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6c38(int *param_1,int param_2)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auVar6 [12];
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined (*pauVar10) [12];
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined (*pauVar15) [12];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  iVar8 = 0;
  if (0 < param_2) {
    do {
      iVar7 = 0;
      piVar9 = param_1 + 3;
      pbVar14 = &DAT_08aa33e8;
      do {
        bVar1 = pbVar14[1];
        iVar12 = (uint)*pbVar14 * 0x10;
        pauVar10 = (undefined (*) [12])(*param_1 + iVar12);
        uVar16 = *(undefined4 *)*pauVar10;
        uVar17 = *(undefined4 *)(*pauVar10 + 4);
        uVar18 = *(undefined4 *)(*pauVar10 + 8);
        uVar4 = *(undefined4 *)pauVar10[1];
        puVar11 = (undefined4 *)((uint)bVar1 * 0x10);
        pauVar15 = (undefined (*) [12])(*param_1 + (int)puVar11);
        uVar19 = *(undefined4 *)*pauVar15;
        uVar20 = *(undefined4 *)(*pauVar15 + 4);
        uVar21 = *(undefined4 *)(*pauVar15 + 8);
        uVar5 = *(undefined4 *)pauVar15[1];
        uVar23 = vfim_s(0x3800);
        auVar2 = vsub_t(*pauVar10,*pauVar15);
        uVar22 = vdot_t(auVar2,auVar2);
        uVar22 = vsqrt_s(uVar22);
        uVar24 = vsub_s(*piVar9,uVar22);
        uVar23 = vmul_s(uVar24,uVar23);
        uVar22 = vrcp_s(uVar22);
        uVar22 = vmul_s(uVar22,uVar23);
        auVar2 = vscl_t(auVar2,uVar22);
        if (*(char *)((int)param_1 + *pbVar14 + 0x7c) == '\0') goto code_r0x089e6cb4;
        while (*(char *)((int)param_1 + bVar1 + 0x7c) == '\0') {
          auVar3._8_4_ = uVar21;
          auVar3._4_4_ = uVar20;
          auVar3._0_4_ = uVar19;
          auVar3 = vsub_t(auVar3,auVar2);
          uVar19 = auVar3._0_4_;
          uVar20 = auVar3._4_4_;
          uVar21 = auVar3._8_4_;
          iVar12 = *param_1;
          puVar11 = (undefined4 *)(iVar12 + (int)puVar11);
          *puVar11 = uVar19;
          puVar11[1] = uVar20;
          puVar11[2] = uVar21;
          puVar11[3] = uVar5;
          iVar7 = iVar7 + 1;
code_r0x089e6cb4:
          auVar6._8_4_ = uVar18;
          auVar6._4_4_ = uVar17;
          auVar6._0_4_ = uVar16;
          auVar3 = vadd_t(auVar6,auVar2);
          uVar16 = auVar3._0_4_;
          uVar17 = auVar3._4_4_;
          uVar18 = auVar3._8_4_;
          puVar13 = (undefined4 *)(*param_1 + iVar12);
          *puVar13 = uVar16;
          puVar13[1] = uVar17;
          puVar13[2] = uVar18;
          puVar13[3] = uVar4;
        }
        iVar7 = iVar7 + 1;
        pbVar14 = pbVar14 + 2;
        piVar9 = piVar9 + 1;
      } while (iVar7 < 0x1c);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
  }
  return;
}

