#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888265c(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined (*pauVar10) [12];
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [16];
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 uStack_8c;
  float local_88;
  undefined4 uStack_84;
  float local_3c;
  float local_38;
  int local_30;
  undefined auVar4 [12];
  
  iVar8 = *(int *)(param_1 + 0xf8);
  if (iVar8 < 1) {
    if (-1 < iVar8) {
      pauVar10 = (undefined (*) [12])(param_1 + 0x60);
      if (*(int *)(param_1 + 0xf4) == 0) {
        pauVar11 = (undefined (*) [12])(param_1 + 0x80);
        FUN_08879fe4(param_1,&local_c0);
        auVar2._4_4_ = uStack_bc;
        auVar2._0_4_ = local_c0;
        auVar2._8_4_ = uStack_b8;
        auVar2 = vsub_t(auVar2,*pauVar10);
        local_d0 = auVar2._0_4_;
        uStack_cc = auVar2._4_4_;
        uStack_c8 = auVar2._8_4_;
        uStack_c4 = uStack_b4;
        *(undefined4 *)*pauVar11 = local_d0;
        *(undefined4 *)(param_1 + 0x84) = uStack_cc;
        *(undefined4 *)(param_1 + 0x88) = uStack_c8;
        *(undefined4 *)(param_1 + 0x8c) = uStack_b4;
        uVar13 = vdot_t(*pauVar11,*pauVar11);
        uVar15 = vcmp_s(8,uVar13,*(undefined4 *)*pauVar11);
        vrsq_s(uVar13);
        uVar13 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(*pauVar11,uVar13);
        *(int *)*pauVar11 = auVar2._0_4_;
        *(int *)(param_1 + 0x84) = auVar2._4_4_;
        *(int *)(param_1 + 0x88) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x8c) = in_V7D;
        auVar2 = vscl_t(*pauVar11,0x42c80000);
        *(int *)(param_1 + 0x70) = auVar2._0_4_;
        *(int *)(param_1 + 0x74) = auVar2._4_4_;
        *(int *)(param_1 + 0x78) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x7c) = in_V7D;
        uStack_b4 = *(undefined4 *)(param_1 + 0x8c);
        auVar2 = vneg_t(*pauVar11);
        local_c0 = auVar2._0_4_;
        uStack_bc = auVar2._4_4_;
        uStack_b8 = auVar2._8_4_;
        FUN_088249f8(DAT_08b00920,0xffffffff,&local_c0,pauVar10);
        *(undefined4 *)(param_1 + 0x104) = 0;
        return;
      }
      if (*(int *)(param_1 + 0xf4) < 0x1f) {
        FUN_088787a0(param_1);
        pauVar11 = (undefined (*) [12])(param_1 + 0x70);
        if ((*(int *)(param_1 + 0xfc) == 0) &&
           (iVar8 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar10,pauVar11,0x9f,3,0,
                                 0x31bf337e), iVar8 != 0)) {
          *(undefined4 *)(param_1 + 0xfc) = 1;
          FUN_08877060(param_1,0x200099,0,0,0);
          FUN_08823f5c(DAT_08b00920,0x1b,&DAT_08aba930);
        }
        pauVar12 = (undefined (*) [16])(param_1 + 0x80);
        if (8 < *(int *)(param_1 + 0xf4)) {
          auVar1._12_4_ = DAT_08b001ac;
          auVar1._8_4_ = DAT_08b001a8;
          auVar1._4_4_ = DAT_08b001a4;
          auVar1._0_4_ = DAT_08b001a0;
          auVar1 = vsub_q(auVar1,*pauVar12);
          auVar1 = vscl_q(auVar1,*(undefined4 *)(param_1 + 0x104));
          auVar1 = vadd_q(*pauVar12,auVar1);
          *(int *)*pauVar12 = auVar1._0_4_;
          *(int *)(param_1 + 0x84) = auVar1._4_4_;
          *(int *)(param_1 + 0x88) = auVar1._8_4_;
          *(int *)(param_1 + 0x8c) = auVar1._12_4_;
          uStack_94 = *(undefined4 *)(param_1 + 0x8c);
          auVar2 = vneg_t(*(undefined (*) [12])*pauVar12);
          local_a0 = auVar2._0_4_;
          uStack_9c = auVar2._4_4_;
          uStack_98 = auVar2._8_4_;
          FUN_088249f8(DAT_08b00920,0xffffffff,&local_a0,pauVar10);
          auVar2 = vscl_t(*(undefined (*) [12])*pauVar12,0x42c80000);
          local_a0 = auVar2._0_4_;
          uStack_9c = auVar2._4_4_;
          uStack_98 = auVar2._8_4_;
          *(undefined4 *)*pauVar11 = local_a0;
          *(undefined4 *)(param_1 + 0x74) = uStack_9c;
          *(undefined4 *)(param_1 + 0x78) = uStack_98;
          *(undefined4 *)(param_1 + 0x7c) = in_V7D;
          *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + 0.004;
        }
        local_f0 = *(undefined4 *)*pauVar10;
        uStack_ec = *(undefined4 *)(param_1 + 100);
        uStack_e8 = *(undefined4 *)(param_1 + 0x68);
        uStack_e4 = *(undefined4 *)(param_1 + 0x6c);
        auVar2 = vscl_t(*pauVar11,0x3dcccccd);
        local_e0 = auVar2._0_4_;
        uStack_dc = auVar2._4_4_;
        uStack_d8 = auVar2._8_4_;
        iVar8 = 0;
        do {
          FUN_08823f5c(DAT_08b00920,0x97,&local_f0);
          auVar5._4_4_ = uStack_ec;
          auVar5._0_4_ = local_f0;
          auVar5._8_4_ = uStack_e8;
          auVar6._4_4_ = uStack_dc;
          auVar6._0_4_ = local_e0;
          auVar6._8_4_ = uStack_d8;
          auVar2 = vadd_t(auVar5,auVar6);
          local_f0 = auVar2._0_4_;
          uStack_ec = auVar2._4_4_;
          uStack_e8 = auVar2._8_4_;
          iVar8 = iVar8 + 1;
        } while (iVar8 < 5);
        uVar13 = *(undefined4 *)(param_1 + 0x6c);
        auVar2 = vadd_t(*pauVar10,*pauVar11);
        *(int *)*pauVar10 = auVar2._0_4_;
        *(int *)(param_1 + 100) = auVar2._4_4_;
        *(int *)(param_1 + 0x68) = auVar2._8_4_;
        *(undefined4 *)(param_1 + 0x6c) = uVar13;
      }
      else {
        FUN_08878e14(DAT_08b00920,pauVar10);
        FUN_08879fe4(param_1,&local_b0);
        *(undefined4 *)(param_1 + 0x80) = local_b0;
        *(undefined4 *)(param_1 + 0x84) = uStack_ac;
        *(undefined4 *)(param_1 + 0x88) = uStack_a8;
        *(undefined4 *)(param_1 + 0x8c) = uStack_a4;
        uVar13 = DAT_08b00920;
        FUN_08879fe4(param_1,&local_b0);
        FUN_08823f5c(uVar13,0x104,&local_b0);
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
    }
  }
  else if (iVar8 < 2) {
    local_90 = *(float *)*(undefined (*) [16])(param_1 + 0x80);
    uStack_8c = *(undefined4 *)(param_1 + 0x84);
    local_88 = *(float *)(param_1 + 0x88);
    uStack_84 = *(undefined4 *)(param_1 + 0x8c);
    uVar13 = FUN_089bedc4(0x40c8f5c3);
    fVar14 = (float)FUN_089bedc4(0x481c4000);
    uVar15 = vmul_s(uVar13,in_V7C);
    local_3c = (float)vsin_s(uVar15);
    local_90 = local_90 + local_3c * SQRT(fVar14);
    uVar13 = vmul_s(uVar13,in_V7C);
    local_38 = (float)vcos_s(uVar13);
    local_88 = local_88 + local_38 * SQRT(fVar14);
    uVar9 = *(uint *)(param_1 + 0xf4);
    if ((int)uVar9 < 0) {
      uVar9 = -(-uVar9 & 3);
    }
    else {
      uVar9 = uVar9 & 3;
    }
    if ((uVar9 == 0) && (iVar8 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4)), iVar8 != 0)) {
      auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x80),*(undefined (*) [16])(iVar8 + 0x20));
      uVar13 = vzero_s();
      auVar3._8_4_ = auVar1._8_4_;
      auVar3._4_4_ = uVar13;
      auVar3._0_4_ = auVar1._0_4_;
      auVar4._8_4_ = auVar1._8_4_;
      auVar4._4_4_ = uVar13;
      auVar4._0_4_ = auVar1._0_4_;
      fVar14 = (float)vdot_t(auVar3,auVar4);
      if (fVar14 < 160000.0) {
        local_90 = *(float *)(iVar8 + 0x20);
        local_88 = *(float *)(iVar8 + 0x28);
      }
    }
    local_30 = 0;
    FUN_089d8634();
    uVar13 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar7 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar13);
    FUN_089d866c();
    iVar8 = local_30;
    if (iVar7 != 0) {
      FUN_08876d00(iVar7,*(undefined4 *)(param_1 + 0xb0),0x7d);
      iVar8 = iVar7;
    }
    FUN_08877904(iVar8,&local_90,&DAT_08b008e0,0);
    if (0x50 < *(int *)(param_1 + 0xf4)) {
      FUN_08876ee0(param_1);
    }
  }
  return;
}

