#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08899b0c(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined (*pauVar12) [16];
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined auStack_a0 [4];
  float local_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float local_84;
  undefined auStack_80 [52];
  float local_4c;
  int local_38;
  
  if (*(int *)(param_1 + 0x57c) == 0) {
    return 1;
  }
  iVar8 = FUN_0884df98();
  if (iVar8 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x6a4) < 0x17) {
    *(undefined4 *)(param_1 + 0x1c4) = 4;
  }
  iVar8 = *(int *)(param_1 + 0x6a4);
  if (200 < iVar8) {
    if (iVar8 < 0xd2) {
      if (iVar8 < 0xca) goto LAB_0889aa1c;
      iVar8 = *(int *)(param_1 + 0x6a8);
    }
    else {
      if (iVar8 < 0xd3) {
        *(undefined4 *)(param_1 + 0x6a4) = 1;
        return 0;
      }
      iVar8 = *(int *)(param_1 + 0x6a8);
    }
    goto LAB_0889a8dc;
  }
  switch(iVar8) {
  case 0:
    bVar7 = false;
    if (*(char *)(*(int *)(param_1 + 0x168) + 0xc) == '\0') {
      puVar9 = (undefined4 *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20c) != 0) {
        iVar8 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar8 + 0x148) = 0xffffffff;
        *(uint *)(iVar8 + 0x130) = *(uint *)(iVar8 + 0x130) | 1;
      }
      local_c0 = *puVar9;
      uStack_b8 = *(undefined4 *)(param_1 + 0x28);
      uStack_b4 = *(undefined4 *)(param_1 + 0x2c);
      local_bc = *(float *)(param_1 + 0x24) + 1000.0;
      FUN_0889d57c(&local_c0,&local_c0);
      *puVar9 = local_c0;
      *(float *)(param_1 + 0x24) = local_bc;
      *(undefined4 *)(param_1 + 0x28) = uStack_b8;
      *(undefined4 *)(param_1 + 0x2c) = uStack_b4;
      *(undefined4 *)(param_1 + 0x690) = *puVar9;
      *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x2c);
      local_bc = local_bc + 150.0;
      *(undefined4 *)(param_1 + 0x680) = local_c0;
      *(float *)(param_1 + 0x684) = local_bc;
      *(undefined4 *)(param_1 + 0x688) = uStack_b8;
      *(undefined4 *)(param_1 + 0x68c) = uStack_b4;
      FUN_088706f0(param_1,0xf,0);
      iVar8 = FUN_089c9b48(5,DAT_08ac58c8);
      if (((iVar8 != 0) && (*(int *)(param_1 + 0x678) != 0)) &&
         ((*(int *)(param_1 + 8) == 10 || (bVar7 = true, *(int *)(param_1 + 8) == 2)))) {
        FUN_088b7fd8(0,*(undefined4 *)(param_1 + 0x678),0,0,1);
        FUN_089df450(0x3f800000,*(undefined4 *)(param_1 + 0x678));
        FUN_089dfc04(*(undefined4 *)(param_1 + 0x678));
        FUN_089dfdb0(*(undefined4 *)(param_1 + 0x678));
        iVar8 = *(int *)(*(int *)(param_1 + 0x678) + 0x14);
        (**(code **)(iVar8 + 0x34))(0,*(int *)(param_1 + 0x678) + (int)*(short *)(iVar8 + 0x30));
        bVar7 = true;
      }
      if (bVar7) {
        bVar7 = false;
        if ((((*(char *)(param_1 + 0x6bc) == '\0') && (0x14 < *(uint *)(param_1 + 8))) &&
            (*(uint *)(param_1 + 8) < 0x21)) &&
           ((*(int *)(param_1 + 8) != 0x20 && (iVar8 = FUN_089c9b48(3,DAT_08ac58c8), iVar8 == 0))))
        {
          bVar7 = true;
        }
        if (bVar7) {
          *(undefined4 *)(param_1 + 0x6a4) = 200;
        }
        else {
          *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x6a4) = 0x13;
        *(undefined4 *)(param_1 + 0x6a8) = 3;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x80) = in_V72;
        *(undefined4 *)(param_1 + 0x84) = in_V76;
        *(undefined4 *)(param_1 + 0x88) = in_V7A;
        *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      }
    }
    break;
  case 1:
    *(undefined4 *)(*(int *)(param_1 + 0x678) + 0x6c) = 0x3f800000;
    iVar8 = *(int *)(*(int *)(param_1 + 0x678) + 0x130);
    fVar13 = 1.570796 - *(float *)(param_1 + 0x34);
    local_a8 = 0x3f800000;
    local_ac = 0x3f800000;
    local_b0 = 0x3f800000;
    local_a4 = 0;
    if (3.141593 < fVar13) {
      fVar13 = fVar13 - 6.283185;
    }
    else if (fVar13 <= -3.141593) {
      fVar13 = fVar13 + 6.283185;
    }
    auVar3 = vmidt_q();
    uVar14 = vmov_s(0x3f800000);
    uVar15 = vmov_s(0x3f800000);
    uVar16 = vmov_s(0x3f800000);
    uVar10 = vmul_s(fVar13,in_V7C);
    auVar4 = vrot_q(uVar10,1,0,3,0);
    auVar1 = vidt_q();
    auVar5 = vrot_q(uVar10,2,0,1,0);
    auVar2 = vidt_q();
    auVar6._60_4_ = auVar3._60_4_;
    auVar6._56_4_ = auVar3._44_4_;
    auVar6._52_4_ = auVar3._28_4_;
    auVar6._48_4_ = auVar3._12_4_;
    auVar6._44_4_ = auVar3._56_4_;
    auVar6._40_4_ = uVar16;
    auVar6._36_4_ = auVar3._24_4_;
    auVar6._32_4_ = auVar3._8_4_;
    auVar6._28_4_ = auVar3._52_4_;
    auVar6._24_4_ = auVar3._36_4_;
    auVar6._20_4_ = uVar15;
    auVar6._16_4_ = auVar3._4_4_;
    auVar6._12_4_ = auVar3._48_4_;
    auVar6._8_4_ = auVar3._32_4_;
    auVar6._4_4_ = auVar3._16_4_;
    auVar6._0_4_ = uVar14;
    auVar3._48_16_ = auVar2;
    auVar3._44_4_ = auVar5._12_4_;
    auVar3._40_4_ = auVar5._8_4_;
    auVar3._36_4_ = auVar5._4_4_;
    auVar3._32_4_ = auVar5._0_4_;
    auVar3._28_4_ = auVar1._12_4_;
    auVar3._24_4_ = auVar1._8_4_;
    auVar3._20_4_ = auVar1._4_4_;
    auVar3._16_4_ = auVar1._0_4_;
    auVar3._12_4_ = auVar4._12_4_;
    auVar3._8_4_ = auVar4._8_4_;
    auVar3._4_4_ = auVar4._4_4_;
    auVar3._0_4_ = auVar4._0_4_;
    auVar3 = vmmul_q(auVar6,auVar3);
    *(int *)(iVar8 + 0x80) = auVar3._0_4_;
    *(int *)(iVar8 + 0x84) = auVar3._4_4_;
    *(int *)(iVar8 + 0x88) = auVar3._8_4_;
    *(int *)(iVar8 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar8 + 0x90) = auVar3._16_4_;
    *(int *)(iVar8 + 0x94) = auVar3._20_4_;
    *(int *)(iVar8 + 0x98) = auVar3._24_4_;
    *(int *)(iVar8 + 0x9c) = auVar3._28_4_;
    *(int *)(iVar8 + 0xa0) = auVar3._32_4_;
    *(int *)(iVar8 + 0xa4) = auVar3._36_4_;
    *(int *)(iVar8 + 0xa8) = auVar3._40_4_;
    *(int *)(iVar8 + 0xac) = auVar3._44_4_;
    *(int *)(iVar8 + 0xb0) = auVar3._48_4_;
    *(int *)(iVar8 + 0xb4) = auVar3._52_4_;
    *(int *)(iVar8 + 0xb8) = auVar3._56_4_;
    *(int *)(iVar8 + 0xbc) = auVar3._60_4_;
    iVar8 = *(int *)(param_1 + 0x678);
    iVar11 = *(int *)(iVar8 + 0x130);
    uVar10 = *(undefined4 *)(param_1 + 0x684);
    uVar14 = *(undefined4 *)(param_1 + 0x688);
    uVar15 = *(undefined4 *)(param_1 + 0x68c);
    *(undefined4 *)(iVar11 + 0xb0) = *(undefined4 *)(param_1 + 0x680);
    *(undefined4 *)(iVar11 + 0xb4) = uVar10;
    *(undefined4 *)(iVar11 + 0xb8) = uVar14;
    *(undefined4 *)(iVar11 + 0xbc) = uVar15;
    uVar10 = *(undefined4 *)(iVar11 + 0xb4);
    uVar14 = *(undefined4 *)(iVar11 + 0xb8);
    uVar15 = *(undefined4 *)(iVar11 + 0xbc);
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar11 + 0xb0);
    *(undefined4 *)(iVar8 + 0x24) = uVar10;
    *(undefined4 *)(iVar8 + 0x28) = uVar14;
    *(undefined4 *)(iVar8 + 0x2c) = uVar15;
    FUN_088b87bc(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x678));
    if (*(int *)(param_1 + 8) == 0x17) {
      *(undefined4 *)(*(int *)(param_1 + 0x678) + 0x30) = 0x40490fdb;
      *(undefined4 *)(*(int *)(param_1 + 0x678) + 0x38) = 0x40490fdb;
    }
    iVar8 = FUN_0884b248();
    if (iVar8 == 0) {
LAB_0889a044:
      iVar8 = *(int *)(param_1 + 0x6a4);
    }
    else {
      iVar8 = FUN_089c9b48(5,DAT_08ac58c8);
      if (iVar8 == 0) {
        iVar8 = *(int *)(param_1 + 0x6a4);
      }
      else if (*(char *)(param_1 + 0x6b0) == '\0') {
        iVar8 = *(int *)(param_1 + 0x6a4);
      }
      else {
        uVar10 = FUN_0884b268();
        FUN_0884dcb0(0x43c80000,0,0x41f00000,uVar10,*(undefined4 *)(param_1 + 0x678),1,0,0);
        if ((*(int *)(param_1 + 8) != 10) && (*(int *)(param_1 + 8) != 2)) {
          uVar10 = FUN_0884b268();
          FUN_0884dcb0(0x428c0000,0,0x41500000,uVar10,*(undefined4 *)(param_1 + 0x678),0,0,0);
          goto LAB_0889a044;
        }
        uVar10 = FUN_0884b268();
        FUN_0884dcb0(0x43480000,0x42700000,0x41500000,uVar10,*(undefined4 *)(param_1 + 0x678),0,0,0)
        ;
        iVar8 = *(int *)(param_1 + 0x6a4);
      }
    }
    *(undefined4 *)(param_1 + 0x6a8) = 0x14;
    *(int *)(param_1 + 0x6a4) = iVar8 + 1;
  case 2:
    iVar8 = *(int *)(param_1 + 0x6a8) + -1;
    *(int *)(param_1 + 0x6a8) = iVar8;
    if (iVar8 < 1) {
      iVar8 = FUN_089c9b48(5,DAT_08ac58c8);
      if ((iVar8 == 0) || (*(char *)(param_1 + 0x6b0) == '\0')) {
        iVar8 = FUN_089bffd4();
        if (iVar8 != 0) {
          uVar10 = FUN_089bfff0();
          FUN_089c00c4(uVar10,0xb,param_1 + 0x20,0,1);
        }
      }
      else {
        iVar8 = FUN_089c59d4();
        if (iVar8 != 0) {
          uVar10 = FUN_089c59f0();
          FUN_089c6350(uVar10,0xb,0,0);
        }
      }
      FUN_088b7fd8(0x3e4ccccd,*(undefined4 *)(param_1 + 0x678),0,0,1);
      iVar8 = *(int *)(*(int *)(param_1 + 0x678) + 0x14);
      (**(code **)(iVar8 + 0x34))
                (0x3f800000,*(int *)(param_1 + 0x678) + (int)*(short *)(iVar8 + 0x30));
      switch(*(undefined4 *)(param_1 + 8)) {
      case 1:
      case 2:
      case 5:
      case 6:
      case 0x12:
        iVar8 = *(int *)(*(int *)(param_1 + 0x678) + 0x14);
        (**(code **)(iVar8 + 0x34))
                  (0x3f000000,*(int *)(param_1 + 0x678) + (int)*(short *)(iVar8 + 0x30));
        break;
      case 0x15:
        iVar8 = *(int *)(*(int *)(param_1 + 0x678) + 0x14);
        (**(code **)(iVar8 + 0x34))
                  (0x3f4ccccd,*(int *)(param_1 + 0x678) + (int)*(short *)(iVar8 + 0x30));
      }
      *(undefined4 *)(param_1 + 0x6a8) = 0x1e;
      if (*(int *)(param_1 + 8) == 0) {
        iVar8 = *(int *)(param_1 + 0x6a4);
      }
      else if (*(uint *)(param_1 + 8) < 0x21) {
        *(undefined4 *)(param_1 + 0x6a8) =
             *(undefined4 *)(&DAT_08a812e8 + *(int *)(param_1 + 8) * 4);
        iVar8 = *(int *)(param_1 + 0x6a4);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x6a4);
      }
      *(int *)(param_1 + 0x6a4) = iVar8 + 1;
    }
    break;
  case 3:
    iVar8 = *(int *)(param_1 + 0x6a8) + -1;
    *(int *)(param_1 + 0x6a8) = iVar8;
    if (iVar8 < 1) {
      *(undefined4 *)(param_1 + 0x6a8) = 3;
      *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
    }
    break;
  case 4:
    iVar8 = *(int *)(param_1 + 0x6a8) + -1;
    *(int *)(param_1 + 0x6a8) = iVar8;
    if (0 < iVar8) {
      return 0;
    }
    iVar8 = FUN_0884b248();
    if (((iVar8 != 0) && (iVar8 = FUN_089c9b48(5,DAT_08ac58c8), iVar8 != 0)) &&
       (*(char *)(param_1 + 0x6b0) != '\0')) {
      if (*(int *)(param_1 + 8) == 0xf) {
        fVar13 = 450.0;
      }
      else if (*(int *)(param_1 + 8) == 0x20) {
        fVar13 = 500.0;
      }
      else {
        fVar13 = *(float *)(&DAT_08a80f30 + *(int *)(param_1 + 8) * 0x1c) *
                 *(float *)(*(int *)(param_1 + 0x4bc) + 0xdc);
      }
      uVar10 = FUN_0884b268();
      FUN_0884dcb0(fVar13,0x42c80000,0x42200000,uVar10,param_1,0,0,0);
    }
    if (DAT_08aba784 != DAT_08abd110) {
      iVar8 = FUN_089c9b48(5,DAT_08ac58c8);
      if ((iVar8 == 0) || (*(char *)(param_1 + 0x6b0) == '\0')) {
        iVar8 = FUN_089bffd4();
        if (iVar8 != 0) {
          uVar10 = FUN_089bfff0();
          FUN_089c00c4(uVar10,0x200012,param_1 + 0x20,0,1);
        }
      }
      else {
        iVar8 = FUN_089c59d4();
        if (iVar8 != 0) {
          uVar10 = FUN_089c59f0();
          FUN_089c6350(uVar10,0x200012,0,0);
        }
      }
    }
    DAT_08abd110 = DAT_08aba784;
    *(undefined4 *)(param_1 + 0x6a4) = 0x13;
    *(undefined4 *)(param_1 + 0x6a8) = 3;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  case 0x13:
    iVar8 = *(int *)(param_1 + 0x6a8) + -1;
    *(int *)(param_1 + 0x6a8) = iVar8;
    uVar10 = DAT_08ac5c70;
    if (iVar8 < 1) {
      iVar8 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
      FUN_088243d8(uVar10,iVar8 + 0x6a,param_1 + 0x680);
      *(float *)(param_1 + 0x24) =
           *(float *)(param_1 + 0x24) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x70);
      *(undefined4 *)(param_1 + 0x6a4) = 0x14;
      *(undefined4 *)(param_1 + 0x6a8) = 5;
    }
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    iVar8 = *(int *)(param_1 + 0x6a8);
    goto LAB_0889a8dc;
  case 0x14:
    iVar8 = *(int *)(param_1 + 0x6a8) + -1;
    *(int *)(param_1 + 0x6a8) = iVar8;
    if (iVar8 < 1) {
      if (*(int *)(param_1 + 0x678) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x678) + 0x6c) = 0;
      }
      FUN_089deeb0(param_1,auStack_a0,1);
      *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x2c);
      if (*(int *)(param_1 + 8) != 0x1f) {
        *(float *)(param_1 + 0x24) =
             *(float *)(param_1 + 0x24) - (local_9c - *(float *)(param_1 + 0x24));
      }
      iVar8 = FUN_089ded10(param_1,1);
      *(undefined4 *)(iVar8 + 0x7c) = 0;
      *(undefined4 *)(iVar8 + 0x70) = 0x3c23d70a;
      *(undefined4 *)(iVar8 + 0x74) = 0x3c23d70a;
      *(undefined4 *)(iVar8 + 0x78) = 0x3c23d70a;
      *(undefined4 *)(param_1 + 0x6ac) = 0;
      *(undefined4 *)(param_1 + 0x6a4) = 0x15;
    }
    break;
  case 0x15:
    fVar13 = *(float *)(param_1 + 0x6ac) + 0.08;
    *(float *)(param_1 + 0x6ac) = fVar13;
    uVar10 = vmul_s(fVar13 * 3.141593,in_V7C);
    local_4c = (float)vcos_s(uVar10);
    fVar13 = (1.0 - local_4c) * 0.5;
    iVar8 = FUN_089ded10(param_1,1);
    *(float *)(iVar8 + 0x70) = fVar13;
    *(float *)(iVar8 + 0x74) = fVar13;
    *(float *)(iVar8 + 0x78) = fVar13;
    *(undefined4 *)(iVar8 + 0x7c) = 0;
    puVar9 = (undefined4 *)FUN_0886642c(param_1);
    local_90 = *puVar9;
    uStack_8c = puVar9[1];
    uStack_88 = puVar9[2];
    local_84 = 1.0 - fVar13;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x24))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x20),&local_90);
    *(float *)(param_1 + 0x6c) =
         *(float *)(param_1 + 0x6c) + (1.0 - *(float *)(param_1 + 0x6c)) * 0.3;
    FUN_089deeb0(param_1,auStack_80,1);
    pauVar12 = (undefined (*) [16])(param_1 + 0x20);
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x690),*pauVar12);
    auVar1 = vscl_q(auVar1,*(undefined4 *)(param_1 + 0x6ac));
    auVar1 = vadd_q(*pauVar12,auVar1);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x24) = auVar1._4_4_;
    *(int *)(param_1 + 0x28) = auVar1._8_4_;
    *(int *)(param_1 + 0x2c) = auVar1._12_4_;
    if (*(float *)(param_1 + 0x6ac) < 1.0) {
      return 0;
    }
    iVar8 = FUN_089ded10(param_1,1);
    *(undefined4 *)(iVar8 + 0x70) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x74) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x78) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x7c) = 0;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    goto LAB_0889a654;
  case 0x16:
LAB_0889a654:
    iVar8 = FUN_089c9b48(5,DAT_08ac58c8);
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x6a4) = 100;
    }
    else {
      *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
LAB_0889a694:
      *(undefined4 *)(param_1 + 0x6a8) = 5;
      *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
switchD_08899bdc_caseD_18:
      iVar8 = *(int *)(param_1 + 0x6a8) + -1;
      *(int *)(param_1 + 0x6a8) = iVar8;
      if (iVar8 < 1) {
        *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
switchD_08899bdc_caseD_19:
        if ((*(int *)(param_1 + 8) == 0) || (0x14 < *(uint *)(param_1 + 8))) {
          *(undefined4 *)(param_1 + 0x6a8) = 10;
          *(undefined4 *)(param_1 + 0x6a4) = 100;
        }
        else {
          iVar8 = FUN_089c9b48(5,DAT_08ac58c8);
          if ((iVar8 == 0) || (*(char *)(param_1 + 0x6b0) == '\0')) {
            iVar8 = FUN_089bffd4();
            if (iVar8 != 0) {
              uVar10 = FUN_089bfff0();
              FUN_089c00c4(uVar10,*(undefined4 *)(&DAT_08a8136c + *(int *)(param_1 + 8) * 4),
                           param_1 + 0x20,0,1);
            }
          }
          else {
            iVar8 = FUN_089c59d4();
            if (iVar8 != 0) {
              uVar10 = FUN_089c59f0();
              FUN_089c6350(uVar10,*(undefined4 *)(&DAT_08a8136c + *(int *)(param_1 + 8) * 4),0,0);
            }
          }
          iVar8 = FUN_0884b268();
          *(undefined4 *)(iVar8 + 0x4e0) = 0x3f4ccccd;
          iVar8 = *(int *)(param_1 + 8);
          uVar10 = 0x10f;
          if (iVar8 < 4) {
            if (2 < iVar8) {
              uVar10 = 0x10a;
            }
          }
          else if (iVar8 == 8) {
            uVar10 = 0x31;
            (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                      (0x3f19999a,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
          }
          FUN_088608d8(0x3dcccccd,param_1,uVar10,0,1);
          *(undefined4 *)(param_1 + 0x6a8) = 0;
          *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
        }
      }
    }
    break;
  case 0x17:
    goto LAB_0889a694;
  case 0x18:
    goto switchD_08899bdc_caseD_18;
  case 0x19:
    goto switchD_08899bdc_caseD_19;
  case 0x1a:
    if ((*(char *)(param_1 + 0xb0) != '\0') ||
       (iVar8 = FUN_089df684(0x3f7d70a4,param_1), iVar8 != 0)) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
      iVar8 = FUN_0884b268();
      *(undefined4 *)(iVar8 + 0x4e0) = 0;
      *(undefined4 *)(param_1 + 0x6a8) = 5;
      *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
    }
    break;
  case 0x1b:
    iVar8 = *(int *)(param_1 + 0x6a8) + -1;
    *(int *)(param_1 + 0x6a8) = iVar8;
    if (iVar8 < 1) {
      *(undefined4 *)(param_1 + 0x6a4) = 100;
    }
    break;
  case -0x452e541f:
    iVar8 = *(int *)(param_1 + 0x6a8);
    goto LAB_0889a8dc;
  default:
    if (199 < iVar8) {
      local_38 = 0;
      FUN_089d8634();
      uVar10 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar11 = FUN_089d7d74(0x390,0,0);
      FUN_089d816c(uVar10);
      FUN_089d866c();
      iVar8 = local_38;
      if (iVar11 != 0) {
        local_d0 = *(undefined4 *)(param_1 + 0x20);
        uStack_cc = *(undefined4 *)(param_1 + 0x24);
        uStack_c8 = *(undefined4 *)(param_1 + 0x28);
        uStack_c4 = *(undefined4 *)(param_1 + 0x2c);
        uVar10 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                           (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
        FUN_088a5268(iVar11,&local_d0,uVar10);
        iVar8 = iVar11;
      }
      *(int *)(param_1 + 0x6c8) = iVar8;
      *(int *)(param_1 + 0x6a4) = *(int *)(param_1 + 0x6a4) + 1;
LAB_0889aa1c:
      iVar8 = FUN_088acd4c(*(undefined4 *)(param_1 + 0x6c8));
      if (iVar8 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x6a4) = 0xd2;
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x6a8);
LAB_0889a8dc:
    *(int *)(param_1 + 0x6a8) = iVar8 + -1;
    if (iVar8 + -1 < 0) {
      if (*(int *)(param_1 + 0x20c) != 0) {
        iVar8 = *(int *)(param_1 + 0x20c);
        *(undefined4 *)(iVar8 + 0x148) = 0;
        *(uint *)(iVar8 + 0x130) = *(uint *)(iVar8 + 0x130) & 0xfffffffe;
      }
      FUN_088706f0(param_1,0,0);
      if (*(int *)(param_1 + 0x678) != 0) {
        FUN_089de940(*(undefined4 *)(param_1 + 0x678),0);
      }
      iVar8 = FUN_0884b248();
      if ((((iVar8 != 0) && (iVar8 = FUN_089c9b48(5,DAT_08ac58c8), iVar8 != 0)) &&
          (iVar8 = FUN_088b3134(), iVar8 == 0)) &&
         (iVar8 = FUN_08860188(*(undefined4 *)(param_1 + 0x670)), iVar8 != 0)) {
        *(undefined *)(iVar8 + 0xa3e) = 1;
      }
      *(undefined4 *)(param_1 + 0x57c) = 0;
    }
  }
  return 0;
}

