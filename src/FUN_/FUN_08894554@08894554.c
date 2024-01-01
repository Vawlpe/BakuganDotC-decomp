#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08894554(int param_1,uint *param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  short sVar9;
  int iVar10;
  uint uVar11;
  undefined (*pauVar12) [12];
  int iVar13;
  undefined (*pauVar14) [16];
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar18;
  float local_e0;
  float local_dc [3];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined local_c0 [4];
  undefined4 local_bc;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  local_e0 = 0.0;
  local_dc[0] = 1000.0;
  sVar9 = 0;
  if ((*(char *)(param_2 + 3) == '\0') &&
     (fVar15 = (float)param_2[2], param_2[2] = (uint)(fVar15 + 0.03333334),
     (float)param_2[1] <= fVar15 + 0.03333334)) {
    param_2[2] = param_2[1];
    *(undefined *)(param_2 + 3) = 1;
  }
  *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x4000;
  uVar11 = *param_2;
  if (4 < uVar11) {
    return;
  }
  if (uVar11 == 1) {
LAB_0889473c:
    iVar13 = 0;
    iVar10 = FUN_0888f4d8(param_1);
    if ((iVar10 != 0) && (*(int *)(param_1 + 0x970) != 0)) {
      auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x1a0) + 0x20),
                      *(undefined (*) [16])(*(int *)(param_1 + 0x970) + 0x20));
      uVar16 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar15 = (float)vsqrt_s(uVar16);
      if (2000.0 < fVar15) {
        fVar15 = INFINITY;
        uVar11 = 0;
        iVar10 = 0;
        iVar13 = *(int *)(param_1 + 0x1a0);
        while( true ) {
          auVar1 = vsub_q(*(undefined (*) [16])(iVar13 + 0x20),
                          *(undefined (*) [16])(&DAT_08abd0d0 + uVar11 * 4));
          uVar16 = vdot_t(auVar1._0_12_,auVar1._0_12_);
          fVar17 = (float)vsqrt_s(uVar16);
          if ((500.0 < fVar17) && (fVar17 < fVar15)) {
            iVar10 = (int)(char)uVar11;
            fVar15 = fVar17;
          }
          uVar11 = uVar11 + 1 & 0xff;
          if (2 < uVar11) break;
          iVar13 = *(int *)(param_1 + 0x1a0);
        }
        uVar16 = (&DAT_08abd0d4)[iVar10 * 4];
        uVar18 = (&DAT_08abd0d8)[iVar10 * 4];
        uVar3 = (&DAT_08abd0dc)[iVar10 * 4];
        *(undefined4 *)*(undefined (*) [16])(param_1 + 0x9c0) = (&DAT_08abd0d0)[iVar10 * 4];
        *(undefined4 *)(param_1 + 0x9c4) = uVar16;
        *(undefined4 *)(param_1 + 0x9c8) = uVar18;
        *(undefined4 *)(param_1 + 0x9cc) = uVar3;
        auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x1a0) + 0x20),
                        *(undefined (*) [16])(param_1 + 0x9c0));
        uVar16 = vdot_t(auVar1._0_12_,auVar1._0_12_);
        local_dc[0] = (float)vsqrt_s(uVar16);
        iVar13 = 1;
      }
    }
    if (iVar13 == 0) {
      FUN_0888f510(param_1,&local_e0,local_dc);
      pauVar12 = (undefined (*) [12])(param_1 + 0x9c0);
      if (3.141593 < local_e0) {
        local_e0 = local_e0 - 6.283185;
      }
      else if (local_e0 <= -3.141593) {
        local_e0 = local_e0 + 6.283185;
      }
      *(undefined4 *)*pauVar12 = in_V72;
      *(undefined4 *)(param_1 + 0x9c4) = in_V76;
      *(undefined4 *)(param_1 + 0x9c8) = in_V7A;
      *(undefined4 *)(param_1 + 0x9cc) = in_V7E;
      uVar16 = vmul_s(local_e0,in_V7C);
      auVar1 = vrot_q(uVar16,1,0,2,0);
      auVar2 = vscl_t(auVar1._0_12_,local_dc[0]);
      *(int *)*pauVar12 = auVar2._0_4_;
      *(int *)(param_1 + 0x9c4) = auVar2._4_4_;
      *(int *)(param_1 + 0x9c8) = auVar2._8_4_;
      *(int *)(param_1 + 0x9cc) = auVar1._12_4_;
      uVar16 = *(undefined4 *)(param_1 + 0x9cc);
      auVar2 = vadd_t(*pauVar12,*(undefined (*) [12])(*(int *)(param_1 + 0x1a0) + 0x20));
      *(int *)*pauVar12 = auVar2._0_4_;
      *(int *)(param_1 + 0x9c4) = auVar2._4_4_;
      *(int *)(param_1 + 0x9c8) = auVar2._8_4_;
      *(undefined4 *)(param_1 + 0x9cc) = uVar16;
    }
    param_2[5] = (int)local_dc[0];
    param_2[6] = *(uint *)(param_1 + 0x9a0);
    *(undefined4 *)(param_1 + 0xa20) = 0;
    *param_2 = 2;
    return;
  }
  if (uVar11 == 2) {
    pauVar14 = (undefined (*) [16])(param_1 + 0x9c0);
    local_b0 = *(float *)*pauVar14;
    uStack_ac = *(undefined4 *)(param_1 + 0x9c4);
    local_a8 = *(float *)(param_1 + 0x9c8);
    uStack_a4 = *(undefined4 *)(param_1 + 0x9cc);
    fVar15 = (float)atan2f(local_a8 - *(float *)(*(int *)(param_1 + 0x1a0) + 0x28),
                           local_b0 - *(float *)(*(int *)(param_1 + 0x1a0) + 0x20));
    pauVar12 = (undefined (*) [12])local_c0;
    if (3.141593 < fVar15) {
      fVar15 = fVar15 - 6.283185;
    }
    else if (fVar15 <= -3.141593) {
      fVar15 = fVar15 + 6.283185;
    }
    sVar9 = FUN_0888f728(fVar15,param_1);
    auVar2 = vsub_t(*(undefined (*) [12])*pauVar14,
                    *(undefined (*) [12])(*(int *)(param_1 + 0x1a0) + 0x20));
    uVar11 = auVar2._0_4_;
    uVar16 = auVar2._8_4_;
    auVar7._4_4_ = 0;
    auVar7._0_4_ = uVar11;
    auVar7._8_4_ = uVar16;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar11;
    auVar6._8_4_ = uVar16;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = uVar11;
    auVar2._8_4_ = uVar16;
    uVar16 = vdot_t(auVar2,auVar6);
    uVar18 = vcmp_s(8,uVar16,uVar11);
    vrsq_s(uVar16);
    uVar16 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar7,uVar16);
    local_d0 = auVar2._0_4_;
    local_cc = auVar2._4_4_;
    uStack_c8 = auVar2._8_4_;
    iVar10 = *(int *)(param_1 + 0x1a0);
    uVar16 = *(undefined4 *)(iVar10 + 0x84);
    uVar18 = *(undefined4 *)(iVar10 + 0x88);
    uVar3 = *(undefined4 *)(iVar10 + 0x8c);
    *(undefined4 *)*pauVar12 = *(undefined4 *)(iVar10 + 0x80);
    *(undefined4 *)(*pauVar12 + 4) = uVar16;
    *(undefined4 *)(*pauVar12 + 8) = uVar18;
    *(undefined4 *)pauVar12[1] = uVar3;
    local_bc = 0;
    uVar16 = vdot_t(*pauVar12,*pauVar12);
    uVar18 = vcmp_s(8,uVar16,*(undefined4 *)*pauVar12);
    vrsq_s(uVar16);
    uVar16 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(*pauVar12,uVar16);
    *(int *)*pauVar12 = auVar2._0_4_;
    *(int *)(*pauVar12 + 4) = auVar2._4_4_;
    *(int *)(*pauVar12 + 8) = auVar2._8_4_;
    *(undefined4 *)pauVar12[1] = in_V7D;
    auVar8._4_4_ = local_cc;
    auVar8._0_4_ = local_d0;
    auVar8._8_4_ = uStack_c8;
    fVar15 = (float)vdot_t(auVar8,*pauVar12);
    if (0.85 <= fVar15) {
      uVar16 = vdot_t(*pauVar12,*pauVar12);
      uVar18 = vcmp_s(8,uVar16,*(undefined4 *)*pauVar12);
      vrsq_s(uVar16);
      uVar16 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
      uVar16 = vmul_s(uVar16,*(undefined4 *)(param_1 + 0xa18));
      auVar2 = vscl_t(*pauVar12,uVar16);
      *(int *)*pauVar12 = auVar2._0_4_;
      *(int *)(*pauVar12 + 4) = auVar2._4_4_;
      *(int *)(*pauVar12 + 8) = auVar2._8_4_;
      *(undefined4 *)pauVar12[1] = in_V7D;
      iVar10 = *(int *)(param_1 + 0x1a0);
      local_a0 = *(undefined4 *)(iVar10 + 0x20);
      uStack_9c = *(undefined4 *)(iVar10 + 0x24);
      uStack_98 = *(undefined4 *)(iVar10 + 0x28);
      uStack_94 = *(undefined4 *)(iVar10 + 0x2c);
      local_90 = *(undefined4 *)*pauVar12;
      uStack_8c = *(undefined4 *)(*pauVar12 + 4);
      uStack_88 = *(undefined4 *)(*pauVar12 + 8);
      uStack_84 = *(undefined4 *)pauVar12[1];
      iVar10 = FUN_0888ec9c(param_1,&local_a0,&local_90,0);
      if (iVar10 != 0) {
        *(undefined *)((int)param_2 + 0x1d) = 1;
        *param_2 = 4;
        return;
      }
      iVar10 = *(int *)(param_1 + 0x1a0);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x1a0);
    }
    auVar1 = vsub_q(*(undefined (*) [16])(iVar10 + 0x20),*pauVar14);
    uVar16 = vdot_t(auVar1._0_12_,auVar1._0_12_);
    fVar15 = (float)vsqrt_s(uVar16);
    if (fVar15 <= 30.0) {
      *param_2 = 4;
      return;
    }
  }
  else if (uVar11 != 3) {
    if (uVar11 != 4) {
      iVar10 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,0);
      if (iVar10 == 0) {
        *(undefined4 *)(param_1 + 0x1cc) = 0;
      }
      else {
        iVar13 = FUN_0888efc8(param_1);
        if ((iVar13 != 0) && (iVar10 == 3)) {
          *(undefined *)((int)param_2 + 0x1d) = 1;
          *param_2 = 4;
        }
        *(undefined4 *)(param_1 + 0x1cc) = 0;
      }
      *(undefined4 *)(param_1 + 0x23c) = 0;
      bVar5 = false;
      if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x400000) == 0) {
        bVar4 = false;
        if ((*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 8) ||
           (*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) == 10)) {
          bVar4 = true;
        }
        if (((!bVar4) && ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x16c) & 0xc00) == 0)) &&
           ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x100) == 0)) {
          bVar5 = true;
        }
      }
      if ((!bVar5) && (*(int *)(*(int *)(param_1 + 0x1a0) + 0x140) != 0)) {
        return;
      }
      *param_2 = 1;
      goto LAB_0889473c;
    }
    goto LAB_08894bdc;
  }
  if (*(float *)(param_1 + 0x9a0) - (float)param_2[6] < (float)param_2[5]) {
    FUN_0888f354(param_1,(int)sVar9,0);
    fVar15 = *(float *)(param_1 + 0xa20) + 1.0;
    uVar16 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 8);
    *(float *)(param_1 + 0xa20) = fVar15;
    if (fVar15 * 0.03333334 < 1.0) {
      return;
    }
    iVar10 = FUN_08892f18(uVar16,param_1);
    if (iVar10 == 0) {
      return;
    }
    *param_2 = 4;
  }
LAB_08894bdc:
  iVar10 = FUN_0888f4d8(param_1);
  if (iVar10 != 0) {
    *(undefined2 *)(param_1 + 0xa26) = 0x1e;
  }
  *(undefined *)(param_2 + 7) = 1;
  return;
}

