#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a16dbc(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                 undefined (*param_5) [16],uint param_6)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined (*pauVar14) [16];
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_V06;
  undefined4 uVar20;
  undefined4 in_V0A;
  undefined4 uVar21;
  undefined4 in_V0B;
  undefined4 uVar22;
  undefined4 in_V0E;
  undefined4 in_V0F;
  undefined auVar9 [12];
  
  if (param_2 == 0) {
    return;
  }
  if (param_5 == (undefined (*) [16])0x0) {
    return;
  }
  uVar16 = param_3 - 0x48;
  if ((5 < uVar16) && (param_3 != 0xe1)) {
    if (param_3 == 0x43) {
      if ((param_6 != *(ushort *)(param_2 + 0x1a)) &&
         (FUN_08a15ad4(param_2,&DAT_08aa5310,param_6), param_6 != *(ushort *)(param_2 + 0x1a))) {
        return;
      }
      iVar15 = *(int *)(param_2 + 0xc);
    }
    else {
      if (param_3 < 0x44) {
        if (param_3 != 0x42) {
          return;
        }
        *(int *)(param_2 + 0x24) = (int)(*(float *)*param_5 + 0.5);
        return;
      }
      if (param_3 == 0x47) {
        iVar15 = *(int *)(param_2 + 0x30);
        if (iVar15 == 0) {
          FUN_08a15bb0(param_2,&DAT_08aa5240);
          iVar15 = *(int *)(param_2 + 0x30);
          if (iVar15 == 0) {
            return;
          }
          *(ushort *)(param_2 + 0x42) = *(ushort *)(param_2 + 0x42) | 0x10;
        }
        else {
          *(ushort *)(param_2 + 0x42) = *(ushort *)(param_2 + 0x42) | 0x10;
        }
      }
      else {
        if (param_3 != 0x4f) {
          return;
        }
        iVar15 = param_2 + 0x28;
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x40000;
      }
    }
    FUN_08a13dec(param_1,iVar15,iVar15,param_5,param_6);
    return;
  }
  if (6 < (int)uVar16) {
    uVar16 = 6;
  }
  iVar15 = uVar16 * 5;
  pauVar14 = (undefined (*) [16])((uint)(byte)(&UNK_08aa5330)[iVar15] + param_2);
  uVar17 = *(undefined4 *)*param_5;
  uVar19 = *(undefined4 *)(*param_5 + 4);
  uVar20 = *(undefined4 *)(*param_5 + 8);
  uVar22 = *(undefined4 *)(*param_5 + 0xc);
  if (param_3 - 0x49U < 2) {
    uVar17 = vcst_s(6);
    auVar3 = vscl_t(*(undefined (*) [12])*param_5,uVar17);
    uVar17 = vcos_s(auVar3._0_4_);
    uVar19 = vsin_s(auVar3._0_4_);
    in_V06 = vcos_s(auVar3._4_4_);
    uVar20 = vsin_s(auVar3._4_4_);
    in_V0A = vcos_s(auVar3._8_4_);
    in_V0B = vsin_s(auVar3._8_4_);
    uVar2 = vmul_p(CONCAT44(uVar19,uVar17),CONCAT44(uVar20,in_V06));
    auVar3._8_4_ = in_V0A;
    auVar3._4_4_ = in_V06;
    auVar3._0_4_ = uVar17;
    auVar4._8_4_ = in_V0A;
    auVar4._4_4_ = in_V06;
    auVar4._0_4_ = uVar17;
    auVar3 = vcrs_t(auVar3,auVar4);
    auVar8._8_4_ = in_V0B;
    auVar8._4_4_ = uVar20;
    auVar8._0_4_ = uVar19;
    auVar9._8_4_ = in_V0B;
    auVar9._4_4_ = uVar20;
    auVar9._0_4_ = uVar19;
    auVar4 = vcrs_t(auVar8,auVar9);
    uVar2 = vmul_p(uVar2,CONCAT44(in_V0B,in_V0A));
    auVar10._8_4_ = in_V0B;
    auVar10._4_4_ = uVar20;
    auVar10._0_4_ = uVar19;
    auVar3 = vmul_t(auVar3,auVar10);
    auVar11._8_4_ = in_V0A;
    auVar11._4_4_ = in_V06;
    auVar11._0_4_ = uVar17;
    auVar4 = vmul_t(auVar4,auVar11);
    vpfxt(0,0x11,0x12,3);
    if (param_3 == 0x49) {
      vpfxt(0x10,1,0x12,3);
    }
    auVar1._12_4_ = (int)uVar2;
    auVar1._8_4_ = auVar3._8_4_;
    auVar1._4_4_ = auVar3._4_4_;
    auVar1._0_4_ = auVar3._0_4_;
    auVar5._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    auVar5._8_4_ = auVar4._8_4_;
    auVar5._4_4_ = auVar4._4_4_;
    auVar5._0_4_ = auVar4._0_4_;
    auVar5 = vadd_q(auVar1,auVar5);
    uVar17 = auVar5._0_4_;
    uVar19 = auVar5._4_4_;
    uVar20 = auVar5._8_4_;
    uVar22 = auVar5._12_4_;
  }
  else if (param_3 != 0x4b) {
    auVar5 = vmov_q(*param_5);
    auVar5 = vsub_q(auVar5,*pauVar14);
    auVar5 = vscl_q(auVar5,param_1);
    auVar5 = vadd_q(*pauVar14,auVar5);
    uVar17 = auVar5._0_4_;
    uVar19 = auVar5._4_4_;
    uVar20 = auVar5._8_4_;
    uVar22 = auVar5._12_4_;
    goto LAB_08a16e68;
  }
  auVar6._12_4_ = uVar22;
  auVar6._8_4_ = uVar20;
  auVar6._4_4_ = uVar19;
  auVar6._0_4_ = uVar17;
  auVar6 = vmov_q(auVar6);
  uVar19 = vcst_s(3);
  uVar17 = vfim_s(0x3bfc);
  vpfxd(4,1,1,1);
  uVar18 = vdot_q(*pauVar14,auVar6);
  auVar1 = vsub_q(auVar6,*pauVar14);
  auVar5 = vadd_q(auVar6,*pauVar14);
  vpfxs(0,0,8,0);
  vpfxt(0,0x10,1,4);
  auVar12._12_4_ = in_V0E;
  auVar12._8_4_ = in_V0A;
  auVar12._4_4_ = in_V06;
  auVar12._0_4_ = uVar18;
  auVar7._12_4_ = in_V0F;
  auVar7._8_4_ = in_V0B;
  auVar7._4_4_ = uVar19;
  auVar7._0_4_ = uVar17;
  uVar16 = vcmp_q(2,auVar12,auVar7);
  uVar17 = vmul_s(uVar18,uVar18);
  vpfxs(0x10,0x11,0x12,0x13);
  auVar7 = vcmovt_q(auVar6,(byte)(uVar16 >> 3) & 1);
  auVar1 = vscl_q(auVar1,param_1);
  auVar6 = vscl_q(auVar5,param_1);
  uVar21 = vocp_s(uVar17);
  auVar5 = vadd_q(*pauVar14,auVar1);
  uVar17 = auVar5._0_4_;
  uVar19 = auVar5._4_4_;
  uVar20 = auVar5._8_4_;
  uVar22 = auVar5._12_4_;
  if ((uVar16 & 1) != 0) {
    auVar5 = vsub_q(*pauVar14,auVar6);
    uVar17 = auVar5._0_4_;
    uVar19 = auVar5._4_4_;
    uVar20 = auVar5._8_4_;
    uVar22 = auVar5._12_4_;
    if ((uVar16 >> 1 & 1) == 0) {
      uVar19 = vasin_s(uVar18);
      uVar20 = vsqrt_s(uVar21);
      uVar17 = vocp_s(param_1);
      vpfxs(8,0,0,0);
      uVar19 = vocp_s(uVar19);
      if ((uVar16 >> 2 & 1) == 0) {
        uVar19 = vasin_s(uVar20);
      }
      uVar2 = vscl_p(CONCAT44(param_1,uVar17),uVar19);
      uVar17 = vsin_s(uVar19);
      uVar19 = vsin_s((int)uVar2);
      uVar22 = vsin_s((int)((ulonglong)uVar2 >> 0x20));
      uVar18 = vrcp_s(uVar17);
      uVar17 = vdot_p(CONCAT44(auVar7._0_4_,*(undefined4 *)*pauVar14),CONCAT44(uVar22,uVar19));
      uVar20 = vdot_p(CONCAT44(auVar7._4_4_,*(undefined4 *)(*pauVar14 + 4)),CONCAT44(uVar22,uVar19))
      ;
      uVar21 = vdot_p(CONCAT44(auVar7._8_4_,*(undefined4 *)(*pauVar14 + 8)),CONCAT44(uVar22,uVar19))
      ;
      uVar19 = vdot_p(CONCAT44(auVar7._12_4_,*(undefined4 *)(*pauVar14 + 0xc)),
                      CONCAT44(uVar22,uVar19));
      auVar13._12_4_ = uVar19;
      auVar13._8_4_ = uVar21;
      auVar13._4_4_ = uVar20;
      auVar13._0_4_ = uVar17;
      auVar5 = vscl_q(auVar13,uVar18);
      uVar17 = auVar5._0_4_;
      uVar19 = auVar5._4_4_;
      uVar20 = auVar5._8_4_;
      uVar22 = auVar5._12_4_;
    }
  }
LAB_08a16e68:
  *(undefined4 *)*pauVar14 = uVar17;
  *(undefined4 *)(*pauVar14 + 4) = uVar19;
  *(undefined4 *)(*pauVar14 + 8) = uVar20;
  *(undefined4 *)(*pauVar14 + 0xc) = uVar22;
  *(ushort *)(param_2 + 0x42) =
       ~(ushort)(byte)(&UNK_08aa5331)[iVar15] & *(ushort *)(param_2 + 0x42) |
       (ushort)(byte)(&UNK_08aa5332)[iVar15];
  return;
}

