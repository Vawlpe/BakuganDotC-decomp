#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08836d5c(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined (*pauVar6) [16];
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  undefined4 uVar10;
  float fVar11;
  
  switch(*(undefined4 *)(param_1 + 0xa1c)) {
  case 0:
    return;
  case 1:
    *(undefined4 *)(param_1 + 0xa60) = 0x41700000;
    *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + 1;
    break;
  case 2:
    break;
  case 3:
    goto LAB_08836e60;
  case 4:
    goto LAB_08836f48;
  case 5:
    goto LAB_088370b0;
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_08836da0_caseD_6;
  case 10:
    goto LAB_08837154;
  default:
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    return;
  }
  fVar11 = *(float *)(param_1 + 0xa60) + -1.0;
  *(float *)(param_1 + 0xa60) = fVar11;
  if (0.0 < fVar11) {
    return;
  }
  *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + 1;
LAB_08836e60:
  *(undefined4 *)(param_1 + 0xa60) = 0;
  *(undefined4 *)(param_1 + 0xa20) = 0;
  iVar7 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 0x238);
  puVar5 = (undefined4 *)(param_1 + 0xa30);
  do {
    *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
    *(undefined4 *)(iVar8 + 0xbc) = 0;
    uVar10 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)(iVar8 + 0x60) = *puVar5;
    *(undefined4 *)(iVar8 + 100) = uVar10;
    *(undefined4 *)(iVar8 + 0x68) = uVar2;
    *(undefined4 *)(iVar8 + 0x6c) = uVar3;
    *(float *)(iVar8 + 100) = *(float *)(iVar8 + 100) + 16.0;
    iVar7 = iVar7 + 1;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + 0x160;
  } while (iVar7 < 3);
  *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + 1;
  if (*(char *)(param_1 + 0xa7c) == '\0') {
LAB_08836f48:
    fVar11 = *(float *)(param_1 + 0xa20);
  }
  else {
    uVar10 = _DONE_Get_DAT_08AAC9E0();
    iVar7 = FUN_0880dba8(uVar10);
    if ((iVar7 == 0xc) || (iVar7 == 3)) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x238);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x23c);
      *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
      goto LAB_08836f48;
    }
    fVar11 = *(float *)(param_1 + 0xa20);
  }
  fVar11 = fVar11 + 0.08726646;
  *(float *)(param_1 + 0xa20) = fVar11;
  if (fVar11 < 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 1.570796;
    if (fVar11 <= 1.570796) {
      fVar4 = fVar11;
    }
  }
  *(float *)(param_1 + 0xa20) = fVar4;
  iVar7 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 0x238);
  pauVar9 = (undefined (*) [16])(param_1 + 0xa30);
  do {
    if (*(char *)(param_1 + 0xa7c) == '\0') {
      if (iVar7 != 2) {
        uVar10 = *(undefined4 *)(param_1 + 0xa20);
        goto LAB_08836fc8;
      }
    }
    else if (iVar7 != 1) {
      uVar10 = *(undefined4 *)(param_1 + 0xa20);
LAB_08836fc8:
      *(undefined4 *)(iVar8 + 0xbc) = uVar10;
      pauVar6 = (undefined (*) [16])(iVar8 + 0x60);
      auVar1 = vsub_q(*pauVar9,*pauVar6);
      auVar1 = vscl_q(auVar1,uVar10);
      auVar1 = vadd_q(*pauVar6,auVar1);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(iVar8 + 100) = auVar1._4_4_;
      *(int *)(iVar8 + 0x68) = auVar1._8_4_;
      *(int *)(iVar8 + 0x6c) = auVar1._12_4_;
    }
    iVar7 = iVar7 + 1;
    pauVar9 = pauVar9 + 1;
    iVar8 = iVar8 + 0x160;
  } while (iVar7 < 3);
  if (0.95 <= *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x238) + 0xbc)) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 0x238);
    iVar7 = 0;
    puVar5 = (undefined4 *)(param_1 + 0xa30);
    do {
      if (*(char *)(param_1 + 0xa7c) == '\0') {
        if (iVar7 != 2) {
          *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
          goto LAB_08837068;
        }
      }
      else if (iVar7 != 1) {
        *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
LAB_08837068:
        uVar10 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(iVar8 + 0x60) = *puVar5;
        *(undefined4 *)(iVar8 + 100) = uVar10;
        *(undefined4 *)(iVar8 + 0x68) = uVar2;
        *(undefined4 *)(iVar8 + 0x6c) = uVar3;
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 4;
      iVar8 = iVar8 + 0x160;
    } while (iVar7 < 3);
    *(undefined4 *)(param_1 + 0xa60) = 0x42d20000;
    *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + 1;
LAB_088370b0:
    fVar11 = *(float *)(param_1 + 0xa60) + -1.0;
    *(float *)(param_1 + 0xa60) = fVar11;
    if (fVar11 <= 0.0) {
      *(undefined4 *)(param_1 + 0xa60) = 0x42200000;
      *(undefined4 *)(param_1 + 0xa20) = 0x3fc90fdb;
      *(undefined4 *)(param_1 + 0xa1c) = 10;
LAB_08837154:
      fVar11 = *(float *)(param_1 + 0xa20) + -0.2617994;
      *(float *)(param_1 + 0xa20) = fVar11;
      if (fVar11 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = 1.570796;
        if (fVar11 <= 1.570796) {
          fVar4 = fVar11;
        }
      }
      *(float *)(param_1 + 0xa20) = fVar4;
      iVar7 = 0;
      iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 0x238);
      puVar5 = (undefined4 *)(param_1 + 0xa30);
      do {
        if (*(char *)(param_1 + 0xa7c) == '\0') {
          if (iVar7 != 2) goto LAB_088371d0;
        }
        else if (iVar7 != 1) {
LAB_088371d0:
          uVar10 = *puVar5;
          fVar11 = (float)puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          fVar4 = *(float *)(param_1 + 0xa20);
          *(float *)(iVar8 + 0xbc) = fVar4;
          pauVar9 = (undefined (*) [16])(iVar8 + 0x60);
          auVar1._4_4_ = fVar11 - 16.0;
          auVar1._0_4_ = uVar10;
          auVar1._8_4_ = uVar2;
          auVar1._12_4_ = uVar3;
          auVar1 = vsub_q(auVar1,*pauVar9);
          auVar1 = vscl_q(auVar1,1.0 - fVar4);
          auVar1 = vadd_q(*pauVar9,auVar1);
          *(int *)*pauVar9 = auVar1._0_4_;
          *(int *)(iVar8 + 100) = auVar1._4_4_;
          *(int *)(iVar8 + 0x68) = auVar1._8_4_;
          *(int *)(iVar8 + 0x6c) = auVar1._12_4_;
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 4;
        iVar8 = iVar8 + 0x160;
      } while (iVar7 < 3);
      if (*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x238) + 0xbc) <= 0.05) {
        iVar8 = 0;
        iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x238);
        do {
          *(undefined4 *)(iVar7 + 0xbc) = 0;
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x160;
        } while (iVar8 < 3);
        *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + 1;
switchD_08836da0_caseD_6:
        *(undefined4 *)(param_1 + 0xa1c) = 0;
      }
    }
  }
  return;
}

