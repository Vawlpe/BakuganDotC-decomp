#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e628c(int param_1)

{
  bool bVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [16];
  float fVar13;
  float fVar14;
  undefined4 local_60;
  float local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar7 = FUN_088be274();
  if ((*(int *)(iVar7 + 0x61c) == 5) || (bVar6 = false, *(int *)(iVar7 + 0x61c) == 0x1e)) {
    bVar6 = true;
  }
  if (bVar6) {
    return 0;
  }
  iVar7 = 0;
  bVar6 = false;
  if ((0x50 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x54)) {
    bVar6 = true;
  }
  iVar8 = FUN_088e1948();
  iVar9 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar9 != 0) {
    uVar10 = DONE_Get_DAT_08AAC9E0();
    iVar9 = FUN_0880d0ac(uVar10,0x2f);
    if (0 < iVar9) {
      iVar8 = 0;
    }
  }
  if (iVar8 == 0) {
    *(undefined *)(param_1 + 0x356) = 0;
    goto LAB_088e6650;
  }
  bVar1 = *(int *)(iVar8 + 0x140) == 10;
  if (*(char *)(param_1 + 0x356) == '\0') {
    iVar9 = FUN_088e1400(iVar8);
    bVar1 = iVar9 != 0 || bVar1;
    if (*(char *)(param_1 + 0x433) != '\0') {
      *(undefined *)(param_1 + 0x433) = 0;
    }
  }
  else {
    iVar9 = FUN_088e1400(iVar8);
    if (((iVar9 != 0) && (FUN_088e1004(iVar8,1), *(int *)(iVar8 + 0x140) != 0xd)) &&
       (*(char *)(param_1 + 0x433) == '\0')) {
      FUN_088e2788(iVar8,0xd,0);
      *(undefined *)(param_1 + 0x433) = 1;
    }
  }
  if (!bVar1) {
    pauVar11 = (undefined (*) [16])(param_1 + 0x20);
    pauVar12 = (undefined (*) [16])(iVar8 + 0x20);
    auVar3 = vsub_q(*pauVar11,*pauVar12);
    uVar10 = vdot_t(auVar3._0_12_,auVar3._0_12_);
    fVar14 = (float)vsqrt_s(uVar10);
    if (fVar14 < *(float *)(param_1 + 0x408)) {
      fVar14 = (float)atan2f(*(float *)(iVar8 + 0x28) - *(float *)(param_1 + 0x28),
                             *(float *)*pauVar12 - *(float *)(param_1 + 0x20));
      fVar13 = (float)FUN_088e5ec0(param_1);
      *(float *)(param_1 + 0x420) = fVar13;
      fVar14 = (fVar14 + 12.56637) - (fVar13 + 6.283185);
      if (3.141593 < fVar14) {
        fVar14 = fVar14 - 6.283185;
      }
      else if (fVar14 <= -3.141593) {
        fVar14 = fVar14 + 6.283185;
      }
      if (3.141593 < fVar14) {
        fVar14 = fVar14 - 6.283185;
      }
      if (fVar14 < -3.141593) {
        fVar14 = fVar14 + 6.283185;
      }
      if (fVar14 < 0.0) {
        fVar14 = -fVar14;
      }
      if (fVar14 < *(float *)(param_1 + 0x40c)) {
        local_60 = *(undefined4 *)*pauVar11;
        uStack_58 = *(undefined4 *)(param_1 + 0x28);
        uStack_54 = *(undefined4 *)(param_1 + 0x2c);
        uStack_44 = *(undefined4 *)(iVar8 + 0x2c);
        auVar2 = vsub_t(*(undefined (*) [12])*pauVar12,*(undefined (*) [12])*pauVar11);
        local_50 = auVar2._0_4_;
        uStack_4c = auVar2._4_4_;
        uStack_48 = auVar2._8_4_;
        if ((*(int *)(DAT_08ac58c4 + 4) == 0xc) || (*(int *)(DAT_08ac58c4 + 4) == 0xe)) {
          local_5c = *(float *)(param_1 + 0x24) + 14.5;
        }
        else {
          local_5c = *(float *)(param_1 + 0x24) + 10.0;
        }
        iVar9 = FUN_0881a954(0x6f800700,&local_60,&local_50);
        if ((iVar9 == 0) && (iVar9 = FUN_088e61c4(param_1), iVar9 == 0)) {
          iVar7 = 2;
        }
      }
    }
  }
  if (!bVar6) {
    if (iVar7 == 2) {
      *(undefined *)(param_1 + 0x356) = 0;
      goto LAB_088e6650;
    }
    if (*(char *)(param_1 + 0x356) == '\0') {
      *(undefined *)(param_1 + 0x356) = 0;
      goto LAB_088e6650;
    }
    switch(*(undefined4 *)(param_1 + 0x3a0)) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
      *(undefined *)(param_1 + 0x356) = 0;
      goto LAB_088e6650;
    case 8:
    case 9:
    case 10:
    default:
      uVar10 = *(undefined4 *)(iVar8 + 0x24);
      uVar4 = *(undefined4 *)(iVar8 + 0x28);
      uVar5 = *(undefined4 *)(iVar8 + 0x2c);
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(iVar8 + 0x20);
      *(undefined4 *)(param_1 + 0x3c4) = uVar10;
      *(undefined4 *)(param_1 + 0x3c8) = uVar4;
      *(undefined4 *)(param_1 + 0x3cc) = uVar5;
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x3a0) = 7;
      *(undefined4 *)(param_1 + 0x3a8) = 0;
    }
  }
  *(undefined *)(param_1 + 0x356) = 0;
LAB_088e6650:
  *(int *)(param_1 + 0x3b8) = iVar7;
  return iVar7;
}

