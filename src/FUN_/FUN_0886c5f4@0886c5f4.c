#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886c5f4(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  undefined auVar8 [12];
  bool bVar9;
  undefined auVar10 [12];
  bool bVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined (*pauVar17) [12];
  undefined (*pauVar18) [16];
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 in_V7C;
  undefined4 in_V7D;
  float local_8c;
  
  iVar16 = *(int *)(*(int *)(param_1 + 0x5b0) + *(int *)(param_1 + 0x5b8) * 4);
  puVar12 = (uint *)FUN_0886ac78(param_1);
  uVar19 = 0x3f800000;
  FUN_08862780(param_1,0);
  iVar13 = FUN_08860344(param_1);
  bVar2 = iVar13 != 0;
  if (((iVar16 == 0) || (puVar12 == (uint *)0x0)) || (*(int *)(param_1 + 0x5c0) == -1)) {
    FUN_088706f0(param_1,0,0);
    return;
  }
  iVar16 = FUN_08870eb4(param_1);
  if (iVar16 != 0) {
    return;
  }
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 1;
  if (*(int *)(param_1 + 0x5bc) < 2) {
    uVar14 = *(uint *)(param_1 + 0x144);
  }
  else {
    *(int *)(param_1 + 0x5cc) = *(int *)(param_1 + 0x5cc) + 1;
    uVar14 = *(uint *)(param_1 + 0x144);
  }
  *(undefined *)(param_1 + 0x5e0) = 0;
  *(undefined *)(param_1 + 0x5e1) = 0;
  *(uint *)(param_1 + 0x144) = uVar14 | 0x400000;
  iVar16 = FUN_0886b3cc(param_1);
  bVar3 = *(int *)(param_1 + 0x5c4) != 0;
  bVar4 = iVar16 != 0;
  fVar21 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x78);
  uVar22 = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x74);
  if ((*puVar12 & 2) == 0) {
    *(undefined *)(param_1 + 0x5e2) = 0;
  }
  else {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
    *(undefined *)(param_1 + 0x5e2) = 0;
  }
  iVar16 = FUN_0886b3cc(param_1);
  if (iVar16 == 0) {
    iVar16 = *(int *)(param_1 + 0x140);
  }
  else {
    if (0 < *(int *)(param_1 + 0x5c4)) {
      *(undefined *)(param_1 + 0x5e2) = 1;
    }
    iVar16 = *(int *)(param_1 + 0x140);
  }
  *(undefined *)(param_1 + 0x1e0) = 0;
  bVar11 = false;
  if (iVar16 == 9) {
    *(undefined *)(param_1 + 0x1e0) = 1;
  }
  uVar14 = *(uint *)(param_1 + 0x5bc);
  if (4 < uVar14) {
    iVar16 = *(int *)(param_1 + 0x140);
    goto LAB_0886d18c;
  }
  if (uVar14 == 1) {
    iVar16 = *(int *)(param_1 + 0x3d0);
    *(int *)(param_1 + 0x3d0) = iVar16 + 1;
    if (((iVar16 < 9) && (*(char *)(param_1 + 0x195) == '\0')) &&
       (iVar16 = FUN_08860344(param_1), iVar16 != 0)) {
      uVar14 = *(uint *)(param_1 + 0x144);
    }
    else {
      FUN_0886acd4(param_1,2);
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (*(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x7c),
                 param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      uVar14 = *(uint *)(param_1 + 0x144);
    }
    *(uint *)(param_1 + 0x144) = uVar14 | 0x1000000;
LAB_0886d188:
    iVar16 = *(int *)(param_1 + 0x140);
  }
  else {
    if (uVar14 != 2) {
      if (uVar14 != 3) {
        if (uVar14 != 4) {
          iVar16 = FUN_089df684(uVar22,param_1);
          if (iVar16 == 0) {
            iVar16 = *(int *)(param_1 + 0x140);
          }
          else {
            if ((*(char *)(param_1 + 0x195) == '\0') &&
               (iVar16 = FUN_08860344(param_1), iVar16 != 0)) {
              iVar16 = FUN_0886acd4(param_1,1);
              if (iVar16 == 0) {
                FUN_0886acd4(param_1,2);
              }
              else {
                *(undefined4 *)(param_1 + 0x3d0) = 0;
              }
              bVar11 = true;
              iVar16 = *(int *)(param_1 + 0x14);
            }
            else {
              FUN_0886acd4(param_1,2);
              iVar16 = *(int *)(param_1 + 0x14);
            }
            (**(code **)(iVar16 + 0x34))
                      (*(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x7c),
                       param_1 + *(short *)(iVar16 + 0x30));
            iVar16 = *(int *)(param_1 + 0x140);
          }
          goto LAB_0886d18c;
        }
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xf7ffffff;
        if (((((*(uint *)(param_1 + 0x16c) & 0x10) != 0) &&
             (iVar16 = FUN_088886fc(param_1 + 0x434), iVar16 != 0)) && (bVar2)) &&
           ((*(int *)(iVar13 + 0x140) == 4 && ((*(uint *)(iVar13 + 0x148) & 2) != 0)))) {
          FUN_088715b0(param_1,0);
          *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 4;
          if (*(char *)(param_1 + 0x611) == '\0') {
            return;
          }
          FUN_08849528();
          *(undefined *)(param_1 + 0x611) = 0;
          return;
        }
      }
      if (*(int *)(param_1 + 0x5bc) == 3) {
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x40;
        iVar16 = *(int *)(param_1 + 0x5c0);
      }
      else {
        iVar16 = *(int *)(param_1 + 0x5c0);
      }
      *(undefined *)(param_1 + 0x5e0) = 1;
      if (2 < iVar16) goto LAB_0886ce00;
      if (iVar13 == 0) {
        iVar16 = *(int *)(param_1 + 0x5c0);
      }
      else {
        fVar23 = (float)FUN_089df51c(param_1);
        fVar20 = (float)FUN_089df5dc(param_1);
        fVar23 = (fVar21 - fVar20) * fVar23;
        iVar16 = FUN_0880d354();
        if (iVar16 == 0) {
          fVar20 = 6.0;
        }
        else {
          fVar20 = 9.0;
        }
        if (fVar23 <= fVar20) {
          *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x200;
          iVar16 = *(int *)(param_1 + 0x5c0);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x5c0);
        }
        if (iVar16 < 2) {
          iVar16 = FUN_0880d354();
          if (iVar16 != 0) {
            if (56.0 < fVar23) {
              iVar16 = *(int *)(param_1 + 0x5c0);
              goto LAB_0886ce04;
            }
            *(undefined *)(param_1 + 0x1e0) = 1;
          }
LAB_0886ce00:
          iVar16 = *(int *)(param_1 + 0x5c0);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x5c0);
        }
      }
LAB_0886ce04:
      if (((2 < iVar16) && (bVar2)) &&
         ((*(int *)(iVar13 + 0x140) == 4 && ((*(uint *)(iVar13 + 0x148) & 2) != 0)))) {
        fVar21 = fVar21 * 0.7;
        uVar19 = 0x3f333333;
      }
      iVar16 = FUN_089df684(fVar21,param_1);
      if (iVar16 == 0) {
        if (*(char *)(param_1 + 0xb0) == '\0') {
          if (*(char *)(param_1 + 0x611) == '\0') {
            iVar16 = *(int *)(param_1 + 0x140);
            goto LAB_0886d18c;
          }
          FUN_08849528();
          *(undefined *)(param_1 + 0x611) = 0;
          goto LAB_0886d188;
        }
        uVar14 = *(uint *)(param_1 + 0x144);
      }
      else {
        uVar14 = *(uint *)(param_1 + 0x144);
      }
      *(uint *)(param_1 + 0x144) = uVar14 & 0xf7ffffff;
      bVar5 = false;
      bVar9 = false;
      if ((((*(int *)(param_1 + 0x140) != 9) || (bVar3 && bVar4)) || (5 < *(int *)(param_1 + 0x5b8))
          ) || (*(int *)(*(int *)(param_1 + 0x5b0) + *(int *)(param_1 + 0x5b8) * 4 + 8) == 0)) {
        iVar16 = FUN_089df684(uVar19,param_1);
        if (((iVar16 == 0) && (*(char *)(param_1 + 0xb0) == '\0')) || (bVar3 && bVar4)) {
          if (bVar3 && bVar4) {
            *(int *)(param_1 + 0x5c0) = *(int *)(param_1 + 0x5c0) + 1;
            iVar16 = FUN_0886b348(param_1);
            if (iVar16 == 1) {
              *(undefined *)(param_1 + 0x5e4) = 1;
            }
            *(undefined4 *)(param_1 + 0x5c8) = 0;
            *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + -1;
            *(undefined4 *)(param_1 + 0x5cc) = 0;
            if (iVar16 == -1) {
              uVar22 = FUN_0886b2f4(param_1);
              *(undefined4 *)(param_1 + 0x5c0) = uVar22;
              uVar14 = FUN_089df684(uVar19,param_1);
              bVar5 = (uVar14 | *(byte *)(param_1 + 0xb0)) != 0;
            }
            else {
              iVar16 = FUN_0886acd4(param_1,2);
              if (iVar16 == 0) {
                uVar14 = FUN_089df684(uVar19,param_1);
                bVar5 = (uVar14 | *(byte *)(param_1 + 0xb0)) != 0;
              }
              else {
                (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                          (*(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x7c),
                           param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
                bVar9 = true;
              }
            }
            FUN_0886b464(param_1);
          }
          else {
            uVar14 = FUN_089df684(uVar19,param_1);
            bVar5 = (uVar14 | *(byte *)(param_1 + 0xb0)) != 0;
          }
        }
        else {
          bVar5 = true;
          if (((*(int *)(param_1 + 0x5bc) == 3) && ((*puVar12 & 0x8000) == 0)) &&
             (iVar16 = FUN_0886acd4(param_1,4), iVar16 != 0)) {
            bVar5 = false;
          }
        }
        if (bVar5) {
          if (*(int *)(param_1 + 0x140) == 9) {
            FUN_088706f0(param_1,0,0);
          }
          FUN_088706f0(param_1,0,0);
          fVar21 = (float)FUN_08863b94(0x3eb33333,param_1);
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * fVar21;
          if (*(char *)(param_1 + 0x611) != '\0') {
            FUN_08849528();
            *(undefined *)(param_1 + 0x611) = 0;
          }
        }
        else if ((((*(char *)(param_1 + 0x610) == '\0') || (*(int *)(param_1 + 0x5c0) < 3)) ||
                 (iVar16 = FUN_0886b3cc(param_1), iVar16 != 0)) ||
                (((*(int *)(param_1 + 0x140) != 7 || (iVar13 == 0)) ||
                 ((iVar16 = FUN_08860380(param_1), iVar16 == 0 || (!bVar9)))))) {
          FUN_08849528();
          *(undefined *)(param_1 + 0x611) = 0;
        }
        else {
          FUN_08849468(param_1,iVar13,0);
          *(undefined *)(param_1 + 0x611) = 1;
        }
        *(undefined *)(param_1 + 0x610) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c0) = 0;
        *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 2;
        *(undefined *)(param_1 + 0x5e4) = 0;
        FUN_0886acd4(param_1,2);
        (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                  (*(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x7c),
                   param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
        *(undefined4 *)(param_1 + 0x5c8) = 1;
        *(undefined4 *)(param_1 + 0x5cc) = 1;
      }
      goto LAB_0886d188;
    }
    if (((iVar13 != 0) && (*(int *)(param_1 + 0x5c0) < 3)) &&
       (fVar21 = (float)FUN_089df49c(param_1), fVar21 < 3.0)) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x200;
    }
    iVar16 = FUN_0880d354();
    if (iVar16 == 0) {
      if (*(int *)(param_1 + 0x5c0) < 1) {
        uVar14 = *(uint *)(param_1 + 0x148);
      }
      else if (*(int *)(param_1 + 0x5c0) < 3) {
        fVar21 = (float)FUN_089df49c(param_1);
        if (0.0 <= fVar21) {
          fVar21 = (float)FUN_089df49c(param_1);
          if (fVar21 <= 8.0) {
            *(undefined *)(param_1 + 0x1e0) = 1;
          }
          goto LAB_0886c9a8;
        }
        uVar14 = *(uint *)(param_1 + 0x148);
      }
      else {
        uVar14 = *(uint *)(param_1 + 0x148);
      }
    }
    else if (*(int *)(param_1 + 0x5c0) < 1) {
      uVar14 = *(uint *)(param_1 + 0x148);
    }
    else if (*(int *)(param_1 + 0x5c0) < 3) {
      fVar21 = (float)FUN_089df49c(param_1);
      if (0.0 <= fVar21) {
        fVar21 = (float)FUN_089df49c(param_1);
        if (fVar21 <= 4.0) {
          *(undefined *)(param_1 + 0x1e0) = 1;
        }
LAB_0886c9a8:
        uVar14 = *(uint *)(param_1 + 0x148);
      }
      else {
        uVar14 = *(uint *)(param_1 + 0x148);
      }
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x148);
    }
    *(uint *)(param_1 + 0x148) = uVar14 | 0x40;
    if (bVar2) {
LAB_0886cabc:
      iVar16 = *(int *)(param_1 + 0x5d0);
    }
    else if (*(int *)(param_1 + 0x140) == 9) {
      uVar19 = *(undefined4 *)(param_1 + 0x34);
      fVar21 = (float)FUN_08865c40(param_1);
      uVar19 = vmul_s(uVar19,in_V7C);
      auVar6 = vrot_q(uVar19,1,0,2,0);
      auVar7 = vscl_t(auVar6._0_12_,fVar21 * 0.8);
      *(int *)(param_1 + 0x80) = auVar7._0_4_;
      *(int *)(param_1 + 0x84) = auVar7._4_4_;
      *(int *)(param_1 + 0x88) = auVar7._8_4_;
      *(int *)(param_1 + 0x8c) = auVar6._12_4_;
      iVar16 = *(int *)(param_1 + 0x5d0);
    }
    else {
      if (*(int *)(param_1 + 0x3cc) == 0) {
        pauVar17 = (undefined (*) [12])(param_1 + 0x80);
        uVar19 = vzero_s();
        auVar7._8_4_ = *(undefined4 *)(param_1 + 0x88);
        auVar7._4_4_ = uVar19;
        auVar7._0_4_ = *(undefined4 *)*pauVar17;
        auVar8._8_4_ = *(undefined4 *)(param_1 + 0x88);
        auVar8._4_4_ = uVar19;
        auVar8._0_4_ = *(undefined4 *)*pauVar17;
        fVar20 = (float)vdot_t(auVar7,auVar8);
        fVar21 = (float)FUN_08865b34(param_1);
        fVar23 = (float)FUN_08865b34(param_1);
        if (fVar20 < fVar21 * fVar23) {
          uVar24 = *(undefined4 *)(param_1 + 0x34);
          uVar19 = FUN_08865b34(param_1);
          uVar24 = vmul_s(uVar24,in_V7C);
          auVar6 = vrot_q(uVar24,1,0,2,0);
          auVar7 = vscl_t(auVar6._0_12_,uVar19);
          uVar19 = *(undefined4 *)(param_1 + 0x8c);
          auVar7 = vadd_t(*pauVar17,auVar7);
          *(int *)*pauVar17 = auVar7._0_4_;
          *(int *)(param_1 + 0x84) = auVar7._4_4_;
          *(int *)(param_1 + 0x88) = auVar7._8_4_;
          *(undefined4 *)(param_1 + 0x8c) = uVar19;
          *(undefined4 *)(param_1 + 0x84) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x3cc) = 1;
        }
        goto LAB_0886cabc;
      }
      iVar16 = *(int *)(param_1 + 0x5d0);
    }
    if (iVar16 < 1) {
      iVar16 = FUN_089df684(uVar22,param_1);
      if (iVar16 == 0) {
        iVar16 = *(int *)(param_1 + 0x140);
      }
      else {
        if ((*puVar12 & 0x10000) == 0) {
          uVar19 = FUN_0886b420(param_1);
          FUN_0886b29c(param_1,uVar19);
        }
        *(undefined4 *)(param_1 + 0x3cc) = 0;
        *(undefined *)(param_1 + 0x5e0) = 1;
        iVar16 = FUN_0886acd4(param_1,3);
        if (iVar16 == 0) {
          if (*(int *)(param_1 + 0x140) == 9) {
            FUN_088706f0(param_1,0,0);
            cVar1 = *(char *)(param_1 + 0x611);
          }
          else {
            FUN_088706f0(param_1,0,0);
            (**(code **)(*(int *)(param_1 + 0x14) + 0xd4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xd0));
            cVar1 = *(char *)(param_1 + 0x611);
          }
          if (cVar1 != '\0') {
            FUN_08849528();
            *(undefined *)(param_1 + 0x611) = 0;
          }
          fVar21 = (float)FUN_08863b94(0x3eb33333,param_1);
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * fVar21;
          goto LAB_0886d188;
        }
        if ((*puVar12 & 4) == 0) {
          iVar16 = *(int *)(param_1 + 0x14);
        }
        else {
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x2f8) * 8.0;
          iVar16 = *(int *)(param_1 + 0x14);
        }
        (**(code **)(iVar16 + 0x34))
                  (*(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x7c),
                   param_1 + *(short *)(iVar16 + 0x30));
        iVar16 = *(int *)(param_1 + 0x140);
      }
    }
    else {
      if (*(char *)(param_1 + 0xb0) != '\0') {
        *(undefined *)(param_1 + 0xb0) = 0;
        *(int *)(param_1 + 0x5d0) = *(int *)(param_1 + 0x5d0) + -1;
        goto LAB_0886d188;
      }
      iVar16 = *(int *)(param_1 + 0x140);
    }
  }
LAB_0886d18c:
  iVar15 = 2;
  if ((iVar16 == 9) || (*(int *)(param_1 + 0x140) == 7)) {
    uVar19 = 1;
    if (*(int *)(param_1 + 0x5bc) == 1) {
      uVar14 = *puVar12;
    }
    else {
      FUN_0886ae70(param_1);
      if (*(int *)(param_1 + 0x5bc) == iVar15) {
        *(undefined4 *)(param_1 + 0x64c) = uVar19;
        uVar14 = *puVar12;
      }
      else {
        uVar14 = *puVar12;
      }
    }
  }
  else {
    uVar14 = *puVar12;
  }
  if ((uVar14 & 4) == 0) {
    if (*(int *)(param_1 + 0x5bc) == 3) {
      bVar2 = false;
      iVar16 = *(int *)(param_1 + 0x5bc);
    }
    else {
      iVar16 = *(int *)(param_1 + 0x5bc);
    }
  }
  else {
    iVar16 = *(int *)(param_1 + 0x5bc);
  }
  if (((iVar16 != iVar15) && (*(int *)(param_1 + 0x5bc) != 1)) && (*(int *)(param_1 + 0x5bc) != 3))
  {
    bVar2 = false;
    goto LAB_0886d668;
  }
  if ((bVar2) && ((bVar3 && bVar4 || (*(int *)(param_1 + 0x5bc) < 3)))) {
    local_8c = *(float *)(iVar13 + 0x24) - *(float *)(*(int *)(iVar13 + 0x4bc) + 0x70);
    pauVar18 = (undefined (*) [16])(param_1 + 0x80);
    if (local_8c < *(float *)(iVar13 + 0x344)) {
      local_8c = *(float *)(iVar13 + 0x344);
    }
    auVar10._4_4_ = local_8c;
    auVar10._0_4_ = *(undefined4 *)(iVar13 + 0x20);
    auVar10._8_4_ = *(undefined4 *)(iVar13 + 0x28);
    auVar7 = vsub_t(auVar10,*(undefined (*) [12])(param_1 + 0x20));
    uVar19 = auVar7._0_4_;
    if ((*puVar12 & 0x80) == 0) {
      if ((bVar11) || (*(int *)(param_1 + 0x5c8) == 1)) {
        if (((*(uint *)(iVar13 + 0x144) & 0x40000) == 0) || ((*(uint *)(iVar13 + 0x148) & 2) == 0))
        {
          uVar22 = FUN_08865b34(param_1);
        }
        else {
          uVar22 = FUN_08865bbc(param_1);
        }
        *(undefined4 *)(param_1 + 0x174) = uVar22;
        uVar24 = vdot_t(auVar7,auVar7);
        uVar19 = vcmp_s(8,uVar24,uVar19);
        vrsq_s(uVar24);
        uVar19 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
        uVar19 = vmul_s(uVar19,uVar22);
        auVar7 = vscl_t(auVar7,uVar19);
        *(int *)*pauVar18 = auVar7._0_4_;
        *(int *)(param_1 + 0x84) = auVar7._4_4_;
        *(int *)(param_1 + 0x88) = auVar7._8_4_;
        *(undefined4 *)(param_1 + 0x8c) = in_V7D;
        fVar21 = *(float *)(param_1 + 0x84);
        if (30.0 < fVar21) {
          fVar21 = 30.0;
        }
        else if (fVar21 < -30.0) {
          fVar21 = -30.0;
        }
        *(float *)(param_1 + 0x84) = fVar21;
      }
      else {
        uVar22 = vdot_t(auVar7,auVar7);
        fVar23 = (float)vsqrt_s(uVar22);
        fVar23 = fVar23 - *(float *)(*(int *)(param_1 + 0x4bc) + 0xc) * 1.3;
        fVar21 = *(float *)(param_1 + 0x174);
        if (fVar23 < 0.0) {
          fVar21 = 0.0;
        }
        else if (fVar23 <= fVar21) {
          fVar21 = fVar23;
        }
        uVar22 = vdot_t(auVar7,auVar7);
        uVar19 = vcmp_s(8,uVar22,uVar19);
        vrsq_s(uVar22);
        uVar19 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
        uVar19 = vmul_s(uVar19,fVar21);
        auVar7 = vscl_t(auVar7,uVar19);
        auVar6._12_4_ = in_V7D;
        auVar6._0_12_ = auVar7;
        auVar6 = vsub_q(auVar6,*pauVar18);
        auVar6 = vscl_q(auVar6,0x3e99999a);
        auVar6 = vadd_q(*pauVar18,auVar6);
        *(int *)*pauVar18 = auVar6._0_4_;
        *(int *)(param_1 + 0x84) = auVar6._4_4_;
        *(int *)(param_1 + 0x88) = auVar6._8_4_;
        *(int *)(param_1 + 0x8c) = auVar6._12_4_;
        if ((*(uint *)(iVar13 + 0x144) & 0x40000) == 0) {
          iVar16 = *(int *)(iVar13 + 0x140);
LAB_0886d4e8:
          if ((iVar16 == 3) && ((*(uint *)(param_1 + 0x148) & 4) != 0)) {
            *(float *)(param_1 + 0x84) =
                 ((*(float *)(iVar13 + 0x24) - *(float *)(param_1 + 0x24)) -
                 *(float *)(param_1 + 0x84)) * 0.2;
          }
        }
        else {
          if ((*(uint *)(iVar13 + 0x148) & 2) == 0) {
            iVar16 = *(int *)(iVar13 + 0x140);
            goto LAB_0886d4e8;
          }
          if (*(int *)(param_1 + 0x5bc) < 3) {
            uVar19 = FUN_08865bbc(param_1);
            *(undefined4 *)(param_1 + 0x174) = uVar19;
            fVar21 = (float)FUN_08865e10(*(undefined4 *)(iVar13 + 0x84),
                                         *(float *)(*(int *)(iVar13 + 0x4bc) + 0x18) * 0.75,param_1,
                                         6);
            fVar21 = (fVar21 + *(float *)(iVar13 + 0x24)) -
                     (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x84));
            if (*(float *)(param_1 + 0x174) < fVar21) {
              fVar21 = *(float *)(param_1 + 0x174);
            }
            *(float *)(param_1 + 0x84) = fVar21;
          }
        }
        fVar20 = *(float *)(param_1 + 0x174);
        fVar21 = (float)FUN_089e10c0();
        fVar23 = (float)FUN_08865b34(param_1);
        *(float *)(param_1 + 0x174) =
             fVar20 + (fVar23 * 0.7 - *(float *)(param_1 + 0x174)) * 0.1 * fVar21;
      }
    }
    else {
      uVar22 = vdot_t(auVar7,auVar7);
      uVar19 = vcmp_s(8,uVar22,uVar19);
      vrsq_s(uVar22);
      uVar19 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
      uVar19 = vmul_s(uVar19,*(undefined4 *)(param_1 + 0x174));
      auVar7 = vscl_t(auVar7,uVar19);
      *(int *)*pauVar18 = auVar7._0_4_;
      *(int *)(param_1 + 0x84) = auVar7._4_4_;
      *(int *)(param_1 + 0x88) = auVar7._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
      *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) * 0.85;
    }
  }
  if (iVar13 != 0) {
    if (bVar2) {
      if (*(float *)(param_1 + 0x24) < *(float *)(iVar13 + 0x24)) {
        if (*(float *)(param_1 + 0x84) < 0.0) {
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.3;
        }
      }
      else if (0.0 < *(float *)(param_1 + 0x84)) {
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.3;
      }
    }
    else {
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.85;
    }
  }
LAB_0886d668:
  if (!bVar2) {
    auVar7 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f547ae1);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar7._0_4_;
    *(int *)(param_1 + 0x88) = auVar7._8_4_;
  }
  return;
}

