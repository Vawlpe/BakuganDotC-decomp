#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f94d0(undefined2 *param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [64];
  undefined auVar10 [12];
  undefined auVar11 [36];
  undefined auVar12 [64];
  bool bVar13;
  int iVar14;
  undefined (*pauVar15) [12];
  undefined (**ppauVar16) [12];
  undefined (*pauVar17) [12];
  undefined (*pauVar18) [16];
  int iVar19;
  int iVar20;
  int iVar21;
  undefined (**local_44) [12];
  int local_40;
  undefined2 local_3c;
  
  iVar14 = DAT_08abf740;
  pauVar15 = (undefined (*) [12])
             (**(code **)(*(int *)(param_1 + 2) + 0x14))
                       ((int)param_1 + (int)*(short *)(*(int *)(param_1 + 2) + 0x10));
  local_3c = 0xffff;
  iVar19 = 0;
  iVar21 = 0;
  local_40 = 5;
  if (0 < *(int *)(*(int *)(iVar14 + 0xc) + 8)) {
    local_44 = (undefined (**) [12])&DAT_08b00ba8;
    iVar20 = 0;
    do {
      if ((iVar19 < 0) || ((*(int **)(iVar14 + 0xc))[2] <= iVar19)) {
        memset_jak((undefined *)&DAT_08b00ba8,0,4);
        ppauVar16 = local_44;
      }
      else {
        ppauVar16 = (undefined (**) [12])(**(int **)(iVar14 + 0xc) + iVar20);
      }
      pauVar17 = *ppauVar16;
      auVar1 = vsub_t(*pauVar15,*pauVar17);
      pauVar18 = (undefined (*) [16])(pauVar17[1] + 4);
      vpfxs(3,2,0x11,0x10);
      auVar2 = vmov_q(*pauVar18);
      vpfxs(0x12,3,0,0x11);
      auVar3 = vmov_q(*pauVar18);
      vpfxs(1,0x10,3,0x12);
      auVar4 = vmov_q(*pauVar18);
      vpfxs(3,2,0x11,0);
      auVar5 = vmov_q(*pauVar18);
      vpfxs(0x12,3,0,1);
      auVar6 = vmov_q(*pauVar18);
      vpfxs(1,0x10,3,2);
      auVar7 = vmov_q(*pauVar18);
      vpfxs(0x10,0x11,0x12,3);
      auVar8 = vmov_q(*pauVar18);
      auVar9._48_16_ = auVar8;
      auVar9._44_4_ = auVar7._12_4_;
      auVar9._40_4_ = auVar7._8_4_;
      auVar9._36_4_ = auVar7._4_4_;
      auVar9._32_4_ = auVar7._0_4_;
      auVar9._28_4_ = auVar6._12_4_;
      auVar9._24_4_ = auVar6._8_4_;
      auVar9._20_4_ = auVar6._4_4_;
      auVar9._16_4_ = auVar6._0_4_;
      auVar9._12_4_ = auVar5._12_4_;
      auVar9._8_4_ = auVar5._8_4_;
      auVar9._4_4_ = auVar5._4_4_;
      auVar9._0_4_ = auVar5._0_4_;
      auVar12._48_16_ = *pauVar18;
      auVar12._44_4_ = auVar4._12_4_;
      auVar12._40_4_ = auVar4._8_4_;
      auVar12._36_4_ = auVar4._4_4_;
      auVar12._32_4_ = auVar4._0_4_;
      auVar12._28_4_ = auVar3._12_4_;
      auVar12._24_4_ = auVar3._8_4_;
      auVar12._20_4_ = auVar3._4_4_;
      auVar12._16_4_ = auVar3._0_4_;
      auVar12._12_4_ = auVar2._12_4_;
      auVar12._8_4_ = auVar2._8_4_;
      auVar12._4_4_ = auVar2._4_4_;
      auVar12._0_4_ = auVar2._0_4_;
      auVar9 = vmmul_q(auVar9,auVar12);
      vidt_q();
      auVar2 = vidt_q();
      vzero_t();
      auVar11._32_4_ = auVar9._40_4_;
      auVar11._28_4_ = auVar9._24_4_;
      auVar11._24_4_ = auVar9._8_4_;
      auVar11._20_4_ = auVar9._36_4_;
      auVar11._16_4_ = auVar9._20_4_;
      auVar11._12_4_ = auVar9._4_4_;
      auVar11._8_4_ = auVar9._32_4_;
      auVar11._4_4_ = auVar9._16_4_;
      auVar11._0_4_ = auVar9._0_4_;
      auVar10 = vtfm3_t(auVar11,auVar2._0_12_);
      vneg_t(auVar10);
      auVar2._12_4_ = auVar9._20_4_;
      auVar2._8_4_ = auVar9._4_4_;
      auVar3._12_4_ = *(undefined4 *)pauVar15[1];
      auVar3._0_12_ = auVar1;
      auVar2._4_4_ = auVar9._16_4_;
      auVar2._0_4_ = auVar9._0_4_;
      auVar2 = vtfm4_q(auVar2,auVar3);
      if (DAT_08b00944 == 0) {
        DAT_08b00944 = 1;
        DAT_08b00940 = 0;
      }
      if (DAT_08b0094c == 0) {
        DAT_08b0094c = 1;
        DAT_08b00948 = 0;
      }
      bVar13 = false;
      if (auVar2._0_4_ < *(float *)pauVar17[4]) {
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        if (DAT_08b0094c == 0) {
          DAT_08b0094c = 1;
          DAT_08b00948 = 0;
        }
        bVar13 = false;
        if (*(float *)(pauVar17[2] + 8) < auVar2._0_4_) {
          if (DAT_08b00944 == 0) {
            DAT_08b00944 = 1;
            DAT_08b00940 = 0;
          }
          if (DAT_08b0094c == 0) {
            DAT_08b0094c = 1;
            DAT_08b00948 = 0;
          }
          if (auVar2._4_4_ < *(float *)(pauVar17[4] + 4)) {
            if (DAT_08b00944 == 0) {
              DAT_08b00944 = 1;
              DAT_08b00940 = 0;
            }
            if (DAT_08b0094c == 0) {
              DAT_08b0094c = 1;
              DAT_08b00948 = 0;
            }
            bVar13 = false;
            if (*(float *)pauVar17[3] < auVar2._4_4_) {
              if (DAT_08b00944 == 0) {
                DAT_08b00944 = 1;
                DAT_08b00940 = 0;
              }
              if (DAT_08b0094c == 0) {
                DAT_08b0094c = 1;
                DAT_08b00948 = 0;
              }
              if (auVar2._8_4_ < *(float *)(pauVar17[4] + 8)) {
                if (DAT_08b00944 == 0) {
                  DAT_08b00944 = 1;
                  DAT_08b00940 = 0;
                }
                if (DAT_08b0094c == 0) {
                  DAT_08b0094c = 1;
                  DAT_08b00948 = 0;
                }
                bVar13 = false;
                if (*(float *)(pauVar17[3] + 4) < auVar2._8_4_) {
                  bVar13 = true;
                }
              }
              else {
                bVar13 = false;
              }
            }
          }
          else {
            bVar13 = false;
          }
        }
      }
      if ((bVar13) && (*(int *)(pauVar17[5] + 4) < local_40)) {
        local_40 = *(int *)(pauVar17[5] + 4);
        local_3c = (undefined2)iVar21;
      }
      iVar19 = iVar19 + 1;
      iVar20 = iVar20 + 4;
      iVar21 = (iVar21 + 1) * 0x10000 >> 0x10;
    } while (iVar19 < *(int *)(*(int *)(iVar14 + 0xc) + 8));
  }
  *param_1 = local_3c;
  return;
}

