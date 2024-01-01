#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ddbc8(float param_1,float param_2,float param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  ushort uVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 in_V18;
  undefined4 in_V19;
  undefined4 in_V1C;
  undefined4 in_V1D;
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38;
  
  pfVar9 = local_50;
  if (param_5 == param_6) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = (param_1 - param_2) / (param_3 - param_2);
  }
  uVar7 = *(ushort *)(param_4 + 8) & 0xf;
  if ((*(ushort *)(param_4 + 8) & 0xf) == 0) {
    vh2f_p(*(undefined8 *)(param_5 + 2));
  }
  else if (uVar7 == 1) {
    uVar2 = vh2f_p(*(undefined8 *)(param_5 + 2));
    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar3 = vh2f_p(*(undefined8 *)(param_6 + 2));
    auVar1._12_4_ = in_V1D;
    auVar1._8_4_ = in_V19;
    auVar1._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    auVar1._0_4_ = (int)uVar3;
    auVar5._12_4_ = in_V1C;
    auVar5._8_4_ = in_V18;
    auVar5._4_4_ = uVar4;
    auVar5._0_4_ = (int)uVar2;
    auVar1 = vsub_q(auVar1,auVar5);
    auVar1 = vscl_q(auVar1,fVar14);
    auVar6._12_4_ = in_V1C;
    auVar6._8_4_ = in_V18;
    auVar6._4_4_ = uVar4;
    auVar6._0_4_ = (int)uVar2;
    vadd_q(auVar6,auVar1);
  }
  else if (uVar7 == 2) {
    FUN_089dacd0(param_5,param_6);
  }
  else if (uVar7 == 4) {
    FUN_089ddaf0(param_5,param_6);
  }
  else {
    iVar8 = 0;
    if (param_7 != '\0') {
      fVar11 = 1.0;
      fVar12 = 3.0;
      do {
        fVar14 = (float)FUN_089daf94(fVar14,*(undefined2 *)(param_5 + 8));
        fVar10 = (float)FUN_089daf94(*(undefined2 *)(param_6 + 4));
        local_38 = param_3;
        fVar14 = (float)FUN_089dada0(param_2,param_2 + fVar14,param_3 + fVar10,param_3,param_1);
        fVar15 = fVar11 - fVar14;
        fVar17 = fVar15 * fVar15 * fVar14 * fVar12;
        fVar16 = fVar15 * fVar14 * fVar14 * fVar12;
        local_40 = fVar12;
        local_3c = fVar11;
        fVar11 = (float)FUN_089daf94(*(undefined2 *)(param_5 + 2));
        fVar12 = (float)FUN_089daf94(*(undefined2 *)(param_5 + 10));
        fVar10 = (float)FUN_089daf94(*(undefined2 *)(param_6 + 6));
        fVar13 = (float)FUN_089daf94(*(undefined2 *)(param_6 + 2));
        fVar14 = fVar11 * (fVar15 * fVar15 * fVar15 + fVar17) + fVar12 * fVar17 + fVar10 * fVar16 +
                 fVar13 * (fVar14 * fVar14 * fVar14 + fVar16);
        *pfVar9 = fVar14;
        param_5 = param_5 + 10;
        param_6 = param_6 + 10;
        iVar8 = iVar8 + 1;
        pfVar9 = pfVar9 + 1;
        param_3 = local_38;
        fVar11 = local_3c;
        fVar12 = local_40;
      } while (iVar8 < 4);
    }
  }
  return;
}

