#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089e68d4(float param_1,int *param_2,undefined (*param_3) [12],undefined (*param_4) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined (*pauVar11) [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_50 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  pfVar8 = local_50;
  pfVar10 = local_50;
  fVar12 = 0.0;
  if (param_4 == (undefined (*) [16])0x0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      puVar9 = (undefined4 *)(param_2[1] + iVar6);
      uVar3 = *(undefined4 *)(*param_3 + 4);
      uVar4 = *(undefined4 *)(*param_3 + 8);
      uVar5 = *(undefined4 *)param_3[1];
      *puVar9 = *(undefined4 *)*param_3;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < 8);
  }
  else {
    fVar14 = 0.0;
    iVar7 = 0;
    fVar13 = 0.0;
    iVar6 = 0;
    do {
      auVar1 = vsub_q(*(undefined (*) [16])(*param_2 + iVar6),*param_4);
      fVar15 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      *pfVar8 = fVar15;
      if (fVar13 < fVar15) {
        fVar13 = *pfVar8;
      }
      iVar7 = iVar7 + 1;
      fVar14 = fVar14 + *pfVar8;
      iVar6 = iVar6 + 0x10;
      pfVar8 = pfVar8 + 1;
    } while (iVar7 < 8);
    iVar7 = 0;
    iVar6 = 0;
    do {
      local_18 = (fVar13 * param_1 - *pfVar10) * (20.0 / fVar14);
      if (0.0 < local_18) {
        pauVar11 = (undefined (*) [12])(param_2[1] + iVar6);
        local_1c = local_18;
        local_20 = local_18;
        local_14 = 0;
        auVar2._4_4_ = local_18;
        auVar2._0_4_ = local_18;
        auVar2._8_4_ = local_18;
        auVar2 = vmul_t(*param_3,auVar2);
        local_30 = auVar2._0_4_;
        uStack_2c = auVar2._4_4_;
        uStack_28 = auVar2._8_4_;
        uVar3 = *(undefined4 *)pauVar11[1];
        auVar2 = vadd_t(*pauVar11,auVar2);
        *(int *)*pauVar11 = auVar2._0_4_;
        *(int *)(*pauVar11 + 4) = auVar2._4_4_;
        *(int *)(*pauVar11 + 8) = auVar2._8_4_;
        *(undefined4 *)pauVar11[1] = uVar3;
        fVar12 = local_18 + fVar12;
      }
      iVar7 = iVar7 + 1;
      pfVar10 = pfVar10 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < 8);
  }
  return fVar12;
}

