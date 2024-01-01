#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e8238(int *param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined (*pauVar6) [12];
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_V1D;
  undefined4 in_V1E;
  undefined4 uVar11;
  
  if (param_1[4] == 0) {
    iVar3 = param_1[5];
    iVar5 = 0;
    if (0 < param_1[9] + -1) {
      iVar4 = 0;
      do {
        pauVar6 = (undefined (*) [12])(*param_1 + iVar4);
        auVar1 = vsub_t(*(undefined (*) [12])(*param_1 + iVar4 + 0x10),*pauVar6);
        uVar9 = vdot_t(auVar1,auVar1);
        fVar10 = (float)vsqrt_s(uVar9);
        if (0.0 < fVar10) {
          if ((float)param_1[5] < fVar10) {
            uVar9 = vrcp_s(fVar10);
            uVar11 = vsub_s(fVar10,iVar3);
            uVar11 = vmul_s(uVar11,0x3cf5c28f);
            uVar11 = vmul_s(uVar11,uVar9);
            auVar2 = vscl_t(auVar1,uVar11);
            uVar9 = vmul_s(uVar9,iVar3);
            auVar1 = vscl_t(auVar1,uVar9);
            auVar1 = vadd_t(*pauVar6,auVar1);
            auVar2 = vsub_t(*(undefined (*) [12])(param_1[1] + iVar4),auVar2);
            iVar8 = *param_1 + iVar4;
            *(int *)(iVar8 + 0x10) = auVar1._0_4_;
            *(int *)(iVar8 + 0x14) = auVar1._4_4_;
            *(int *)(iVar8 + 0x18) = auVar1._8_4_;
            *(undefined4 *)(iVar8 + 0x1c) = in_V1D;
            puVar7 = (undefined4 *)(param_1[1] + iVar4);
            *puVar7 = auVar2._0_4_;
            puVar7[1] = auVar2._4_4_;
            puVar7[2] = auVar2._8_4_;
            puVar7[3] = in_V1E;
            goto LAB_089e8428;
          }
          iVar8 = param_1[9];
        }
        else {
LAB_089e8428:
          iVar8 = param_1[9];
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar5 < iVar8 + -1);
    }
  }
  else {
    iVar5 = 0;
    if (0 < param_1[9] + -1) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        pauVar6 = (undefined (*) [12])(*param_1 + iVar4);
        auVar1 = vsub_t(*(undefined (*) [12])(*param_1 + iVar4 + 0x10),*pauVar6);
        uVar9 = vdot_t(auVar1,auVar1);
        fVar10 = (float)vsqrt_s(uVar9);
        if (0.0 < fVar10) {
          if (*(float *)(param_1[4] + iVar3) < fVar10) {
            uVar9 = vrcp_s(fVar10);
            uVar11 = vsub_s(fVar10,*(undefined4 *)(param_1[4] + iVar3));
            uVar11 = vmul_s(uVar11,0x3cf5c28f);
            uVar11 = vmul_s(uVar11,uVar9);
            auVar2 = vscl_t(auVar1,uVar11);
            uVar9 = vmul_s(uVar9,*(undefined4 *)(param_1[4] + iVar3));
            auVar1 = vscl_t(auVar1,uVar9);
            auVar1 = vadd_t(*pauVar6,auVar1);
            auVar2 = vsub_t(*(undefined (*) [12])(param_1[1] + iVar4),auVar2);
            iVar8 = *param_1 + iVar4;
            *(int *)(iVar8 + 0x10) = auVar1._0_4_;
            *(int *)(iVar8 + 0x14) = auVar1._4_4_;
            *(int *)(iVar8 + 0x18) = auVar1._8_4_;
            *(undefined4 *)(iVar8 + 0x1c) = in_V1D;
            puVar7 = (undefined4 *)(param_1[1] + iVar4);
            *puVar7 = auVar2._0_4_;
            puVar7[1] = auVar2._4_4_;
            puVar7[2] = auVar2._8_4_;
            puVar7[3] = in_V1E;
            goto LAB_089e8330;
          }
          iVar8 = param_1[9];
        }
        else {
LAB_089e8330:
          iVar8 = param_1[9];
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 + 4;
      } while (iVar5 < iVar8 + -1);
    }
  }
  return;
}

