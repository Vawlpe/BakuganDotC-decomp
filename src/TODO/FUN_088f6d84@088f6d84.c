#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_088f6d84(float param_1,float param_2,int param_3,int *param_4,int *param_5,
                      short param_6)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  undefined (**ppauVar11) [12];
  int iVar12;
  float fVar13;
  undefined (*pauVar14) [12];
  int iVar15;
  undefined (*pauVar16) [12];
  undefined (*pauVar17) [12];
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined local_f0 [16];
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined (*local_94) [12];
  int *local_74;
  undefined (**local_70) [12];
  short *local_6c;
  int local_68;
  undefined local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  undefined (*local_4c) [12];
  undefined (*local_48) [12];
  
  local_68 = (int)param_6;
  iVar12 = *(int *)(*(int *)(param_3 + 8) + 4);
  fVar13 = 3.402823e+38;
  local_74 = param_5;
  local_94 = (undefined (*) [12])
             (**(code **)(iVar12 + 0x14))(*(int *)(param_3 + 8) + (int)*(short *)(iVar12 + 0x10));
  local_60 = 0;
  local_64 = 0;
  if (0 < param_5[2]) {
    local_6c = &DAT_08b00fcc;
    local_70 = (undefined (**) [12])&DAT_08b00fd0;
    local_5c = 0;
    pauVar17 = (undefined (*) [12])local_f0;
    do {
      ppauVar11 = local_70;
      if ((local_60 < 0) || (local_74[2] <= local_60)) {
        memset_jak((undefined *)local_70,0,4);
      }
      else {
        ppauVar11 = (undefined (**) [12])(*local_74 + local_5c);
      }
      pauVar16 = *ppauVar11;
      iVar12 = 0;
      iVar15 = 0;
      if (0 < *(int *)(pauVar16[4] + 8)) {
        do {
          psVar9 = local_6c;
          if ((iVar12 < 0) || (*(int *)(pauVar16[4] + 8) <= iVar12)) {
            local_48 = pauVar17;
            memset_jak((undefined *)local_6c,0,2);
            pauVar17 = local_48;
          }
          else {
            psVar9 = (short *)(*(int *)pauVar16[4] + iVar15);
          }
          ppauVar11 = local_70;
          iVar10 = (int)*psVar9;
          if (iVar10 == -1) break;
          if ((iVar10 < 0) || (local_74[2] <= iVar10)) {
            local_48 = pauVar17;
            memset_jak((undefined *)local_70,0,4);
            pauVar17 = local_48;
          }
          else {
            ppauVar11 = (undefined (**) [12])(*local_74 + iVar10 * 4);
          }
          pauVar14 = *ppauVar11;
          if ((*(int *)pauVar14[5] == local_68) || (*(int *)pauVar16[5] == local_68)) {
            auVar1 = vsub_t(*pauVar14,*pauVar16);
            local_e0 = auVar1._0_4_;
            uStack_d8 = auVar1._8_4_;
            uStack_dc = auVar1._4_4_;
            uStack_d4 = *(undefined4 *)pauVar14[1];
            if (DAT_08b00944 == 0) {
              DAT_08b00944 = 1;
              DAT_08b00940 = 0;
            }
            auVar3._4_4_ = 0;
            auVar3._0_4_ = local_e0;
            auVar3._8_4_ = uStack_d8;
            auVar1._4_4_ = 0;
            auVar1._0_4_ = local_e0;
            auVar1._8_4_ = uStack_d8;
            uVar18 = vdot_t(auVar1,auVar3);
            fVar19 = (float)vsqrt_s(uVar18);
            if (0.0 <= fVar19) {
              auVar4._4_4_ = 0;
              auVar4._0_4_ = local_e0;
              auVar4._8_4_ = uStack_d8;
              auVar3 = vscl_t(auVar4,1.0 / fVar19);
              auVar1 = vsub_t(*local_94,*pauVar16);
              uVar2 = auVar1._0_4_;
              uVar18 = auVar1._8_4_;
              local_d0 = uVar2;
              uStack_cc = auVar1._4_4_;
              uStack_c8 = uVar18;
              uStack_c4 = *(undefined4 *)local_94[1];
              if (DAT_08b00944 == 0) {
                DAT_08b00944 = 1;
                DAT_08b00940 = 0;
              }
              auVar5._4_4_ = 0;
              auVar5._0_4_ = uVar2;
              auVar5._8_4_ = uVar18;
              fVar21 = (float)vdot_t(auVar3,auVar5);
              if (-param_1 < fVar21) {
                if (fVar21 < param_2 + fVar19) {
                  *(undefined4 *)*pauVar17 = in_V72;
                  *(undefined4 *)(*pauVar17 + 4) = in_V76;
                  *(undefined4 *)(*pauVar17 + 8) = in_V7A;
                  *(undefined4 *)pauVar17[1] = in_V7E;
                  auVar6._4_4_ = 0;
                  auVar6._0_4_ = uVar2;
                  auVar6._8_4_ = uVar18;
                  auVar1 = vcrsp_t(auVar3,auVar6);
                  local_c0 = auVar1._0_4_;
                  uStack_bc = auVar1._4_4_;
                  uStack_b8 = auVar1._8_4_;
                  uStack_b4 = in_V7D;
                  *(int *)*pauVar17 = auVar1._0_4_;
                  *(int *)(*pauVar17 + 4) = auVar1._4_4_;
                  *(int *)(*pauVar17 + 8) = auVar1._8_4_;
                  *(undefined4 *)pauVar17[1] = in_V7D;
                  uVar18 = vdot_t(*pauVar17,*pauVar17);
                  fVar20 = (float)vsqrt_s(uVar18);
                  if (fVar20 < fVar13) {
                    uVar18 = in_V7D;
                    if (*param_4 == 0) {
                      local_58 = 0;
                      local_54 = fVar21;
                      local_50 = fVar19;
                      local_4c = pauVar14;
                      local_48 = pauVar17;
                      FUN_089d8634();
                      uVar7 = FUN_089d81a4();
                      FUN_089d816c(1);
                      iVar8 = FUN_089d7d74(0x30,0,0);
                      FUN_089d816c(uVar7);
                      FUN_089d866c();
                      iVar10 = local_58;
                      if (iVar8 != 0) {
                        *(undefined4 *)(iVar8 + 0x10) = in_V72;
                        *(undefined4 *)(iVar8 + 0x14) = in_V76;
                        *(undefined4 *)(iVar8 + 0x18) = in_V7A;
                        *(undefined4 *)(iVar8 + 0x1c) = in_V7E;
                        iVar10 = iVar8;
                      }
                      *param_4 = iVar10;
                      fVar19 = local_50;
                      fVar21 = local_54;
                      pauVar14 = local_4c;
                      pauVar17 = local_48;
                    }
                    *(undefined (**) [12])*param_4 = pauVar16;
                    *(undefined (**) [12])(*param_4 + 4) = pauVar14;
                    *(float *)(*param_4 + 0x20) = fVar21 / fVar19;
                    iVar10 = *param_4;
                    *(int *)(iVar10 + 0x10) = auVar3._0_4_;
                    *(int *)(iVar10 + 0x14) = auVar3._4_4_;
                    *(int *)(iVar10 + 0x18) = auVar3._8_4_;
                    *(undefined4 *)(iVar10 + 0x1c) = in_V7D;
                    *(float *)(*param_4 + 0x24) = fVar20;
                    local_64 = 1;
                    fVar13 = fVar20;
                    in_V7D = uVar18;
                    goto LAB_088f71a8;
                  }
                  iVar10 = *(int *)(pauVar16[4] + 8);
                }
                else {
                  iVar10 = *(int *)(pauVar16[4] + 8);
                }
              }
              else {
                iVar10 = *(int *)(pauVar16[4] + 8);
              }
            }
            else {
LAB_088f71a8:
              iVar10 = *(int *)(pauVar16[4] + 8);
            }
          }
          else {
            iVar10 = *(int *)(pauVar16[4] + 8);
          }
          iVar12 = iVar12 + 1;
          iVar15 = iVar15 + 2;
        } while (iVar12 < iVar10);
      }
      local_60 = local_60 + 1;
      local_5c = local_5c + 4;
    } while (local_60 < local_74[2]);
  }
  return local_64;
}

