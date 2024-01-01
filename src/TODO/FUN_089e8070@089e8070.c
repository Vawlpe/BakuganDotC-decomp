#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e8070(int *param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [12];
  undefined4 uVar13;
  undefined4 in_V0C;
  int iVar14;
  
  if (*param_1 != 0) {
    if (param_1[10] == 0) {
      iVar6 = param_1[9] + -1;
      iVar7 = iVar6 * 0x10;
      for (; 0 < iVar6; iVar6 = iVar6 + -1) {
        puVar8 = (undefined4 *)(*param_1 + iVar7);
        iVar9 = *param_1 + iVar7;
        uVar4 = *(undefined4 *)(iVar9 + -0xc);
        uVar2 = *(undefined4 *)(iVar9 + -8);
        uVar3 = *(undefined4 *)(iVar9 + -4);
        *puVar8 = *(undefined4 *)(iVar9 + -0x10);
        puVar8[1] = uVar4;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        iVar7 = iVar7 + -0x10;
      }
      if (param_1[3] != 0) {
        puVar8 = (undefined4 *)*param_1;
        puVar10 = (undefined4 *)param_1[3];
        uVar4 = puVar10[1];
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        *puVar8 = *puVar10;
        puVar8[1] = uVar4;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
      }
    }
    else {
      if (param_1[3] == 0) {
        iVar6 = param_1[9];
      }
      else {
        puVar8 = (undefined4 *)*param_1;
        puVar10 = (undefined4 *)param_1[3];
        uVar4 = puVar10[1];
        uVar2 = puVar10[2];
        in_V0C = puVar10[3];
        *puVar8 = *puVar10;
        puVar8[1] = uVar4;
        puVar8[2] = uVar2;
        puVar8[3] = in_V0C;
        iVar6 = param_1[9];
      }
      iVar9 = 0;
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          pauVar11 = (undefined (*) [12])(*param_1 + iVar7);
          uVar4 = *(undefined4 *)pauVar11[1];
          auVar1 = vadd_t(*pauVar11,*(undefined (*) [12])(param_1[1] + iVar7));
          *(int *)*pauVar11 = auVar1._0_4_;
          *(int *)(*pauVar11 + 4) = auVar1._4_4_;
          *(int *)(*pauVar11 + 8) = auVar1._8_4_;
          *(undefined4 *)pauVar11[1] = uVar4;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 0x10;
        } while (iVar9 < param_1[9]);
      }
      if (*(char *)((int)param_1 + 0x2e) == '\0') {
        FUN_089e8238(param_1);
      }
      else {
        FUN_089e8448(param_1);
        if (param_1[3] != 0) {
          puVar8 = (undefined4 *)*param_1;
          puVar10 = (undefined4 *)param_1[3];
          uVar4 = puVar10[1];
          uVar2 = puVar10[2];
          in_V0C = puVar10[3];
          *puVar8 = *puVar10;
          puVar8[1] = uVar4;
          puVar8[2] = uVar2;
          puVar8[3] = in_V0C;
        }
        FUN_089e8238(param_1);
      }
      iVar9 = param_1[7];
      iVar14 = param_1[6];
      iVar7 = 0;
      iVar6 = 0;
      if (0 < param_1[9]) {
        do {
          pauVar11 = (undefined (*) [12])(*param_1 + iVar6);
          uVar4 = *(undefined4 *)*pauVar11;
          uVar2 = *(undefined4 *)(*pauVar11 + 4);
          uVar3 = *(undefined4 *)(*pauVar11 + 8);
          uVar5 = *(undefined4 *)pauVar11[1];
          pauVar12 = (undefined (*) [12])(param_1[1] + iVar6);
          auVar1 = vsub_t(*pauVar11,*(undefined (*) [12])(param_1[2] + iVar6));
          auVar1 = vscl_t(auVar1,0x3dcccccd);
          auVar1 = vadd_t(auVar1,*pauVar12);
          auVar1 = vscl_t(auVar1,iVar9);
          uVar13 = vadd_s(auVar1._4_4_,iVar14);
          *(int *)*pauVar12 = auVar1._0_4_;
          *(undefined4 *)(*pauVar12 + 4) = uVar13;
          *(int *)(*pauVar12 + 8) = auVar1._8_4_;
          *(undefined4 *)pauVar12[1] = in_V0C;
          puVar8 = (undefined4 *)(param_1[2] + iVar6);
          *puVar8 = uVar4;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar5;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar7 < param_1[9]);
      }
    }
  }
  return;
}

