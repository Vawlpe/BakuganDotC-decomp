#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1667c(int param_1)

{
  ushort uVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [64];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [12];
  undefined auVar19 [12];
  undefined auVar20 [12];
  undefined auVar22 [12];
  undefined auVar24 [12];
  undefined auVar26 [12];
  undefined auVar27 [12];
  undefined auVar28 [12];
  undefined auVar29 [12];
  undefined auVar30 [36];
  undefined auVar31 [64];
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  ushort uVar36;
  undefined4 *puVar37;
  undefined (*pauVar38) [16];
  undefined4 *puVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined auVar21 [12];
  undefined auVar23 [12];
  undefined auVar25 [12];
  
  if (param_1 != 0) {
    iVar41 = *(int *)(param_1 + 4);
    uVar32 = iVar41 + 0xc0;
    pauVar38 = (undefined (*) [16])(iVar41 + 0x60);
    cacheOp(0x1e,iVar41 + 0x120);
    vpfxs(3,2,0x11,0x10);
    auVar6 = vmov_q(*pauVar38);
    vpfxs(0x12,3,0,0x11);
    auVar7 = vmov_q(*pauVar38);
    vpfxs(1,0x10,3,0x12);
    auVar8 = vmov_q(*pauVar38);
    vpfxs(3,0x12,1,0x10);
    auVar9 = vmov_q(*pauVar38);
    vpfxs(2,3,0x10,0x11);
    auVar10 = vmov_q(*pauVar38);
    vpfxs(0x11,0,3,0x12);
    auVar11 = vmov_q(*pauVar38);
    uVar55 = vdot_q(auVar6,auVar9);
    uVar60 = vdot_q(auVar6,auVar10);
    uVar65 = vdot_q(auVar6,auVar11);
    uVar56 = vdot_q(auVar7,auVar9);
    uVar61 = vdot_q(auVar7,auVar10);
    uVar66 = vdot_q(auVar7,auVar11);
    uVar57 = vdot_q(auVar8,auVar9);
    uVar62 = vdot_q(auVar8,auVar10);
    uVar67 = vdot_q(auVar8,auVar11);
    puVar39 = (undefined4 *)(param_1 + 0x80);
    if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
      uVar40 = (uint)*(ushort *)(param_1 + 0x18);
      puVar39 = &DAT_08aa5240;
      uVar42 = (iVar41 + uVar40 * 0xc0) - 0xc0;
      if (uVar40 == 0) {
        return;
      }
      uVar35 = 0;
    }
    else {
      uVar40 = (uint)*(ushort *)(param_1 + 0x18);
      uVar42 = (iVar41 + uVar40 * 0xc0) - 0xc0;
      if (uVar40 == 0) {
        return;
      }
      uVar35 = 0;
    }
    do {
      uVar33 = uVar32;
      if (uVar42 < uVar32) {
        uVar33 = uVar42;
      }
      iVar34 = 0;
      if (-1 < *(short *)(uVar32 - 0x80)) {
        iVar34 = iVar41 + *(short *)(uVar32 - 0x80) * 0xc0;
      }
      uVar36 = 0;
      uVar1 = *(ushort *)(uVar32 - 0x7e);
      if (iVar34 == 0) {
        uVar70 = *puVar39;
        uVar74 = puVar39[1];
        uVar78 = puVar39[2];
        uVar71 = puVar39[4];
        uVar75 = puVar39[5];
        uVar79 = puVar39[6];
        uVar72 = puVar39[8];
        uVar76 = puVar39[9];
        uVar80 = puVar39[10];
        uVar73 = puVar39[0xc];
        uVar77 = puVar39[0xd];
        uVar81 = puVar39[0xe];
        auVar6 = vone_q();
        uVar82 = auVar6._0_4_;
        uVar83 = auVar6._4_4_;
        uVar84 = auVar6._8_4_;
        uVar85 = auVar6._12_4_;
      }
      else {
        uVar36 = *(ushort *)(iVar34 + 0x42);
        uVar70 = *(undefined4 *)(iVar34 + 0x80);
        uVar74 = *(undefined4 *)(iVar34 + 0x84);
        uVar78 = *(undefined4 *)(iVar34 + 0x88);
        uVar82 = *(undefined4 *)(iVar34 + 0x8c);
        uVar71 = *(undefined4 *)(iVar34 + 0x90);
        uVar75 = *(undefined4 *)(iVar34 + 0x94);
        uVar79 = *(undefined4 *)(iVar34 + 0x98);
        uVar83 = *(undefined4 *)(iVar34 + 0x9c);
        uVar72 = *(undefined4 *)(iVar34 + 0xa0);
        uVar76 = *(undefined4 *)(iVar34 + 0xa4);
        uVar80 = *(undefined4 *)(iVar34 + 0xa8);
        uVar84 = *(undefined4 *)(iVar34 + 0xac);
        uVar73 = *(undefined4 *)(iVar34 + 0xb0);
        uVar77 = *(undefined4 *)(iVar34 + 0xb4);
        uVar81 = *(undefined4 *)(iVar34 + 0xb8);
        uVar85 = *(undefined4 *)(iVar34 + 0xbc);
      }
      uVar58 = *(undefined4 *)(uVar32 - 0x70);
      uVar63 = *(undefined4 *)(uVar32 - 0x6c);
      uVar68 = *(undefined4 *)(uVar32 - 0x68);
      uVar59 = *(undefined4 *)(uVar32 - 0x50);
      uVar64 = *(undefined4 *)(uVar32 - 0x4c);
      uVar69 = *(undefined4 *)(uVar32 - 0x48);
      fVar45 = *(float *)(uVar33 + 0x60);
      fVar43 = *(float *)(uVar33 + 100);
      fVar49 = *(float *)(uVar33 + 0x68);
      fVar47 = *(float *)(uVar33 + 0x6c);
      if ((uVar1 & 0x10) != 0) {
        puVar37 = *(undefined4 **)(uVar32 - 0x90);
        uVar55 = *puVar37;
        uVar60 = puVar37[1];
        uVar65 = puVar37[2];
        uVar56 = puVar37[4];
        uVar61 = puVar37[5];
        uVar66 = puVar37[6];
        uVar57 = puVar37[8];
        uVar62 = puVar37[9];
        uVar67 = puVar37[10];
        uVar58 = puVar37[0xc];
        uVar63 = puVar37[0xd];
        uVar68 = puVar37[0xe];
        auVar6 = vone_q();
        uVar59 = auVar6._0_4_;
        uVar64 = auVar6._4_4_;
        uVar69 = auVar6._8_4_;
      }
      cacheOp(0x1e,uVar32 + 0x120);
      auVar6._12_4_ = uVar85;
      auVar6._8_4_ = uVar84;
      auVar6._4_4_ = uVar83;
      auVar6._0_4_ = uVar82;
      auVar6 = vmov_q(auVar6);
      if ((uVar36 & 0x40) != 0) {
        auVar2 = vrcp_t(*(undefined (*) [12])(iVar34 + 0x70));
        auVar3._8_4_ = uVar84;
        auVar3._4_4_ = uVar83;
        auVar3._0_4_ = uVar82;
        auVar2 = vmul_t(auVar3,auVar2);
        uVar82 = auVar2._0_4_;
        uVar83 = auVar2._4_4_;
        uVar84 = auVar2._8_4_;
      }
      auVar4._8_4_ = uVar84;
      auVar4._4_4_ = uVar83;
      auVar4._0_4_ = uVar82;
      auVar2._8_4_ = uVar69;
      auVar2._4_4_ = uVar64;
      auVar2._0_4_ = uVar59;
      auVar2 = vmul_t(auVar4,auVar2);
      uVar86 = auVar2._0_4_;
      uVar88 = auVar2._4_4_;
      uVar90 = auVar2._8_4_;
      auVar7 = vidt_q();
      uVar87 = auVar7._0_4_;
      uVar89 = auVar7._4_4_;
      uVar91 = auVar7._8_4_;
      if ((uVar1 & 1) != 0) {
        auVar5._8_4_ = uVar84;
        auVar5._4_4_ = uVar83;
        auVar5._0_4_ = uVar82;
        auVar2 = vmov_t(auVar5);
        uVar87 = auVar2._0_4_;
        uVar89 = auVar2._4_4_;
        uVar91 = auVar2._8_4_;
        if ((uVar1 & 0x60) == 0) {
          auVar14._8_4_ = uVar69;
          auVar14._4_4_ = uVar64;
          auVar14._0_4_ = uVar59;
          auVar2 = vmov_t(auVar14);
          uVar86 = auVar2._0_4_;
          uVar88 = auVar2._4_4_;
          uVar90 = auVar2._8_4_;
        }
        else {
          auVar2 = vone_t();
          uVar86 = auVar2._0_4_;
          uVar88 = auVar2._4_4_;
          uVar90 = auVar2._8_4_;
          auVar15._8_4_ = uVar84;
          auVar15._4_4_ = uVar83;
          auVar15._0_4_ = uVar82;
          auVar13._8_4_ = uVar69;
          auVar13._4_4_ = uVar64;
          auVar13._0_4_ = uVar59;
          auVar2 = vmul_t(auVar15,auVar13);
          uVar87 = auVar2._0_4_;
          uVar89 = auVar2._4_4_;
          uVar91 = auVar2._8_4_;
        }
      }
      auVar16._8_4_ = uVar68;
      auVar16._4_4_ = uVar63;
      auVar16._0_4_ = uVar58;
      auVar2 = vmul_t(auVar16,auVar6._0_12_);
      uVar59 = auVar2._0_4_;
      uVar64 = auVar2._4_4_;
      uVar69 = auVar2._8_4_;
      auVar17._8_4_ = uVar65;
      auVar17._4_4_ = uVar60;
      auVar17._0_4_ = uVar55;
      auVar3 = vscl_t(auVar17,uVar86);
      auVar18._8_4_ = uVar66;
      auVar18._4_4_ = uVar61;
      auVar18._0_4_ = uVar56;
      auVar4 = vscl_t(auVar18,uVar88);
      auVar19._8_4_ = uVar67;
      auVar19._4_4_ = uVar62;
      auVar19._0_4_ = uVar57;
      auVar5 = vscl_t(auVar19,uVar90);
      auVar8 = vidt_q();
      if ((uVar1 & 0x80) != 0) {
        pauVar38 = *(undefined (**) [16])(uVar32 - 0x88);
        uVar55 = *(undefined4 *)*pauVar38;
        uVar56 = *(undefined4 *)(*pauVar38 + 4);
        uVar57 = *(undefined4 *)(*pauVar38 + 8);
        auVar9 = vmul_q(*pauVar38,auVar6);
        if ((uVar1 & 1) != 0) {
          auVar10._12_4_ = auVar7._12_4_;
          auVar10._8_4_ = uVar91;
          auVar10._4_4_ = uVar89;
          auVar10._0_4_ = uVar87;
          auVar10 = vmul_q(*pauVar38,auVar10);
          uVar55 = auVar10._0_4_;
          uVar56 = auVar10._4_4_;
          uVar57 = auVar10._8_4_;
        }
        auVar30._24_12_ = auVar5;
        auVar30._20_4_ = auVar4._8_4_;
        auVar30._16_4_ = auVar4._4_4_;
        auVar30._12_4_ = auVar4._0_4_;
        auVar30._8_4_ = auVar3._8_4_;
        auVar30._4_4_ = auVar3._4_4_;
        auVar30._0_4_ = auVar3._0_4_;
        auVar29._8_4_ = uVar57;
        auVar29._4_4_ = uVar56;
        auVar29._0_4_ = uVar55;
        auVar13 = vtfm3_t(auVar30,auVar29);
        auVar2 = vadd_t(auVar2,auVar9._0_12_);
        auVar2 = vsub_t(auVar2,auVar13);
        uVar59 = auVar2._0_4_;
        uVar64 = auVar2._4_4_;
        uVar69 = auVar2._8_4_;
      }
      auVar12._60_4_ = auVar8._12_4_;
      auVar12._56_4_ = uVar69;
      auVar12._52_4_ = uVar64;
      auVar12._48_4_ = uVar59;
      auVar12._44_4_ = auVar8._8_4_;
      auVar12._40_4_ = auVar5._8_4_;
      auVar12._36_4_ = auVar5._4_4_;
      auVar12._32_4_ = auVar5._0_4_;
      auVar12._28_4_ = auVar8._4_4_;
      auVar12._24_4_ = auVar4._8_4_;
      auVar12._20_4_ = auVar4._4_4_;
      auVar12._16_4_ = auVar4._0_4_;
      auVar12._12_4_ = auVar8._0_4_;
      auVar12._8_4_ = auVar3._8_4_;
      auVar12._4_4_ = auVar3._4_4_;
      auVar12._0_4_ = auVar3._0_4_;
      auVar31._60_4_ = uVar85;
      auVar31._56_4_ = uVar81;
      auVar31._52_4_ = uVar77;
      auVar31._48_4_ = uVar73;
      auVar31._44_4_ = uVar84;
      auVar31._40_4_ = uVar80;
      auVar31._36_4_ = uVar76;
      auVar31._32_4_ = uVar72;
      auVar31._28_4_ = uVar83;
      auVar31._24_4_ = uVar79;
      auVar31._20_4_ = uVar75;
      auVar31._16_4_ = uVar71;
      auVar31._12_4_ = uVar82;
      auVar31._8_4_ = uVar78;
      auVar31._4_4_ = uVar74;
      auVar31._0_4_ = uVar70;
      auVar12 = vmmul_q(auVar12,auVar31);
      fVar44 = 0.5 - fVar43 * fVar43;
      fVar48 = fVar43 * fVar49 + fVar47 * fVar45;
      fVar52 = fVar49 * fVar45 + fVar47 * fVar43;
      fVar51 = fVar45 * fVar43 + fVar47 * fVar49;
      fVar46 = fVar44 - fVar45 * fVar45;
      fVar44 = fVar44 - fVar49 * fVar49;
      fVar50 = (0.5 - fVar49 * fVar49) - fVar45 * fVar45;
      fVar54 = fVar43 * fVar49 - fVar47 * fVar45;
      fVar53 = fVar49 * fVar45 - fVar47 * fVar43;
      fVar43 = fVar45 * fVar43 - fVar47 * fVar49;
      cacheOp(0x18,uVar32 - 0x40);
      auVar7._12_4_ = auVar7._12_4_;
      auVar7._8_4_ = uVar91;
      auVar7._4_4_ = uVar89;
      auVar7._0_4_ = uVar87;
      auVar7 = vmov_q(auVar7);
      *(int *)(uVar32 - 0x40) = auVar12._0_4_;
      *(int *)(uVar32 - 0x3c) = auVar12._4_4_;
      *(int *)(uVar32 - 0x38) = auVar12._8_4_;
      *(int *)(uVar32 - 0x34) = auVar7._0_4_;
      auVar20._8_4_ = fVar53;
      auVar20._4_4_ = fVar51;
      auVar20._0_4_ = fVar44;
      auVar21._8_4_ = fVar53;
      auVar21._4_4_ = fVar51;
      auVar21._0_4_ = fVar44;
      auVar2 = vadd_t(auVar20,auVar21);
      uVar55 = auVar2._0_4_;
      uVar60 = auVar2._4_4_;
      uVar65 = auVar2._8_4_;
      *(int *)(uVar32 - 0x30) = auVar12._16_4_;
      *(int *)(uVar32 - 0x2c) = auVar12._20_4_;
      *(int *)(uVar32 - 0x28) = auVar12._24_4_;
      *(int *)(uVar32 - 0x24) = auVar7._4_4_;
      auVar22._8_4_ = fVar48;
      auVar22._4_4_ = fVar50;
      auVar22._0_4_ = fVar43;
      auVar23._8_4_ = fVar48;
      auVar23._4_4_ = fVar50;
      auVar23._0_4_ = fVar43;
      auVar2 = vadd_t(auVar22,auVar23);
      uVar56 = auVar2._0_4_;
      uVar61 = auVar2._4_4_;
      uVar66 = auVar2._8_4_;
      auVar24._8_4_ = fVar46;
      auVar24._4_4_ = fVar54;
      auVar24._0_4_ = fVar52;
      auVar25._8_4_ = fVar46;
      auVar25._4_4_ = fVar54;
      auVar25._0_4_ = fVar52;
      auVar2 = vadd_t(auVar24,auVar25);
      uVar57 = auVar2._0_4_;
      uVar62 = auVar2._4_4_;
      uVar67 = auVar2._8_4_;
      *(int *)(uVar32 - 0x20) = auVar12._32_4_;
      *(int *)(uVar32 - 0x1c) = auVar12._36_4_;
      *(int *)(uVar32 - 0x18) = auVar12._40_4_;
      *(int *)(uVar32 - 0x14) = auVar7._8_4_;
      *(int *)(uVar32 - 0x10) = auVar12._48_4_;
      *(int *)(uVar32 - 0xc) = auVar12._52_4_;
      *(int *)(uVar32 - 8) = auVar12._56_4_;
      *(int *)(uVar32 - 4) = auVar7._12_4_;
      if ((uVar1 & 2) != 0) {
        auVar26._8_4_ = uVar78;
        auVar26._4_4_ = uVar74;
        auVar26._0_4_ = uVar70;
        auVar2 = vscl_t(auVar26,auVar6._0_4_);
        auVar27._8_4_ = uVar79;
        auVar27._4_4_ = uVar75;
        auVar27._0_4_ = uVar71;
        auVar3 = vscl_t(auVar27,auVar6._4_4_);
        auVar28._8_4_ = uVar80;
        auVar28._4_4_ = uVar76;
        auVar28._0_4_ = uVar72;
        auVar4 = vscl_t(auVar28,auVar6._8_4_);
        auVar6 = vidt_q();
        *(int *)(iVar34 + 0x80) = auVar2._0_4_;
        *(int *)(iVar34 + 0x84) = auVar2._4_4_;
        *(int *)(iVar34 + 0x88) = auVar2._8_4_;
        *(int *)(iVar34 + 0x8c) = auVar6._0_4_;
        *(int *)(iVar34 + 0x90) = auVar3._0_4_;
        *(int *)(iVar34 + 0x94) = auVar3._4_4_;
        *(int *)(iVar34 + 0x98) = auVar3._8_4_;
        *(int *)(iVar34 + 0x9c) = auVar6._4_4_;
        *(int *)(iVar34 + 0xa0) = auVar4._0_4_;
        *(int *)(iVar34 + 0xa4) = auVar4._4_4_;
        *(int *)(iVar34 + 0xa8) = auVar4._8_4_;
        *(int *)(iVar34 + 0xac) = auVar6._8_4_;
      }
      uVar35 = uVar35 + 1;
      uVar32 = uVar32 + 0xc0;
    } while (uVar40 != uVar35);
  }
  return;
}

