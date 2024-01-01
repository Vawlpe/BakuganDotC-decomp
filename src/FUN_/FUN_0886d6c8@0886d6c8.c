#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886d6c8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined (*pauVar8) [16];
  float fVar9;
  float fVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar11;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar3 = FUN_08860344();
  puVar7 = *(uint **)(*(int *)(param_1 + 0x5ac) + *(int *)(param_1 + 0x5b4) * 4);
  iVar4 = FUN_08870eb4(param_1);
  if (iVar4 != 0) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x144);
  *(uint *)(param_1 + 0x144) = uVar5 | 0x400000;
  *(undefined4 *)(param_1 + 0x648) = 10;
  if ((uVar5 & 0x80000) == 0) {
LAB_0886d764:
    iVar4 = *(int *)(param_1 + 8);
LAB_0886d768:
    if (iVar4 == 6) {
      if (*(int *)(param_1 + 0x5b4) == 0x3c) {
        if (0x1c < *(int *)(param_1 + 0x5c8)) {
          iVar4 = *(int *)(param_1 + 0x5bc);
          goto LAB_0886d7a4;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x3b8);
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x3b8);
      }
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x3b8);
    }
    FUN_08862780(param_1,uVar6);
    iVar4 = *(int *)(param_1 + 0x5bc);
  }
  else {
    if (*(int *)(param_1 + 0x5bc) < 1) {
      iVar4 = *(int *)(param_1 + 8);
      goto LAB_0886d768;
    }
    if (*(int *)(param_1 + 0x5c8) < 8) goto LAB_0886d764;
    iVar4 = *(int *)(param_1 + 0x5bc);
  }
LAB_0886d7a4:
  *(undefined *)(param_1 + 0x5e0) = 0;
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      if ((puVar7 != (uint *)0x0) && ((*puVar7 & 2) != 0)) {
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
      }
      iVar4 = FUN_089df684(0x3f666666,param_1);
      if (iVar4 != 0) {
        FUN_0886ab40(param_1,2);
      }
    }
    goto LAB_0886d950;
  }
  if (iVar4 < 3) {
    if (1 < iVar4) {
      if (puVar7 == (uint *)0x0) {
        iVar4 = *(int *)(param_1 + 0x5d0);
      }
      else {
        if ((*puVar7 & 2) != 0) {
          iVar4 = FUN_089df684(0x3e99999a,param_1);
          if (iVar4 == 0) {
            uVar5 = *(uint *)(param_1 + 0x144);
          }
          else {
            if (*(int *)(param_1 + 8) != 0x12) {
              iVar4 = *(int *)(param_1 + 0x5d0);
              goto LAB_0886d894;
            }
            uVar5 = *(uint *)(param_1 + 0x144);
          }
          *(uint *)(param_1 + 0x144) = uVar5 | 0x8000000;
        }
        iVar4 = *(int *)(param_1 + 0x5d0);
      }
LAB_0886d894:
      if (iVar4 < 1) {
        uVar6 = 0x3f666666;
        if ((*(int *)(param_1 + 8) == 0xd) &&
           (uVar6 = 0x3f666666, (*(uint *)(param_1 + 0x144) & 0x80000) != 0)) {
          uVar6 = 0x3f800000;
        }
        iVar4 = FUN_089df684(uVar6,param_1);
        if (iVar4 != 0) {
          *(undefined *)(param_1 + 0x5e0) = 1;
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffbfffff;
          iVar4 = FUN_0886ab40(param_1,3);
          if (iVar4 == 0) {
            iVar3 = *(int *)(param_1 + 0x20c);
          }
          else {
            if (((*puVar7 & 1) != 0) || (iVar4 = FUN_088602ec(param_1,1), iVar4 == 0))
            goto LAB_0886d950;
            iVar3 = *(int *)(param_1 + 0x20c);
          }
          *(undefined4 *)(iVar3 + 0x148) = 0;
          *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffffffe;
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
          FUN_088706f0(param_1,0,0);
          (**(code **)(*(int *)(param_1 + 0x14) + 0xd4))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xd0));
          *(undefined4 *)(param_1 + 0x5bc) = 3;
          return;
        }
      }
      else if (*(char *)(param_1 + 0xb0) != '\0') {
        *(undefined *)(param_1 + 0xb0) = 0;
        *(int *)(param_1 + 0x5d0) = *(int *)(param_1 + 0x5d0) + -1;
      }
      goto LAB_0886d950;
    }
  }
  else if (3 < iVar4) goto LAB_0886d950;
  if ((((puVar7 != (uint *)0x0) && ((*puVar7 & 2) != 0)) &&
      (iVar4 = FUN_089df684(0x3e99999a,param_1), iVar4 == 0)) && (*(int *)(param_1 + 8) == 0x12)) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x8000000;
  }
  iVar4 = FUN_089df684(0x3f666666,param_1);
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar3 + 0x148) = 0;
    *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffffffe;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
    FUN_088706f0(param_1,0,0);
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0x6c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x68));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x14);
    }
    else {
      *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xfffdf64f;
      if (*(int *)(param_1 + 0x6cc) == 0) {
        iVar3 = *(int *)(param_1 + 0x14);
      }
      else {
        *(uint *)(*(int *)(param_1 + 0x6cc) + 0x1cc) =
             *(uint *)(*(int *)(param_1 + 0x6cc) + 0x1cc) & 0xfffdf64f;
        iVar3 = *(int *)(param_1 + 0x14);
      }
    }
    (**(code **)(iVar3 + 0xd4))(param_1 + *(short *)(iVar3 + 0xd0));
    return;
  }
  if (((*(int *)(param_1 + 8) == 0x14) && (*(int *)(param_1 + 0x5bc) == 3)) &&
     (*(int *)(param_1 + 0x5b4) == 0x3f)) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfff7ffff;
  }
LAB_0886d950:
  FUN_0886ae70(param_1);
  iVar4 = FUN_088602ec(param_1,1);
  pauVar8 = (undefined (*) [16])(param_1 + 0x80);
  if ((iVar4 == 0) || ((*(uint *)(param_1 + 0x144) & 0x80000) != 0)) {
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar8,0x3f4ccccd);
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) * 0.9;
  }
  else {
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.84;
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar8,0x3f6e147b);
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) * 0.93;
  }
  if (puVar7 == (uint *)0x0) {
    iVar3 = *(int *)(param_1 + 0x5c8);
  }
  else {
    if ((*puVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x5b4) < 0x3c) {
        uVar5 = *(uint *)(param_1 + 0x144);
      }
      else if (*(int *)(param_1 + 0x5b4) < 0x40) {
        fVar9 = (*(float *)(param_1 + 0x344) + 110.0) - *(float *)(param_1 + 0x24);
        if (fVar9 < 0.0) {
          fVar9 = 0.0;
        }
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x2f8) + fVar9 * 0.05;
        uVar5 = *(uint *)(param_1 + 0x144);
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x144);
      }
      *(uint *)(param_1 + 0x144) = uVar5 | 0x1000000;
    }
    fVar9 = 0.0;
    if ((*puVar7 & 8) != 0) {
      fVar9 = 0.03333334;
    }
    if ((*puVar7 & 0x10) != 0) {
      fVar9 = 0.01666667;
    }
    if (fVar9 == 0.0) {
      uVar5 = *puVar7;
    }
    else {
      uVar6 = vmin_s(fVar9 * (float)*(int *)(param_1 + 0x5c8),in_V7F);
      fVar9 = (float)vmax_s(uVar6,in_V7D);
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (fVar9 * fVar9,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      uVar5 = *puVar7;
    }
    if ((uVar5 & 0x4000) == 0) {
      uVar5 = *puVar7;
    }
    else if (*(int *)(param_1 + 0x5bc) == 2) {
      iVar4 = FUN_08860344(param_1);
      if (iVar4 == 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x34);
        uVar6 = FUN_08865cc8(param_1);
        uVar11 = vmul_s(uVar11,in_V7C);
        auVar2 = vrot_q(uVar11,1,0,2,0);
        uStack_84 = auVar2._12_4_;
        auVar1 = vscl_t(auVar2._0_12_,uVar6);
        local_90 = auVar1._0_4_;
        uStack_8c = auVar1._4_4_;
        uStack_88 = auVar1._8_4_;
      }
      else {
        auVar1 = vsub_t(*(undefined (*) [12])(iVar4 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
        uVar6 = vdot_t(auVar1,auVar1);
        fVar10 = (float)vsqrt_s(uVar6);
        fVar10 = fVar10 - *(float *)(*(int *)(param_1 + 0x4bc) + 0xc) * 1.3;
        fVar9 = (float)FUN_08865cc8(param_1);
        if (fVar10 < 0.0) {
          fVar9 = 0.0;
        }
        else if (fVar10 <= fVar9) {
          fVar9 = fVar10;
        }
        uVar6 = vdot_t(auVar1,auVar1);
        uVar11 = vcmp_s(8,uVar6,auVar1._0_4_);
        vrsq_s(uVar6);
        uVar6 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
        uVar6 = vmul_s(uVar6,fVar9);
        auVar1 = vscl_t(auVar1,uVar6);
        local_90 = auVar1._0_4_;
        uStack_8c = auVar1._4_4_;
        uStack_88 = auVar1._8_4_;
        uStack_84 = in_V7D;
      }
      auVar2._4_4_ = uStack_8c;
      auVar2._0_4_ = local_90;
      auVar2._8_4_ = uStack_88;
      auVar2._12_4_ = uStack_84;
      auVar2 = vsub_q(auVar2,*pauVar8);
      auVar2 = vscl_q(auVar2,0x3e99999a);
      auVar2 = vadd_q(*pauVar8,auVar2);
      *(int *)*pauVar8 = auVar2._0_4_;
      *(int *)(param_1 + 0x84) = auVar2._4_4_;
      *(int *)(param_1 + 0x88) = auVar2._8_4_;
      *(int *)(param_1 + 0x8c) = auVar2._12_4_;
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x1000000;
      uVar5 = *puVar7;
    }
    else {
      uVar5 = *puVar7;
    }
    if ((uVar5 & 0x80) == 0) {
      iVar3 = *(int *)(param_1 + 0x5c8);
    }
    else if (iVar3 == 0) {
      uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
      auVar2 = vrot_q(uVar6,1,0,2,0);
      auVar1 = vscl_t(auVar2._0_12_,*(undefined4 *)(param_1 + 0x174));
      uVar6 = *(undefined4 *)(param_1 + 0x8c);
      auVar1 = vadd_t(*(undefined (*) [12])*pauVar8,auVar1);
      *(int *)*pauVar8 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = uVar6;
      iVar3 = *(int *)(param_1 + 0x5c8);
    }
    else {
      iVar3 = FUN_08860344(param_1);
      auVar1 = vsub_t(*(undefined (*) [12])(iVar3 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
      uVar6 = vdot_t(auVar1,auVar1);
      uVar11 = vcmp_s(8,uVar6,auVar1._0_4_);
      vrsq_s(uVar6);
      uVar6 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      uVar6 = vmul_s(uVar6,*(undefined4 *)(param_1 + 0x174));
      auVar1 = vscl_t(auVar1,uVar6);
      *(int *)*pauVar8 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
      iVar3 = *(int *)(param_1 + 0x5c8);
    }
  }
  *(int *)(param_1 + 0x5c8) = iVar3 + 1;
  if (1 < *(int *)(param_1 + 0x5bc)) {
    *(int *)(param_1 + 0x5cc) = *(int *)(param_1 + 0x5cc) + 1;
  }
  return;
}

