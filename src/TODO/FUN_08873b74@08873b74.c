#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08873b74(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  int iVar10;
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [12];
  float fVar13;
  undefined4 uVar14;
  undefined4 in_V7C;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_2c;
  undefined auVar7 [12];
  
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x4040000;
  *(int *)(param_1 + 0x3d4) = *(int *)(param_1 + 0x3d4) + 1;
  switch(*(undefined4 *)(param_1 + 0x3cc)) {
  case 0:
    if (*(int *)(param_1 + 0x3d4) < 5) {
      iVar10 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar10 + 0x148) = 1;
      *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
    }
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + 1;
    if (((*(uint *)(param_1 + 0x148) & 2) == 0) || (10.0 <= *(float *)(param_1 + 0x84))) {
      fVar13 = 1.5;
    }
    else {
      fVar13 = 0.75;
    }
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - fVar13 * 2.3;
    local_a0 = *(undefined4 *)(param_1 + 0x80);
    uStack_9c = *(undefined4 *)(param_1 + 0x84);
    uStack_98 = *(undefined4 *)(param_1 + 0x88);
    uStack_94 = *(undefined4 *)(param_1 + 0x8c);
    FUN_0886239c(param_1);
    iVar10 = 0;
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) != 0) {
      iVar10 = *(int *)(param_1 + 0x184) + 1;
    }
    *(int *)(param_1 + 0x184) = iVar10;
    if (*(int *)(param_1 + 0x3d4) == 0x1e) {
      FUN_08862a84(param_1,0xb,0,0);
    }
    fVar13 = 1.0;
    if (*(int *)(param_1 + 8) == 10) {
      fVar13 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x344);
      if (fVar13 < 100.0) {
        fVar13 = fVar13 * 0.01;
      }
      else {
        fVar13 = 1.0;
      }
    }
    FUN_088652f8(*(undefined4 *)(param_1 + 0x1c8),fVar13,param_1);
    iVar10 = 1;
    *(float *)(param_1 + 0x1c8) =
         *(float *)(param_1 + 0x1c8) + (0.5 - *(float *)(param_1 + 0x1c8)) * 0.1;
    uVar14 = *(undefined4 *)(param_1 + 0x84);
    while (local_2c = iVar10,
          fVar13 = (float)FUN_08865e10(uVar14,*(undefined4 *)(param_1 + 0x2f8),param_1,iVar10),
          *(float *)(param_1 + 0x344) <= fVar13 + *(float *)(param_1 + 0x24)) {
      iVar10 = local_2c + 1;
      if (4 < iVar10) goto LAB_08873efc;
      uVar14 = *(undefined4 *)(param_1 + 0x84);
    }
    pauVar11 = (undefined (*) [16])(param_1 + 0x350);
    auVar4._12_4_ = DAT_08b001ac;
    auVar4._8_4_ = DAT_08b001a8;
    auVar4._4_4_ = DAT_08b001a4;
    auVar4._0_4_ = DAT_08b001a0;
    auVar4 = vsub_q(auVar4,*pauVar11);
    auVar4 = vscl_q(auVar4,1.0 / (float)(local_2c + 1));
    auVar4 = vadd_q(*pauVar11,auVar4);
    *(int *)*pauVar11 = auVar4._0_4_;
    *(int *)(param_1 + 0x354) = auVar4._4_4_;
    *(int *)(param_1 + 0x358) = auVar4._8_4_;
    *(int *)(param_1 + 0x35c) = auVar4._12_4_;
LAB_08873efc:
    iVar10 = FUN_088604f4(param_1);
    if (iVar10 == 0) {
      fVar13 = *(float *)(param_1 + 0x84);
    }
    else {
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0x3f000000;
      FUN_0884c25c(0x1e,&local_90);
      fVar13 = *(float *)(param_1 + 0x84);
    }
    if (0.0 <= fVar13) break;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + -1;
    }
    iVar10 = FUN_088604f4(param_1);
    if (iVar10 != 0) {
      FUN_088706f0(param_1,6,0);
      break;
    }
    if ((*(uint *)(param_1 + 0x144) & 0x20) == 0) {
      iVar10 = *(int *)(param_1 + 0x3d0);
    }
    else if (*(char *)(param_1 + 0x4c1) == '\0') {
      if ((*(uint *)(param_1 + 0x16c) & 0x4012) != 0) {
        if (*(int *)(param_1 + 0x1dc) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x50) = 5;
          *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x54) = 10;
          *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xffffffed;
          FUN_088706f0(param_1,0x17,0);
          iVar10 = *(int *)(param_1 + 0x20c);
          *(undefined4 *)(iVar10 + 0x148) = 8;
          *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
        }
        break;
      }
      iVar10 = *(int *)(param_1 + 0x3d0);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x3d0);
    }
    if (iVar10 < 0x97) {
      if (*(float *)(param_1 + 0x344) <=
          *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x84) * 0.8) {
        if ((*(uint *)(param_1 + 0x144) & 0x80000000) != 0x80000000) break;
        goto LAB_08874060;
      }
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
    else {
LAB_08874060:
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
    FUN_088716bc(param_1,0,0);
    break;
  case 1:
    iVar10 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar10 + 0x148) = 0x10;
    *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    iVar10 = FUN_089df684(0x3eb33333,param_1,*(undefined4 *)(param_1 + 0x1bc));
    if ((iVar10 != 0) && (*(int *)(param_1 + 0x3d0) == 0)) {
      FUN_088716bc(param_1,0,0);
      *(undefined4 *)(param_1 + 0x3d0) = 1;
    }
    iVar10 = FUN_089df684(0x3f333333,param_1);
    if (iVar10 != 0) {
      *(undefined4 *)(param_1 + 0x3d0) = 1;
      uVar14 = 0xf6;
      if ((*(int *)(param_1 + 0x1b8) == 0x10000000) && (*(int *)(param_1 + 0x1bc) == 0)) {
        uVar14 = 0xf8;
      }
      FUN_088608d8(0x3e4ccccd,param_1,uVar14,0,0);
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    }
    uVar14 = FUN_08863b94(0x3f733333,param_1);
    auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar14);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    break;
  case 2:
    iVar10 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar10 + 0x148) = 0x10;
    *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    bVar2 = (*(uint *)(param_1 + 0x16c) & 0x17) != 0;
    iVar10 = FUN_088604f4(param_1);
    if (iVar10 == 0) {
      if (*(int *)(param_1 + 0x660) == 0) {
        cVar1 = *(char *)(param_1 + 0x4c1);
      }
      else {
        if (*(char *)(param_1 + 0x4c1) != '\0') {
          FUN_088706f0(param_1,0x15,0);
          break;
        }
        cVar1 = *(char *)(param_1 + 0x4c1);
      }
      pauVar12 = (undefined (*) [12])(param_1 + 0x80);
      if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0xb0) | bVar2) != 0)) {
        iVar10 = 0xf9;
        if ((*(int *)(param_1 + 0x1b8) == 0x10000000) && (*(int *)(param_1 + 0x1bc) == 0)) {
          iVar10 = 0xfa;
        }
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
        if ((bVar2) && ((*(uint *)(param_1 + 0x16c) & 0x2000) != 0)) {
          *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(*(int *)(param_1 + 0x168) + 4);
          if (iVar10 == 0xf9) {
            iVar10 = 0x1a;
          }
          *(undefined4 *)(param_1 + 0x3cc) = 5;
          uVar14 = vmul_s(*(undefined4 *)(param_1 + 0x3dc),in_V7C);
          auVar4 = vrot_q(uVar14,1,0,2,0);
          auVar3 = vscl_t(auVar4._0_12_,0x42000000);
          *(int *)*pauVar12 = auVar3._0_4_;
          *(int *)(param_1 + 0x84) = auVar3._4_4_;
          *(int *)(param_1 + 0x88) = auVar3._8_4_;
          *(int *)(param_1 + 0x8c) = auVar4._12_4_;
          *(undefined4 *)(param_1 + 0x84) = 0x41880000;
          *(undefined4 *)(param_1 + 0x3d0) = 0;
        }
        FUN_088608d8(0,param_1,iVar10,0,0);
      }
      uVar14 = FUN_08863b94(0x3f59999a,param_1);
      auVar3 = vscl_t(*pauVar12,uVar14);
      *(int *)*pauVar12 = auVar3._0_4_;
      *(int *)(param_1 + 0x88) = auVar3._8_4_;
    }
    else {
      FUN_088706f0(param_1,6,0);
    }
    break;
  case 3:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    iVar10 = FUN_089df684(0x3f4ccccd,param_1);
    if (iVar10 != 0) {
      iVar10 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar10 + 0x148) = 10;
      *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
      FUN_088706f0(param_1,0,0);
    }
    uVar14 = FUN_08863b94(0x3f59999a,param_1);
    auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar14);
    *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    break;
  case 4:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0) {
      iVar10 = *(int *)(param_1 + 0x3d0);
      *(int *)(param_1 + 0x3d0) = iVar10 + 1;
      if (0xc < iVar10) {
        iVar10 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar10 + 0x148) = 10;
        *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
      }
      FUN_088706f0(param_1,0,0);
      uVar14 = FUN_08863b94(0x3f59999a,param_1);
      auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar14);
      *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
      *(int *)(param_1 + 0x88) = auVar3._8_4_;
    }
    break;
  case 5:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    if (*(float *)(param_1 + 0x84) < 0.0) {
      iVar10 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar10 + 0x148) = 10;
      *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
      FUN_088608d8(0x3e4ccccd,param_1,0x1b,0,0);
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    }
    break;
  case 6:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    FUN_08888740(param_1 + 0x434,2);
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0) {
      FUN_088608d8(0x3e4ccccd,param_1,0x1c,0,0);
      iVar10 = *(int *)(param_1 + 0x3d0);
      *(int *)(param_1 + 0x3d0) = iVar10 + 1;
      if (0xc < iVar10) {
        iVar10 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar10 + 0x148) = 10;
        *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) | 1;
        FUN_088706f0(param_1,0,0);
      }
      uVar14 = FUN_08863b94(0x3f59999a,param_1);
      auVar3 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar14);
      *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar3._0_4_;
      *(int *)(param_1 + 0x88) = auVar3._8_4_;
    }
    break;
  case 0xffffffff:
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | *(uint *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + 1;
    iVar10 = FUN_088718a4(param_1);
    pauVar12 = (undefined (*) [12])(param_1 + 0x80);
    if ((iVar10 == 0) && (fVar13 = (float)vdot_t(*pauVar12,*pauVar12), 64.0 < fVar13)) {
      uVar14 = 3;
      if ((*(uint *)(param_1 + 0x3d4) & 1) != 0) {
        uVar14 = 2;
      }
      FUN_08864e14(0x42200000,0x40000000,param_1,uVar14);
    }
    uVar14 = FUN_08863b94(0x3f666666,param_1);
    auVar3 = vscl_t(*pauVar12,uVar14);
    *(int *)*pauVar12 = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    uVar14 = vzero_s();
    auVar5._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = *(undefined4 *)*pauVar12;
    auVar3._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar3._4_4_ = uVar14;
    auVar3._0_4_ = *(undefined4 *)*pauVar12;
    fVar13 = (float)vdot_t(auVar5,auVar3);
    if (fVar13 < 225.0) {
      FUN_088716bc(param_1,0,1);
    }
  }
  FUN_089dedf8(param_1,&local_b0,"Bip01");
  *(undefined4 *)(param_1 + 0x3f0) = local_b0;
  *(undefined4 *)(param_1 + 0x3f4) = uStack_ac;
  *(undefined4 *)(param_1 + 0x3f8) = uStack_a8;
  *(undefined4 *)(param_1 + 0x3fc) = uStack_a4;
  if (((*(uint *)(param_1 + 0x3d4) & 3) == 0) && (*(int *)(param_1 + 0x3cc) == 1)) {
    uVar14 = vzero_s();
    auVar6._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar6._4_4_ = uVar14;
    auVar6._0_4_ = *(undefined4 *)(param_1 + 0x80);
    auVar7._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar7._4_4_ = uVar14;
    auVar7._0_4_ = *(undefined4 *)(param_1 + 0x80);
    fVar13 = (float)vdot_t(auVar6,auVar7);
    if (1.0 < fVar13) {
      iVar10 = FUN_0885fcf8(param_1);
      if (iVar10 == 0) {
        auVar8._8_4_ = 0x42a00000;
        auVar8._0_8_ = 0x42a00000;
        auVar3 = vrndf1_t();
        vpfxt(5,5,5,3);
        auVar3 = vsub_t(auVar3,auVar3);
        auVar3 = vmul_t(auVar8,auVar3);
        auVar9._8_4_ = 0x42200000;
        auVar9._0_8_ = 0x42200000;
        auVar3 = vsub_t(auVar3,auVar9);
        local_80 = auVar3._0_4_;
        uStack_7c = auVar3._4_4_;
        uStack_78 = auVar3._8_4_;
        uVar14 = 3;
        if ((0xb < DAT_08abd488) && (DAT_08abd488 < 0x10)) {
          uVar14 = 8;
        }
        local_64 = *(undefined4 *)(param_1 + 0x34c);
        auVar3 = vadd_t(*(undefined (*) [12])(param_1 + 0x340),auVar3);
        local_70 = auVar3._0_4_;
        local_6c = auVar3._4_4_;
        local_68 = auVar3._8_4_;
        FUN_08823f5c(DAT_08ac5c70,uVar14,&local_70);
      }
      else {
        FUN_08862a84(param_1,4,0,0);
      }
    }
  }
  return;
}

