#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886df78(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined auVar7 [12];
  undefined auVar8 [12];
  int iVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  undefined (*pauVar13) [12];
  uint uVar14;
  uint *puVar15;
  undefined (*pauVar16) [16];
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar23;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  bVar5 = false;
  iVar9 = FUN_08860344();
  if (iVar9 == 0) {
    iVar9 = *(int *)(param_1 + 0x5b4);
  }
  else if (*(int *)(param_1 + 0x3d4) == 0) {
    bVar5 = true;
    iVar9 = *(int *)(param_1 + 0x5b4);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x5b4);
  }
  puVar15 = *(uint **)(*(int *)(param_1 + 0x5ac) + iVar9 * 4);
  iVar17 = *(int *)(&DAT_08abd054 + *(int *)(param_1 + 8) * 4);
  FUN_08862780(param_1,0);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x400000;
  bVar6 = false;
  iVar9 = FUN_08860344(param_1);
  iVar10 = *(int *)(param_1 + 0x5bc);
  if (iVar10 < 2) {
    if (iVar10 < 0) {
      iVar10 = *(int *)(param_1 + 0x5bc);
    }
    else if (iVar10 < 1) {
      uVar18 = 0x3f7ae148;
      if (puVar15 != (uint *)0x0) {
        if ((*puVar15 & 2) == 0) {
          uVar12 = *puVar15;
        }
        else {
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
          uVar12 = *puVar15;
        }
        uVar18 = 0x3f7ae148;
        if ((uVar12 & 0x40) != 0) {
          uVar18 = 0x3f333333;
        }
      }
      iVar10 = FUN_089df684(uVar18,param_1);
      if (iVar10 == 0) {
        iVar10 = *(int *)(param_1 + 0x5bc);
      }
      else {
        bVar6 = true;
        FUN_0886ab40(param_1,1);
        iVar10 = *(int *)(param_1 + 0x5bc);
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x144) & 0x2000) == 0) {
        iVar10 = *(int *)(param_1 + 0x20c);
LAB_0886e220:
        *(undefined4 *)(iVar10 + 0x148) = 0;
        *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) & 0xfffffffe;
        iVar10 = *(int *)(param_1 + 0x3d0);
        *(int *)(param_1 + 0x3d0) = iVar10 + 1;
        if (iVar10 < 0x13) {
          uVar18 = FUN_0886642c(param_1);
          FUN_08863144(0x3f4ccccd,param_1,uVar18);
          goto LAB_0886e284;
        }
        FUN_0886ab40(param_1,3);
        uVar12 = *(uint *)(param_1 + 0x144);
      }
      else {
        iVar10 = FUN_08860344(param_1);
        if (iVar10 == 0) {
          iVar10 = *(int *)(param_1 + 0x20c);
          goto LAB_0886e220;
        }
        iVar10 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar10 + 0x148) = 10;
        *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
        *(int *)(param_1 + 0x3c8) = iVar9;
        if ((*puVar15 & 0x20000) != 0) {
          iVar9 = *(int *)(param_1 + 0x20c);
          *(undefined4 *)(iVar9 + 0x148) = 999;
          *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) | 1;
          FUN_088706f0(param_1,0x14,0);
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffdfff;
          return;
        }
        *(undefined4 *)(param_1 + 0x5bc) = 2;
        *(undefined4 *)(param_1 + 0x3cc) = 0;
        *(undefined4 *)(param_1 + 0x3d0) = 0;
        *(undefined4 *)(param_1 + 0x3d4) = 0;
        *(undefined4 *)(param_1 + 0x3d8) = 0;
        FUN_088608d8(0x3d89374c,param_1,(int)*(short *)(iVar17 + 2),0,0);
        (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                  (*(undefined4 *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8 + 4),
                   param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
LAB_0886e284:
        uVar12 = *(uint *)(param_1 + 0x144);
      }
      *(uint *)(param_1 + 0x144) = uVar12 | 0x1000000;
      iVar10 = FUN_0885fc80(param_1);
      if (iVar10 == 0) {
        iVar10 = *(int *)(param_1 + 0x5bc);
      }
      else {
        pauVar13 = (undefined (*) [12])(param_1 + 0x80);
        uVar18 = vdot_t(*pauVar13,*pauVar13);
        uVar22 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar13);
        vrsq_s(uVar18);
        uVar18 = vcmovt_s(in_V7D,(byte)uVar22 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(*pauVar13,uVar18);
        local_b0 = auVar1._0_4_;
        uStack_ac = auVar1._4_4_;
        uStack_a8 = auVar1._8_4_;
        FUN_08824024(DAT_08ac5c70,0x1d,param_1 + 0x20,&local_b0);
        FUN_08824024(DAT_08ac5c70,0x1d,param_1 + 0x20,&local_b0);
        iVar10 = *(int *)(param_1 + 0x5bc);
      }
    }
  }
  else if (iVar10 < 3) {
    iVar10 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar10 + 0x148) = 10;
    *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
    if (*(int *)(param_1 + 0x3d8) == 0) {
      *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 1;
      uVar18 = FUN_0884b268();
      iVar10 = FUN_0884de6c(uVar18,param_1);
      if (iVar10 != 0) {
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x400;
      }
    }
    if ((puVar15 != (uint *)0x0) && ((*puVar15 & 2) != 0)) {
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
    }
    *(undefined4 *)(param_1 + 0x1a4) = 0x28;
    if (((*(int *)(param_1 + 0x3d0) == 0) &&
        ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 8) != 0)) &&
       (iVar10 = FUN_089df684(0x3ef5c28f,param_1), iVar10 != 0)) {
      FUN_0886b29c(param_1,&DAT_08a67ca0);
      *(undefined4 *)(param_1 + 0x3d0) = 1;
    }
    uVar12 = 0;
    iVar10 = FUN_089df684(0x3f733333,param_1);
    if (iVar10 == 0) {
      uVar14 = *(uint *)(param_1 + 0x3d4);
    }
    else {
      if (*(int *)(param_1 + 0x3d4) == 0) {
        if ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 0x10) == 0) {
          puVar11 = &DAT_08a67ca0;
          if ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 7) != 0) {
            if ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 2) == 0) {
              if ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 4) == 0) {
                puVar11 = &DAT_08a67cac;
              }
              else {
                puVar11 = &DAT_08a67cc4;
              }
            }
            else {
              puVar11 = &DAT_08a67cb8;
            }
            *(undefined4 *)(param_1 + 0x3d4) = 1;
          }
          FUN_0886b29c(param_1,puVar11);
          iVar10 = *(int *)(param_1 + 0x3cc);
        }
        else {
          iVar10 = *(int *)(param_1 + 0x3cc);
        }
      }
      else {
        uVar12 = 1;
        iVar10 = *(int *)(param_1 + 0x3cc);
      }
      if ((*(byte *)(iVar17 + iVar10 * 8) & 0x20) == 0) {
        iVar10 = *(int *)(param_1 + 0x3cc) + 1;
        *(int *)(param_1 + 0x3cc) = iVar10;
        FUN_088608d8(0x3d89374c,param_1,(int)*(short *)(iVar17 + iVar10 * 8 + 2),0,0);
        (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                  (*(undefined4 *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8 + 4),
                   param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
        *(undefined4 *)(param_1 + 0x3d0) = 0;
        if ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 7) == 0) {
          uVar14 = *(uint *)(param_1 + 0x3d4);
          goto LAB_0886e620;
        }
        iVar10 = FUN_08860380(param_1);
        if (iVar10 != 0) {
          FUN_089e10cc(0x3f000000);
          iVar10 = FUN_0884b268();
          *(undefined4 *)(iVar10 + 0x4e0) = 0x3f4ccccd;
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar10 + 0x148) = 0;
        *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) & 0xfffffffe;
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
        FUN_088706f0(param_1,0,0);
        (**(code **)(*(int *)(param_1 + 0x14) + 0xd4))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xd0));
        if ((*(uint *)(param_1 + 0x148) & 0x400) == 0) {
          uVar14 = *(uint *)(param_1 + 0x144);
        }
        else {
          uVar18 = FUN_0884b268();
          FUN_0884df5c(uVar18);
          *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffbff;
          uVar14 = *(uint *)(param_1 + 0x144);
        }
        *(uint *)(param_1 + 0x144) = uVar14 & 0xffffdfff;
      }
      uVar14 = *(uint *)(param_1 + 0x3d4);
    }
LAB_0886e620:
    if (((uVar14 | uVar12) != 0) &&
       (iVar10 = *(int *)(param_1 + 0x3d8), *(int *)(param_1 + 0x3d8) = iVar10 + 1, iVar10 == 0x15))
    {
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffdfff;
      if ((*(uint *)(param_1 + 0x148) & 0x400) != 0) {
        uVar18 = FUN_0884b268();
        FUN_0884df5c(uVar18);
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffbff;
      }
      iVar10 = FUN_08860380(param_1);
      if (iVar10 != 0) {
        FUN_089e10cc(0x3f800000);
        iVar10 = FUN_0884b268();
        *(undefined4 *)(iVar10 + 0x4e0) = 0;
      }
    }
    fVar19 = (float)FUN_089df648(param_1);
    if (fVar19 < 3.0) {
      if ((*(byte *)(iVar17 + *(int *)(param_1 + 0x3cc) * 8) & 7) == 0) {
        iVar10 = *(int *)(param_1 + 0x5bc);
      }
      else {
        iVar10 = FUN_08860380(param_1);
        if (iVar10 == 0) goto LAB_0886e7f4;
        FUN_089e10cc(0x3f266666);
        iVar10 = *(int *)(param_1 + 0x5bc);
      }
    }
    else {
      iVar10 = *(int *)(param_1 + 0x5bc);
    }
  }
  else if (iVar10 < 4) {
    iVar10 = FUN_089df6d0(param_1);
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x5bc);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar10 + 0x148) = 0;
      *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) & 0xfffffffe;
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
      FUN_088706f0(param_1,0,0);
      (**(code **)(*(int *)(param_1 + 0x14) + 0xd4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xd0));
      if ((*(uint *)(param_1 + 0x148) & 0x400) != 0) {
        uVar18 = FUN_0884b268();
        FUN_0884df5c(uVar18);
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffbff;
      }
      iVar10 = FUN_08860380(param_1);
      if (iVar10 != 0) {
        FUN_089e10cc(0x3f800000);
        iVar10 = FUN_0884b268();
        *(undefined4 *)(iVar10 + 0x4e0) = 0;
      }
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffdfff;
      if (bVar5) {
        if (*(int *)(iVar9 + 0x3c0) != param_1) {
          iVar10 = *(int *)(param_1 + 0x5bc);
          goto LAB_0886e7f8;
        }
        *(undefined4 *)(iVar9 + 0x3c0) = 0;
      }
LAB_0886e7f4:
      iVar10 = *(int *)(param_1 + 0x5bc);
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x5bc);
  }
LAB_0886e7f8:
  if (iVar10 < 1) {
    iVar10 = *(int *)(param_1 + 0x5bc);
  }
  else if (*(int *)(param_1 + 0x5bc) < 3) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 1;
    pauVar13 = (undefined (*) [12])(param_1 + 0x80);
    uVar18 = vdot_t(*pauVar13,*pauVar13);
    uVar22 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar13);
    vrsq_s(uVar18);
    uVar18 = vcmovt_s(in_V7D,(byte)uVar22 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar13,uVar18);
    local_a0 = auVar1._0_4_;
    local_9c = auVar1._4_4_;
    uStack_98 = auVar1._8_4_;
    *(float *)(param_1 + 0x350) = local_9c * -0.9;
    *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x358) = 0;
    *(undefined4 *)(param_1 + 0x35c) = 0;
    pauVar16 = (undefined (*) [16])(param_1 + 0x350);
    uVar18 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
    auVar2 = vmov_q(*pauVar16);
    auVar3 = vrot_q(uVar18,1,0,3,0);
    auVar4 = vrot_q(uVar18,2,0,1,0);
    uVar18 = vdot_t(*(undefined (*) [12])*pauVar16,auVar3._0_12_);
    uVar22 = vdot_t(*(undefined (*) [12])*pauVar16,auVar4._0_12_);
    *(undefined4 *)*pauVar16 = uVar18;
    *(int *)(param_1 + 0x354) = auVar2._4_4_;
    *(undefined4 *)(param_1 + 0x358) = uVar22;
    *(int *)(param_1 + 0x35c) = auVar2._12_4_;
    uVar18 = vdot_t(*(undefined (*) [12])*pauVar16,*(undefined (*) [12])*pauVar16);
    uVar22 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar16);
    vrsq_s(uVar18);
    uVar18 = vcmovt_s(in_V7D,(byte)uVar22 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar16,uVar18);
    *(int *)*pauVar16 = auVar1._0_4_;
    *(int *)(param_1 + 0x354) = auVar1._4_4_;
    *(int *)(param_1 + 0x358) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x35c) = in_V7D;
    iVar10 = *(int *)(param_1 + 0x5bc);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x5bc);
  }
  if (iVar10 < 2) {
    FUN_0886ae70(param_1);
    iVar10 = *(int *)(param_1 + 0x5bc);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x5bc);
  }
  if (iVar10 < 1) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x2000000;
  }
  uVar12 = 0;
  if (puVar15 == (uint *)0x0) {
LAB_0886e918:
    uVar14 = *(uint *)(param_1 + 0x5bc);
  }
  else {
    if ((*puVar15 & 0x20) != 0) {
      uVar12 = 1;
      goto LAB_0886e918;
    }
    uVar14 = *(uint *)(param_1 + 0x5bc);
  }
  if ((uVar14 | uVar12) == 0) {
    if ((puVar15 != (uint *)0x0) && ((*puVar15 & 1) != 0)) {
      fVar19 = (*(float *)(param_1 + 0x344) + 110.0) - *(float *)(param_1 + 0x24);
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x2f8) + fVar19 * 0.05;
    }
  }
  else {
    if (*(int *)(param_1 + 0x5bc) == 2) {
      iVar10 = *(int *)(param_1 + 0x3d4);
    }
    else if (*(int *)(param_1 + 0x5bc) == 1) {
      iVar10 = *(int *)(param_1 + 0x3d4);
    }
    else {
      if (uVar12 == 0) goto LAB_0886eb90;
      iVar10 = *(int *)(param_1 + 0x3d4);
    }
    if ((iVar10 == 0) && ((puVar15 == (uint *)0x0 || ((*puVar15 & 0x80) == 0)))) {
      pauVar16 = (undefined (*) [16])(param_1 + 0x80);
      if (bVar5) {
        uStack_84 = *(undefined4 *)(iVar9 + 0x2c);
        auVar1 = vsub_t(*(undefined (*) [12])(iVar9 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
        local_90 = auVar1._0_4_;
        uStack_8c = auVar1._4_4_;
        uStack_88 = auVar1._8_4_;
        if (bVar6) {
          uVar18 = FUN_08865c40(param_1);
          *(undefined4 *)(param_1 + 0x174) = uVar18;
          auVar8._4_4_ = uStack_8c;
          auVar8._0_4_ = local_90;
          auVar8._8_4_ = uStack_88;
          auVar7._4_4_ = uStack_8c;
          auVar7._0_4_ = local_90;
          auVar7._8_4_ = uStack_88;
          auVar1._4_4_ = uStack_8c;
          auVar1._0_4_ = local_90;
          auVar1._8_4_ = uStack_88;
          uVar22 = vdot_t(auVar1,auVar7);
          uVar23 = vcmp_s(8,uVar22,local_90);
          vrsq_s(uVar22);
          uVar22 = vcmovt_s(in_V7D,(byte)uVar23 & 1);
          uVar18 = vmul_s(uVar22,uVar18);
          auVar1 = vscl_t(auVar8,uVar18);
          *(int *)*pauVar16 = auVar1._0_4_;
          *(int *)(param_1 + 0x84) = auVar1._4_4_;
          *(int *)(param_1 + 0x88) = auVar1._8_4_;
          *(undefined4 *)(param_1 + 0x8c) = in_V7D;
        }
        else {
          uVar18 = vdot_t(auVar1,auVar1);
          fVar21 = (float)vsqrt_s(uVar18);
          fVar21 = fVar21 - *(float *)(*(int *)(param_1 + 0x4bc) + 0xc) * 1.2;
          fVar19 = *(float *)(param_1 + 0x174);
          if (fVar21 < 0.0) {
            fVar19 = 0.0;
          }
          else if (fVar21 <= fVar19) {
            fVar19 = fVar21;
          }
          uVar18 = vdot_t(auVar1,auVar1);
          uVar22 = vcmp_s(8,uVar18,local_90);
          vrsq_s(uVar18);
          uVar18 = vcmovt_s(in_V7D,(byte)uVar22 & 1);
          uVar18 = vmul_s(uVar18,fVar19);
          auVar1 = vscl_t(auVar1,uVar18);
          local_90 = auVar1._0_4_;
          uStack_8c = auVar1._4_4_;
          uStack_88 = auVar1._8_4_;
          auVar3._12_4_ = in_V7D;
          auVar3._0_12_ = auVar1;
          auVar2 = vsub_q(auVar3,*pauVar16);
          auVar2 = vscl_q(auVar2,0x3e99999a);
          auVar2 = vadd_q(*pauVar16,auVar2);
          *(int *)*pauVar16 = auVar2._0_4_;
          *(int *)(param_1 + 0x84) = auVar2._4_4_;
          *(int *)(param_1 + 0x88) = auVar2._8_4_;
          *(int *)(param_1 + 0x8c) = auVar2._12_4_;
          fVar20 = *(float *)(param_1 + 0x174);
          fVar19 = (float)FUN_089e10c0();
          fVar21 = (float)FUN_08865cc8(param_1);
          *(float *)(param_1 + 0x174) =
               fVar20 + (fVar21 - *(float *)(param_1 + 0x174)) * 0.1 * fVar19;
        }
      }
      else {
        uVar22 = *(undefined4 *)(param_1 + 0x34);
        uVar18 = FUN_08865b34(param_1);
        uVar22 = vmul_s(uVar22,in_V7C);
        auVar2 = vrot_q(uVar22,1,0,2,0);
        auVar1 = vscl_t(auVar2._0_12_,uVar18);
        auVar2._12_4_ = auVar2._12_4_;
        auVar2._0_12_ = auVar1;
        auVar2 = vsub_q(auVar2,*pauVar16);
        auVar2 = vscl_q(auVar2,0x3e99999a);
        auVar2 = vadd_q(*pauVar16,auVar2);
        *(int *)*pauVar16 = auVar2._0_4_;
        *(int *)(param_1 + 0x84) = auVar2._4_4_;
        *(int *)(param_1 + 0x88) = auVar2._8_4_;
        *(int *)(param_1 + 0x8c) = auVar2._12_4_;
      }
    }
  }
LAB_0886eb90:
  if (!bVar5) {
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f59999a);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
  }
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 1;
  if (1 < *(int *)(param_1 + 0x5bc)) {
    *(int *)(param_1 + 0x5cc) = *(int *)(param_1 + 0x5cc) + 1;
  }
  return;
}

