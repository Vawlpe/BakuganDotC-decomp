#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6b88(int *param_1,int param_2)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined (*pauVar6) [12];
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined (*pauVar11) [12];
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar10 = 0;
  if (0 < param_2) {
    do {
      iVar9 = 0;
      piVar7 = param_1 + 3;
      pbVar8 = &DAT_08aa33e8;
      do {
        bVar1 = pbVar8[1];
        pauVar11 = (undefined (*) [12])(*param_1 + (uint)*pbVar8 * 0x10);
        uVar4 = *(undefined4 *)pauVar11[1];
        pauVar6 = (undefined (*) [12])(*param_1 + (uint)bVar1 * 0x10);
        uVar5 = *(undefined4 *)pauVar6[1];
        uVar14 = vfim_s(0x3800);
        auVar2 = vsub_t(*pauVar11,*pauVar6);
        uVar13 = vdot_t(auVar2,auVar2);
        uVar13 = vsqrt_s(uVar13);
        uVar15 = vsub_s(*piVar7,uVar13);
        uVar14 = vmul_s(uVar15,uVar14);
        uVar13 = vrcp_s(uVar13);
        uVar13 = vmul_s(uVar13,uVar14);
        auVar3 = vscl_t(auVar2,uVar13);
        auVar2 = vadd_t(*pauVar11,auVar3);
        auVar3 = vsub_t(*pauVar6,auVar3);
        *(int *)*pauVar11 = auVar2._0_4_;
        *(int *)(*pauVar11 + 4) = auVar2._4_4_;
        *(int *)(*pauVar11 + 8) = auVar2._8_4_;
        *(undefined4 *)pauVar11[1] = uVar4;
        puVar12 = (undefined4 *)(*param_1 + (uint)bVar1 * 0x10);
        *puVar12 = auVar3._0_4_;
        puVar12[1] = auVar3._4_4_;
        puVar12[2] = auVar3._8_4_;
        puVar12[3] = uVar5;
        iVar9 = iVar9 + 1;
        pbVar8 = pbVar8 + 2;
        piVar7 = piVar7 + 1;
      } while (iVar9 < 0x1c);
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2);
  }
  return;
}

