#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08830a78(int param_1,int param_2)

{
  char cVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  undefined4 *puVar10;
  undefined (*pauVar11) [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 in_V7C;
  undefined4 local_90 [12];
  float local_60;
  float local_5c;
  undefined4 local_50;
  float local_3c;
  
  pauVar9 = (undefined (*) [16])local_90;
  fVar14 = 1.0;
  fVar15 = 1.0;
  iVar8 = param_1 + param_2 * 4;
  if (*(char *)(param_1 + param_2 + 0x2e0) == '\0') {
    fVar13 = *(float *)(iVar8 + 0x2e4) - 0.1570796;
  }
  else {
    fVar13 = *(float *)(iVar8 + 0x2e4) + 0.1570796;
  }
  *(float *)(iVar8 + 0x2e4) = fVar13;
  if (fVar13 < -1.256637) {
    fVar6 = -1.256637;
  }
  else {
    fVar6 = 1.570796;
    if (fVar13 <= 1.570796) {
      fVar6 = fVar13;
    }
  }
  cVar1 = *(char *)(param_1 + param_2 + 0x2f4);
  *(float *)(iVar8 + 0x2e4) = fVar6;
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar8 + 0x2f8) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x308) = 0;
    *(undefined4 *)(iVar8 + 0x318) = 0;
    fVar13 = fVar14;
    fVar6 = fVar15;
  }
  else {
    iVar5 = param_1 + param_2 * 4;
    iVar7 = *(int *)(iVar5 + 0x318);
    *(undefined4 *)(iVar8 + 0x2e4) = 0x3fc90fdb;
    *(int *)(iVar5 + 0x318) = iVar7 + -1;
    if (iVar7 < 1) {
      uVar4 = _DONE_Get_DAT_08AC5874();
      iVar5 = FUN_089c6914(uVar4,0x20012d);
      if ((iVar5 == 0) && (iVar5 = _DONE_NotZero_DAT_08AC5874(), iVar5 != 0)) {
        uVar4 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar4,0x20012d,0,0);
      }
      *(undefined4 *)(iVar8 + 0x318) = 0x1c;
    }
    fVar13 = *(float *)(iVar8 + 0x2f8) + 0.1745329;
    *(float *)(iVar8 + 0x2f8) = fVar13;
    *(float *)(iVar8 + 0x308) = *(float *)(iVar8 + 0x308) + 0.1134464;
    if (3.141593 < fVar13) {
      *(float *)(iVar8 + 0x2f8) = *(float *)(iVar8 + 0x2f8) - 3.141593;
    }
    if (3.141593 < *(float *)(iVar8 + 0x308)) {
      *(float *)(iVar8 + 0x308) = *(float *)(iVar8 + 0x308) - 3.141593;
      uVar4 = *(undefined4 *)(iVar8 + 0x2f8);
    }
    else {
      uVar4 = *(undefined4 *)(iVar8 + 0x2f8);
    }
    uVar16 = vmul_s(uVar4,in_V7C);
    local_60 = (float)vsin_s(uVar16);
    fVar6 = local_60 * 0.5 + 0.7;
    uVar4 = vmul_s(uVar4,in_V7C);
    local_5c = (float)vsin_s(uVar4);
    fVar12 = local_5c * 0.2 + 0.4;
    if (param_2 < 2) {
      fVar13 = fVar12;
      if (param_2 < 0) goto LAB_08830d0c;
    }
    else {
      fVar13 = fVar6;
      fVar6 = fVar12;
      if (3 < param_2) goto LAB_08830d0c;
    }
  }
  fVar14 = fVar13;
  fVar15 = fVar6;
LAB_08830d0c:
  iVar7 = param_1 + param_2 * 0x30;
  puVar10 = (undefined4 *)(iVar7 + 0x220);
  iVar5 = 0;
  pauVar11 = (undefined (*) [16])(iVar7 + 0x160);
  param_2 = param_2 * 0xc;
  do {
    uVar4 = puVar10[1];
    uVar16 = puVar10[2];
    uVar3 = puVar10[3];
    *(undefined4 *)*pauVar9 = *puVar10;
    *(undefined4 *)(*pauVar9 + 4) = uVar4;
    *(undefined4 *)(*pauVar9 + 8) = uVar16;
    *(undefined4 *)(*pauVar9 + 0xc) = uVar3;
    uVar4 = vmul_s(*(undefined4 *)(iVar8 + 0x2e4),in_V7C);
    local_50 = vsin_s(uVar4);
    auVar2 = vsub_q(*pauVar11,*pauVar9);
    auVar2 = vscl_q(auVar2,local_50);
    auVar2 = vadd_q(*pauVar9,auVar2);
    *(int *)*pauVar9 = auVar2._0_4_;
    *(int *)(*pauVar9 + 4) = auVar2._4_4_;
    *(int *)(*pauVar9 + 8) = auVar2._8_4_;
    *(int *)(*pauVar9 + 0xc) = auVar2._12_4_;
    iVar7 = *(int *)(*(int *)(param_1 + 0x14) + param_2 + 0x3c);
    uVar4 = *(undefined4 *)(*pauVar9 + 4);
    uVar16 = *(undefined4 *)(*pauVar9 + 8);
    uVar3 = *(undefined4 *)(*pauVar9 + 0xc);
    *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)*pauVar9;
    *(undefined4 *)(iVar7 + 100) = uVar4;
    *(undefined4 *)(iVar7 + 0x68) = uVar16;
    *(undefined4 *)(iVar7 + 0x6c) = uVar3;
    uVar4 = vmul_s(*(undefined4 *)(iVar8 + 0x308),in_V7C);
    local_3c = (float)vsin_s(uVar4);
    *(float *)(iVar7 + 0xbc) = local_3c * 0.3 + 0.8;
    if (iVar5 != 2) {
      FUN_089f4954(fVar14,fVar15,0,iVar7,0);
    }
    iVar5 = iVar5 + 1;
    pauVar9 = pauVar9 + 1;
    puVar10 = puVar10 + 4;
    pauVar11 = pauVar11 + 1;
    param_2 = param_2 + 4;
  } while (iVar5 < 1);
  return;
}

