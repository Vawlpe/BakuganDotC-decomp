#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885a130(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [12];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar26;
  undefined4 local_130;
  float local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint local_120;
  float local_11c;
  undefined4 uStack_118;
  uint local_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  undefined4 uStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  undefined4 uStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  iVar21 = *(int *)(*(int *)(param_1 + 0x20c) + 0x16c);
  iVar19 = 0;
  iVar16 = (**(code **)(*(int *)(param_1 + 0x14) + 0xb4))
                     (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb0));
  if (iVar16 != 0) {
    return;
  }
  iVar16 = FUN_08857608(param_1,*(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x164));
  uVar22 = atan2f(*(float *)(*(int *)(param_1 + 0x20c) + 0x158) - *(float *)(param_1 + 0x28),
                  *(float *)(*(int *)(param_1 + 0x20c) + 0x150) - *(float *)(param_1 + 0x20));
  if (iVar16 != 0) {
    local_f0 = *(undefined4 *)*(undefined (*) [12])(param_1 + 0x250);
    local_ec = *(float *)(param_1 + 0x254);
    uStack_e8 = *(undefined4 *)(param_1 + 600);
    uStack_e4 = *(undefined4 *)(param_1 + 0x25c);
    iVar16 = *(int *)(param_1 + 0x20c);
    local_100 = *(float *)(iVar16 + 0x150);
    uStack_fc = *(undefined4 *)(iVar16 + 0x154);
    fStack_f8 = *(float *)(iVar16 + 0x158);
    uStack_f4 = *(undefined4 *)(iVar16 + 0x15c);
    iVar16 = FUN_08877a54(iVar21);
    if (iVar16 != 0) {
      iVar16 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
      if (iVar16 != 0) {
        local_100 = *(float *)(iVar16 + 0x20);
        uStack_fc = *(undefined4 *)(iVar16 + 0x24);
        fStack_f8 = *(float *)(iVar16 + 0x28);
        uStack_f4 = *(undefined4 *)(iVar16 + 0x2c);
      }
      local_e0 = local_100;
      uStack_dc = uStack_fc;
      local_d8 = fStack_f8;
      uStack_d4 = uStack_f4;
      uVar22 = atan2f(fStack_f8 - *(float *)(param_1 + 0x28),local_100 - *(float *)(param_1 + 0x20))
      ;
    }
    local_ec = local_ec + 200.0;
    auVar15._4_4_ = local_ec;
    auVar15._0_4_ = local_f0;
    auVar15._8_4_ = uStack_e8;
    auVar1._4_4_ = uStack_fc;
    auVar1._0_4_ = local_100;
    auVar1._8_4_ = fStack_f8;
    auVar1 = vsub_t(auVar15,auVar1);
    local_110 = auVar1._0_4_;
    fStack_10c = auVar1._4_4_;
    uStack_108 = auVar1._8_4_;
    uStack_104 = uStack_e4;
    auVar3._4_4_ = uStack_fc;
    auVar3._0_4_ = local_100;
    auVar3._8_4_ = fStack_f8;
    auVar3._12_4_ = uStack_f4;
    auVar3 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),auVar3);
    uVar24 = vdot_t(auVar3._0_12_,auVar3._0_12_);
    fVar25 = (float)vsqrt_s(uVar24);
    if (fVar25 <= 800.0) {
      auVar6._4_4_ = 0;
      auVar6._0_4_ = local_110;
      auVar6._8_4_ = uStack_108;
      auVar5._4_4_ = 0;
      auVar5._0_4_ = local_110;
      auVar5._8_4_ = uStack_108;
      auVar4._4_4_ = 0;
      auVar4._0_4_ = local_110;
      auVar4._8_4_ = uStack_108;
      uVar24 = vdot_t(auVar4,auVar5);
      uVar26 = vcmp_s(8,uVar24,local_110);
      vrsq_s(uVar24);
      uVar24 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar6,uVar24);
      auVar14._12_4_ = in_V7D;
      auVar14._0_12_ = auVar1;
      auVar13._12_4_ = in_V7D;
      auVar13._0_12_ = auVar1;
      auVar3 = vsub_q(*(undefined (*) [16])(DAT_08ac5c90 + 0x70),auVar13);
      auVar3 = vscl_q(auVar3,0x3e19999a);
      auVar3 = vadd_q(auVar14,auVar3);
      local_120 = auVar3._0_4_;
      local_11c = auVar3._4_4_;
      uStack_118 = auVar3._8_4_;
      uVar22 = vmul_s(uVar22,in_V7C);
      auVar3 = vrot_q(uVar22,1,0,2,0);
      uStack_124 = auVar3._12_4_;
      auVar1 = vscl_t(auVar3._0_12_,0x43160000);
      auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x20c) + 0x150));
      local_130 = auVar1._0_4_;
      uStack_128 = auVar1._8_4_;
      local_12c = auVar1._4_4_ + 100.0;
    }
    else {
      local_11c = fStack_10c * 0.2;
      uVar22 = vmul_s(uVar22,in_V7C);
      auVar3 = vrot_q(uVar22,1,0,2,0);
      uStack_124 = auVar3._12_4_;
      auVar1 = vscl_t(auVar3._0_12_,0x43870000);
      auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_1 + 0x250));
      local_130 = auVar1._0_4_;
      uStack_128 = auVar1._8_4_;
      local_12c = *(float *)(*(int *)(param_1 + 0x20c) + 0x154) + 100.0 + auVar1._4_4_;
      local_120 = local_110;
      uStack_118 = uStack_108;
    }
    auVar9._4_4_ = local_11c;
    auVar9._0_4_ = local_120;
    auVar9._8_4_ = uStack_118;
    auVar8._4_4_ = local_11c;
    auVar8._0_4_ = local_120;
    auVar8._8_4_ = uStack_118;
    auVar7._4_4_ = local_11c;
    auVar7._0_4_ = local_120;
    auVar7._8_4_ = uStack_118;
    uVar22 = vdot_t(auVar7,auVar8);
    uVar24 = vcmp_s(8,uVar22,local_120);
    vrsq_s(uVar22);
    uVar22 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar9,uVar22);
    local_120 = auVar1._0_4_;
    local_11c = auVar1._4_4_;
    uStack_118 = auVar1._8_4_;
    FUN_08824024(DAT_08abd5b0,0x37,&local_130,&local_120);
    FUN_08862b64(param_1,0x20006f,0,0);
    iVar16 = *(int *)(param_1 + 0x20c);
    *(uint *)(iVar16 + 0x130) = *(uint *)(iVar16 + 0x130) | 1;
    *(undefined4 *)(iVar16 + 0x148) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x140) = 0;
    iVar16 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(iVar16 + 0x150) = local_130;
    *(float *)(iVar16 + 0x154) = local_12c;
    *(undefined4 *)(iVar16 + 0x158) = uStack_128;
    *(undefined4 *)(iVar16 + 0x15c) = uStack_124;
    return;
  }
  uVar22 = FUN_08860188(0);
  FUN_088649e4(param_1,1,uVar22,iVar21);
  iVar16 = DONE_NotZero_DAT_08AC5258();
  if (iVar16 != 0) {
    uVar22 = DONE_Get_DAT_08AC5258();
    FUN_089c00c4(uVar22,0x20001f,*(int *)(param_1 + 0x130) + 0xb0,0,1);
  }
  uStack_124 = *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x15c);
  auVar1 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),0x40800000);
  auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 0x20c) + 0x150),auVar1);
  local_130 = auVar1._0_4_;
  local_12c = auVar1._4_4_;
  uStack_128 = auVar1._8_4_;
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x20));
  uVar2 = auVar1._0_4_;
  uVar22 = auVar1._8_4_;
  auVar12._4_4_ = 0;
  auVar12._0_4_ = uVar2;
  auVar12._8_4_ = uVar22;
  auVar11._4_4_ = 0;
  auVar11._0_4_ = uVar2;
  auVar11._8_4_ = uVar22;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar2;
  auVar10._8_4_ = uVar22;
  uVar22 = vdot_t(auVar10,auVar11);
  uVar24 = vcmp_s(8,uVar22,uVar2);
  vrsq_s(uVar22);
  uVar22 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar12,uVar22);
  local_120 = auVar1._0_4_;
  local_11c = auVar1._4_4_;
  uStack_118 = auVar1._8_4_;
  local_d0 = local_130;
  uStack_cc = local_12c;
  uStack_c8 = uStack_128;
  uStack_c4 = uStack_124;
  local_c0 = local_120;
  uStack_bc = local_11c;
  uStack_b8 = uStack_118;
  FUN_08859834(param_1);
  uVar22 = *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x164);
  iVar16 = *(int *)(*(int *)(param_1 + 0x20c) + 0x164);
  if (iVar16 < 2) {
    if (0 < iVar16) {
      iVar19 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
      iVar16 = 1;
      if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
        iVar18 = 1;
        iVar20 = FUN_0884c440();
        if (iVar20 != 0) {
          iVar16 = 2;
          iVar18 = 2;
        }
        uVar24 = DONE_Get_DAT_08AAC9E0();
        iVar20 = FUN_0880d0ac(uVar24,7);
        if (iVar20 == 1) {
          iVar20 = *(int *)(iVar19 + 0x150);
          if ((*(int *)(iVar19 + 0x140) == 9) || (*(int *)(iVar19 + 0x140) == 0xb)) {
            iVar20 = *(int *)(iVar19 + 0x1b0);
          }
          else {
            iVar17 = FUN_088632f8(iVar19,iVar21);
            if (iVar17 == 0) {
              iVar18 = FUN_0884b248();
              if (iVar18 != 0) {
                FUN_0884b268();
                uVar24 = DONE_Get_DAT_08AAC9E0();
                iVar18 = FUN_0880d0ac(uVar24,2);
                if (iVar18 != 0) {
                  uVar24 = DONE_Get_DAT_08AAC9E0();
                  FUN_0880d70c(uVar24,iVar20 + 0xe,iVar16);
                }
              }
              goto LAB_0885a840;
            }
            iVar20 = *(int *)(iVar19 + 0x1b0);
          }
          if (iVar20 < iVar18 * 5) {
            *(int *)(iVar19 + 0x1b0) = *(int *)(iVar19 + 0x1b0) + iVar16;
          }
        }
      }
    }
  }
  else if (iVar16 < 3) {
    uVar24 = 1;
    iVar19 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
    iVar20 = 1;
    iVar16 = FUN_0884c440();
    if (iVar16 != 0) {
      uVar24 = 2;
      iVar20 = 2;
    }
    uVar26 = DONE_Get_DAT_08AAC9E0();
    iVar16 = FUN_0880d0ac(uVar26,7);
    if ((iVar16 < 2) && (0 < iVar16)) {
      iVar16 = *(int *)(iVar19 + 0x150);
      if (((*(uint *)(iVar19 + 0x144) & 0x80000) == 0) &&
         (((iVar18 = FUN_088632f8(iVar19,iVar21), iVar18 == 0 && (iVar21 != 0x5a)) &&
          (iVar21 != 0x59)))) {
        iVar20 = FUN_0884b248();
        if (iVar20 != 0) {
          FUN_0884b268();
          uVar26 = DONE_Get_DAT_08AAC9E0();
          iVar20 = FUN_0880d0ac(uVar26,2);
          if (iVar20 != 0) {
            uVar26 = DONE_Get_DAT_08AAC9E0();
            FUN_0880d70c(uVar26,iVar16 + 0xe,uVar24);
          }
        }
      }
      else if ((iVar21 == 0x5a) || (iVar21 == 0x59)) {
        if (*(int *)(iVar19 + 0x1b4) < iVar20) {
          FUN_088632b4(iVar19,uVar24,iVar20);
        }
      }
      else if (*(int *)(iVar19 + 0x1b4) < iVar20 * 5) {
        FUN_088632b4(iVar19,uVar24,iVar20);
      }
    }
  }
LAB_0885a840:
  iVar16 = FUN_08860188(iVar19);
  FUN_088898e4(param_1 + 0x434,iVar16,uVar22,iVar21,0,0,6);
  iVar19 = (**(code **)(*(int *)(param_1 + 0x14) + 0xb4))
                     (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb0));
  if (iVar19 != 0) {
    fVar23 = *(float *)(param_1 + 0x590);
    iVar19 = FUN_08887a90(param_1 + 0x434);
    fVar25 = (float)iVar19;
    if (iVar19 < 0) {
      fVar25 = fVar25 + 4.294967e+09;
    }
    FUN_08887ae4(fVar25 * fVar23,param_1 + 0x434);
  }
  if (iVar16 == 0) goto LAB_0885aa4c;
  FUN_08860170(iVar16,0);
  iVar19 = *(int *)(iVar16 + 8);
  if (*(int *)(iVar16 + 0x140) == 9) {
    if (6 < iVar19) {
      if (iVar19 != 0x11) goto LAB_0885a92c;
LAB_0885a924:
      *(undefined4 *)(iVar16 + 0x1a4) = 0xf;
      goto LAB_0885a990;
    }
    if (4 < iVar19) {
      if (iVar19 < 6) goto LAB_0885a924;
      *(undefined4 *)(iVar16 + 0x1a4) = 0xf;
      goto LAB_0885a990;
    }
LAB_0885a92c:
    iVar21 = FUN_088608b0(iVar16,0x94);
    if (((iVar21 != 0) || (iVar21 = FUN_088608b0(iVar16,0xa1), iVar21 != 0)) ||
       ((iVar21 = FUN_088608b0(iVar16,0x95), iVar21 != 0 ||
        (iVar21 = FUN_088608b0(iVar16,0xa0), iVar21 != 0)))) {
      if (iVar19 == 0xd) {
        *(undefined4 *)(iVar16 + 0x1a4) = 0xf;
      }
      else {
        *(undefined4 *)(iVar16 + 0x1a4) = 0;
      }
      goto LAB_0885a990;
    }
    *(int *)(iVar16 + 0x3bc) = param_1;
  }
  else {
LAB_0885a990:
    *(int *)(iVar16 + 0x3bc) = param_1;
  }
  if ((*(char *)(param_1 + 0x4c1) != '\0') &&
     (*(int *)(iVar16 + 0x588) = *(int *)(iVar16 + 0x588) + 1, *(int *)(DAT_08ac58c4 + 0x20) == 2))
  {
    uVar22 = 0x14;
    iVar19 = FUN_0884c440();
    if (iVar19 != 0) {
      uVar22 = 0x28;
    }
    uVar24 = DONE_Get_DAT_08AAC9E0();
    iVar19 = FUN_0880d0ac(uVar24,7);
    if (iVar19 == 1) {
      iVar19 = *(int *)(iVar16 + 0x150);
      iVar16 = FUN_0884b248();
      if (iVar16 != 0) {
        FUN_0884b268();
        uVar24 = DONE_Get_DAT_08AAC9E0();
        iVar16 = FUN_0880d0ac(uVar24,2);
        if (iVar16 != 0) {
          uVar24 = DONE_Get_DAT_08AAC9E0();
          FUN_0880d70c(uVar24,iVar19 + 0xe,uVar22);
        }
      }
    }
  }
LAB_0885aa4c:
  *(undefined *)(param_1 + 0x942) = 1;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  return;
}

