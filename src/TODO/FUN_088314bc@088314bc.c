#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088314bc(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  undefined (*pauVar11) [16];
  uint uVar12;
  int iVar13;
  undefined (*pauVar14) [16];
  undefined uVar15;
  float fVar16;
  float fVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 in_V74;
  undefined4 in_V7C;
  undefined auStack_170 [32];
  undefined auStack_150 [32];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  float local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  float local_98;
  float local_94;
  undefined4 local_84;
  float local_70;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined (*local_48) [16];
  float local_44;
  
  if (*(int *)(param_1 + 0x394) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x14);
  bVar3 = false;
  iVar20 = *(int *)(iVar9 + 0x19c);
  iVar22 = *(int *)(iVar9 + 0x198);
  iVar21 = *(int *)(iVar9 + 0x194);
  iVar9 = FUN_0880d354();
  if ((iVar9 != 0) && (iVar9 = DONE_NotZero_DAT_08AAC9E0(), iVar9 != 0)) {
    uVar7 = DONE_Get_DAT_08AAC9E0();
    iVar9 = FUN_0880d7e0(uVar7,0x4880);
    if (iVar9 != 0) {
      bVar3 = true;
    }
  }
  if (bVar3) {
    if (*(int *)(param_1 + 0x394) < 1) {
      iVar9 = *(int *)(param_1 + 0x394);
    }
    else {
      *(uint *)(iVar20 + 0xd0) = *(uint *)(iVar20 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar22 + 0xd0) = *(uint *)(iVar22 + 0xd0) & 0xfffffffe;
      *(uint *)(iVar21 + 0xd0) = *(uint *)(iVar21 + 0xd0) & 0xfffffffe;
      iVar9 = *(int *)(*(int *)(param_1 + 0x14) + 0x39c);
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x394) = 100;
      iVar9 = *(int *)(param_1 + 0x394);
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x394);
  }
  if (0x32 < iVar9) {
    if (99 < iVar9) {
      if (100 < iVar9) {
        return;
      }
      goto LAB_08832728;
    }
    if (0x33 < iVar9) {
      return;
    }
LAB_08832624:
    iVar9 = *(int *)(param_1 + 0x4bc);
    fVar17 = 1.570796;
    *(int *)(param_1 + 0x4bc) = iVar9 + 1;
    fVar23 = (float)iVar9 * 0.05 * 1.570796;
    if (fVar23 < 0.0) {
      fVar17 = 0.0;
    }
    else if (fVar23 <= 1.570796) {
      fVar17 = fVar23;
    }
    uVar7 = vmul_s(fVar17,in_V7C);
    fVar17 = (float)vsin_s(uVar7);
    local_d0 = 0x3f800000;
    local_cc = 0x3f800000;
    local_c8 = 0x3f800000;
    local_c4 = fVar17;
    local_70 = fVar17;
    iVar9 = FUN_0884b268();
    local_e0 = local_d0;
    uStack_dc = local_cc;
    uStack_d8 = local_c8;
    fStack_d4 = local_c4;
    *(undefined4 *)(iVar9 + 0x4f0) = local_d0;
    *(undefined4 *)(iVar9 + 0x4f4) = local_cc;
    *(undefined4 *)(iVar9 + 0x4f8) = local_c8;
    *(float *)(iVar9 + 0x4fc) = local_c4;
    if (fVar17 < 0.9) {
      return;
    }
    iVar9 = FUN_0884b268();
    local_c0 = 0x3f800000;
    local_bc = 0x3f800000;
    local_b8 = 0x3f800000;
    local_b4 = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x4f0) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x4f4) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x4f8) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x4fc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x394) = 100;
LAB_08832728:
    iVar9 = FUN_0884b248();
    if (iVar9 != 0) {
      uVar7 = FUN_0884b268();
      FUN_089bf300(uVar7,1);
    }
    *(undefined4 *)(param_1 + 0x398) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0;
    return;
  }
  switch(iVar9) {
  case 1:
    *(undefined *)(param_1 + 0x4c0) = 0;
    iVar20 = 0;
    iVar9 = param_1;
    do {
      *(undefined4 *)(iVar9 + 0x474) = 0;
      iVar20 = iVar20 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar20 < 3);
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(undefined4 *)(param_1 + 0x398) = 0;
    *(undefined4 *)(param_1 + 0xad4) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
  case 2:
    iVar9 = *(int *)(param_1 + 0xad4) + -1;
    *(int *)(param_1 + 0xad4) = iVar9;
    if (iVar9 < 1) {
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
LAB_088316c8:
      uVar12 = *(uint *)(param_2 + 0x514);
      FUN_089b4c84(auStack_170,"abi_baku_%03d.lzs",(uVar12 & 0xfffc) + 1);
      iVar9 = FUN_089be054(DAT_08ac520c,auStack_170);
      if (iVar9 != 0) {
        local_54 = iVar9;
        uVar7 = FUN_089be500();
        uVar8 = FUN_089d79a4(uVar7,1);
        *(undefined4 *)(param_1 + 0x468) = uVar8;
        FUN_089be538(local_54,uVar8);
        zz_sceKernelDcacheWritebackInvalidateRange(*(undefined4 *)(param_1 + 0x468),uVar7);
      }
      FUN_089b4c84(auStack_170,"card_L_%03d.lzs",uVar12 + 1);
      iVar9 = FUN_089be054(DAT_08ac520c,auStack_170);
      if (iVar9 == 0) {
        iVar9 = *(int *)(param_1 + 0x394);
      }
      else {
        uVar7 = FUN_089be500(iVar9);
        uVar8 = FUN_089d79a4(uVar7,1);
        *(undefined4 *)(param_1 + 0x4c4) = uVar8;
        FUN_089be538(iVar9,uVar8);
        zz_sceKernelDcacheWritebackInvalidateRange(*(undefined4 *)(param_1 + 0x4c4),uVar7);
        iVar9 = *(int *)(param_1 + 0x394);
      }
      *(int *)(param_1 + 0x394) = iVar9 + 1;
    }
    break;
  case 3:
    goto LAB_088316c8;
  case 4:
    uVar12 = *(uint *)(param_2 + 0x514);
    iVar9 = FUN_0880d354();
    if ((iVar9 == 0) && (iVar9 = FUN_0884b248(), iVar9 != 0)) {
      uVar7 = FUN_0884b268();
      FUN_089bf2f0(uVar7,1);
    }
    iVar9 = DONE_NotZero_DAT_08AC5874();
    if (iVar9 != 0) {
      uVar7 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar7,0x200131,0,0);
    }
    iVar9 = DONE_NotZero_DAT_08AC5874();
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x468);
    }
    else {
      uVar7 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar7,*(int *)(param_2 + 0x5a0) << 0x14,0,0);
      iVar9 = *(int *)(param_1 + 0x468);
    }
    if (iVar9 != 0) {
      FUN_089b4c84(auStack_150,"abi_baku_%03d",(uVar12 & 0xfffc) + 1);
      local_4c = 0;
      FUN_089d8634();
      uVar7 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar21 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar7);
      FUN_089d866c();
      iVar9 = local_4c;
      if (iVar21 != 0) {
        FUN_089f6cdc(iVar21,auStack_150,*(undefined4 *)(param_1 + 0x468),1);
        iVar9 = iVar21;
      }
      *(int *)(param_1 + 0x46c) = iVar9;
      *(int *)(iVar20 + 0xd4) = iVar9;
      *(uint *)(iVar20 + 0xd0) = *(uint *)(iVar20 + 0xd0) & 0xfffffffe;
      FUN_0882c4c8(0,0,0x43800000,0x43880000,param_1,iVar20);
      FUN_089f43d4(0x3f000000,iVar20);
      FUN_089b4c84(auStack_150,"card_L_%03d",uVar12 + 1);
      local_50 = 0;
      FUN_089d8634();
      uVar7 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar20 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar7);
      FUN_089d866c();
      iVar9 = local_50;
      if (iVar20 != 0) {
        FUN_089f6cdc(iVar20,auStack_150,*(undefined4 *)(param_1 + 0x4c4),1);
        iVar9 = iVar20;
      }
      *(int *)(param_1 + 0x4c8) = iVar9;
    }
    iVar20 = 0;
    iVar9 = 0;
    do {
      iVar21 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 + 0x39c);
      *(uint *)(iVar21 + 0xd0) = *(uint *)(iVar21 + 0xd0) & 0xfffffffe;
      if (*(int *)(param_1 + 0x4c8) == 0) {
        iVar21 = *(int *)(param_1 + 0x14);
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9 + 0x39c) + 0xd4) =
             *(undefined4 *)(param_1 + 0x4c8);
        iVar21 = *(int *)(param_1 + 0x14);
      }
      FUN_0882c4c8(0,0,0x43000000,0x43300000,param_1,*(undefined4 *)(iVar21 + iVar9 + 0x39c));
      iVar20 = iVar20 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar20 < 1);
    *(undefined4 *)(param_1 + 0x394) = 10;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    break;
  case 10:
    iVar9 = FUN_0884b268();
    *(undefined4 *)(iVar9 + 0x4e0) = 0;
    *(uint *)(iVar20 + 0xd0) = *(uint *)(iVar20 + 0xd0) | 1;
    *(undefined4 *)(iVar20 + 0xbc) = 0;
    pfVar10 = (float *)(iVar20 + 0x60);
    local_48 = (undefined (*) [16])(param_1 + 0x490);
    uVar7 = *(undefined4 *)(param_1 + 0x494);
    uVar8 = *(undefined4 *)(param_1 + 0x498);
    uVar2 = *(undefined4 *)(param_1 + 0x49c);
    *pfVar10 = *(float *)*local_48;
    *(undefined4 *)(iVar20 + 100) = uVar7;
    *(undefined4 *)(iVar20 + 0x68) = uVar8;
    *(undefined4 *)(iVar20 + 0x6c) = uVar2;
    *pfVar10 = *pfVar10 - 192.0;
    iVar19 = 0;
    iVar9 = 0;
    local_58 = (int *)(param_1 + 0x480);
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9 + 0x39c) + 0xbc) = 0;
      iVar13 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 + 0x39c);
      *(uint *)(iVar13 + 0xd0) = *(uint *)(iVar13 + 0xd0) | 1;
      iVar13 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 + 0x39c);
      uVar7 = *(undefined4 *)(param_1 + 0x4a4);
      uVar8 = *(undefined4 *)(param_1 + 0x4a8);
      uVar2 = *(undefined4 *)(param_1 + 0x4ac);
      *(undefined4 *)(iVar13 + 0x60) = *(undefined4 *)(param_1 + 0x4a0);
      *(undefined4 *)(iVar13 + 100) = uVar7;
      *(undefined4 *)(iVar13 + 0x68) = uVar8;
      *(undefined4 *)(iVar13 + 0x6c) = uVar2;
      pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9 + 0x39c) + 100);
      *pfVar10 = *pfVar10 + 272.0;
      iVar19 = iVar19 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar19 < 1);
    *(undefined4 *)(iVar22 + 0xbc) = 0;
    *(uint *)(iVar22 + 0xd0) = *(uint *)(iVar22 + 0xd0) | 1;
    FUN_089f4954(0x41a00000,0x3f800000,0,iVar22,0);
    *(undefined4 *)(iVar21 + 0xbc) = 0;
    *(uint *)(iVar21 + 0xd0) = *(uint *)(iVar21 + 0xd0) | 1;
    FUN_089f4954(0x40000000,0x40000000,0,iVar21,0);
    *(undefined4 *)(iVar21 + 0xdc) = 2;
    iVar9 = *(int *)(*(int *)(param_1 + 0x14) + 0x3a0);
    *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3a0) + 0xbc) = 0;
    FUN_089f4954(0x40000000,0x40000000,0,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3a0),0);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3a0) + 0xdc) = 2;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    piVar18 = local_58;
    pauVar14 = local_48;
    goto LAB_08831c4c;
  case 0xb:
    piVar18 = (int *)(param_1 + 0x480);
    pauVar14 = (undefined (*) [16])(param_1 + 0x490);
LAB_08831c4c:
    fVar17 = 1.570796;
    iVar9 = *(int *)(param_1 + 0x398);
    fVar23 = (float)iVar9 * 0.1 * 1.570796;
    *(int *)(param_1 + 0x398) = iVar9 + 1;
    if (fVar23 < 0.0) {
      fVar17 = 0.0;
    }
    else if (fVar23 <= 1.570796) {
      fVar17 = fVar23;
    }
    uVar7 = vmul_s(fVar17,in_V7C);
    local_a8 = vsin_s(uVar7);
    *(undefined4 *)(param_1 + 0x470) = local_a8;
    uVar6 = DAT_08b001bc;
    uVar2 = DAT_08b001b8;
    uVar8 = DAT_08b001b4;
    uVar7 = DAT_08b001b0;
    local_130 = DAT_08b001b0;
    uStack_12c = DAT_08b001b4;
    uStack_128 = DAT_08b001b8;
    uStack_124 = DAT_08b001bc;
    uVar12 = 0;
    iVar19 = param_1 + 0x474;
    iVar9 = param_1;
    do {
      auVar4._4_4_ = uVar8;
      auVar4._0_4_ = uVar7;
      auVar4._8_4_ = uVar2;
      auVar4._12_4_ = uVar6;
      auVar1 = vsat0_q(auVar4);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar26 = vi2uc_q(auVar1);
      *(undefined4 *)(iVar9 + 0x474) = uVar26;
      if ((uVar12 & 1) == 0) {
        uVar15 = (undefined)(int)(*(float *)(param_1 + 0x470) * 255.0);
      }
      else {
        uVar15 = 0;
      }
      *(undefined *)(iVar19 + 3) = uVar15;
      uVar12 = uVar12 + 1;
      iVar9 = iVar9 + 4;
      iVar19 = iVar19 + 4;
    } while ((int)uVar12 < 3);
    fVar17 = *(float *)(param_1 + 0x470);
    pauVar11 = (undefined (*) [16])(iVar20 + 0x60);
    if (fVar17 < 0.0) {
      fVar17 = 0.0;
    }
    else if (1.0 < fVar17) {
      fVar17 = 1.0;
    }
    auVar1 = vsub_q(*pauVar14,*pauVar11);
    auVar1 = vscl_q(auVar1,fVar17);
    auVar1 = vadd_q(*pauVar11,auVar1);
    *(int *)*pauVar11 = auVar1._0_4_;
    *(int *)(iVar20 + 100) = auVar1._4_4_;
    *(int *)(iVar20 + 0x68) = auVar1._8_4_;
    *(int *)(iVar20 + 0x6c) = auVar1._12_4_;
    *(undefined4 *)(iVar20 + 0xbc) = *(undefined4 *)(param_1 + 0x470);
    iVar9 = 0;
    iVar20 = 0;
    do {
      fVar17 = *(float *)(param_1 + 0x470);
      iVar19 = *(int *)(*(int *)(param_1 + 0x14) + iVar20 + 0x39c);
      pauVar14 = (undefined (*) [16])(iVar19 + 0x60);
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      else if (1.0 < fVar17) {
        fVar17 = 1.0;
      }
      auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x4a0),*pauVar14);
      auVar1 = vscl_q(auVar1,fVar17);
      auVar1 = vadd_q(*pauVar14,auVar1);
      *(int *)*pauVar14 = auVar1._0_4_;
      *(int *)(iVar19 + 100) = auVar1._4_4_;
      *(int *)(iVar19 + 0x68) = auVar1._8_4_;
      *(int *)(iVar19 + 0x6c) = auVar1._12_4_;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar20 + 0x39c) + 0xbc) =
           *(undefined4 *)(param_1 + 0x470);
      iVar9 = iVar9 + 1;
      iVar20 = iVar20 + 4;
    } while (iVar9 < 1);
    fVar17 = *(float *)(param_1 + 0x470) * 3.0;
    *(float *)(iVar22 + 0xbc) = fVar17;
    if (fVar17 < 0.0) {
      fVar17 = 0.0;
    }
    else if (1.0 < fVar17) {
      fVar17 = 1.0;
    }
    *(float *)(iVar22 + 0xbc) = fVar17;
    *(float *)(iVar21 + 0xbc) = *(float *)(param_1 + 0x470) * 0.5;
    iVar9 = *piVar18;
    *piVar18 = iVar9 + 1;
    FUN_089f4954(0x40000000,0x40000000,(float)iVar9 * 0.1,iVar21,0);
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3a0) + 0xbc) =
         *(float *)(param_1 + 0x470) * 0.5;
    FUN_089f4954(0x40000000,0x40000000,(float)*(int *)(param_1 + 0x480) * -0.1,
                 *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3a0),0);
    if (1.0 <= *(float *)(param_1 + 0x470)) {
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    }
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x398) = 0x14;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    goto LAB_08831f64;
  case 0xd:
LAB_08831f64:
    iVar9 = *(int *)(param_1 + 0x398) + -1;
    *(int *)(param_1 + 0x398) = iVar9;
    if (0 < iVar9) {
      uVar7 = vmul_s((float)*(int *)(param_1 + 0x480) * 0.5235988,in_V7C);
      local_98 = (float)vsin_s(uVar7);
      fVar17 = local_98 * 0.1 + 0.9;
      *(float *)(iVar22 + 0xbc) = fVar17;
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      else if (1.0 < fVar17) {
        fVar17 = 1.0;
      }
      *(float *)(iVar22 + 0xbc) = fVar17;
      iVar9 = *(int *)(param_1 + 0x480);
      *(int *)(param_1 + 0x480) = iVar9 + 1;
      FUN_089f4954(0x40000000,0x40000000,(float)iVar9 * 0.1,iVar21,0);
      FUN_089f4954(0x40000000,0x40000000,(float)*(int *)(param_1 + 0x480) * -0.1,
                   *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3a0),0);
      return;
    }
    *(undefined4 *)(param_1 + 0x394) = 0x14;
LAB_08832118:
    *(undefined4 *)(param_1 + 0x398) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
LAB_08832190:
    fVar17 = 1.570796;
    iVar9 = *(int *)(param_1 + 0x398);
    bVar3 = false;
    fVar23 = (float)iVar9 * 0.06666667 * 1.570796;
    *(int *)(param_1 + 0x398) = iVar9 + 1;
    if (fVar23 < 0.0) {
      fVar17 = 0.0;
    }
    else if (fVar23 <= 1.570796) {
      fVar17 = fVar23;
    }
    local_44 = 1.570796;
    uVar7 = vmul_s(fVar17,in_V7C);
    local_94 = (float)vsin_s(uVar7);
    fVar24 = 1.0 - local_94;
    fVar17 = (float)*(int *)(param_1 + 0x398) * 0.05 + 1.0;
    local_120 = *(undefined4 *)(param_1 + 0x490);
    local_11c = *(float *)(param_1 + 0x494);
    uStack_118 = *(undefined4 *)(param_1 + 0x498);
    uStack_114 = *(undefined4 *)(param_1 + 0x49c);
    *(float *)(iVar20 + 0xbc) = fVar24;
    FUN_089f4954(fVar17,fVar17,0,iVar20,0);
    fVar17 = local_44;
    local_120 = *(undefined4 *)(param_1 + 0x4a0);
    uStack_118 = *(undefined4 *)(param_1 + 0x4a8);
    uStack_114 = *(undefined4 *)(param_1 + 0x4ac);
    local_11c = *(float *)(param_1 + 0x4a4) - 272.0;
    iVar9 = 0;
    fVar23 = 1.0 - fVar24;
    iVar19 = 0;
    fVar25 = fVar24 * 0.2;
    do {
      *(float *)(*(int *)(*(int *)(param_1 + 0x14) + iVar19 + 0x39c) + 0xbc) = fVar24;
      iVar13 = *(int *)(*(int *)(param_1 + 0x14) + iVar19 + 0x39c);
      pauVar14 = (undefined (*) [16])(iVar13 + 0x60);
      if (fVar23 < 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = fVar23;
        if (1.0 < fVar23) {
          fVar16 = 1.0;
        }
      }
      auVar1._4_4_ = local_11c;
      auVar1._0_4_ = local_120;
      auVar1._8_4_ = uStack_118;
      auVar1._12_4_ = uStack_114;
      auVar1 = vsub_q(auVar1,*pauVar14);
      auVar1 = vscl_q(auVar1,fVar16);
      auVar1 = vadd_q(*pauVar14,auVar1);
      *(int *)*pauVar14 = auVar1._0_4_;
      *(int *)(iVar13 + 100) = auVar1._4_4_;
      *(int *)(iVar13 + 0x68) = auVar1._8_4_;
      *(int *)(iVar13 + 0x6c) = auVar1._12_4_;
      iVar9 = iVar9 + 1;
      iVar19 = iVar19 + 4;
    } while (iVar9 < 1);
    *(float *)(iVar22 + 0xbc) = fVar24;
    *(float *)(iVar21 + 0xbc) = fVar25;
    if (fVar25 <= 0.05) {
      *(undefined4 *)(iVar21 + 0xbc) = 0;
    }
    iVar9 = *(int *)(param_1 + 0x480);
    *(int *)(param_1 + 0x480) = iVar9 + 1;
    FUN_089f4954(0x40000000,0x40000000,(float)iVar9 * 0.1,iVar21,0);
    *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3a0) + 0xbc) = fVar25;
    if (*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3a0) + 0xbc) <= 0.05) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x3a0) + 0xbc) = 0;
      iVar9 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x14);
    }
    FUN_089f4954(0x40000000,0x40000000,(float)*(int *)(param_1 + 0x480) * -0.1,
                 *(undefined4 *)(iVar9 + 0x3a0),0);
    uVar6 = DAT_08b001bc;
    uVar2 = DAT_08b001b8;
    uVar8 = DAT_08b001b4;
    uVar7 = DAT_08b001b0;
    if (*(char *)(param_1 + 0x4c0) == '\0') {
      local_f0 = DAT_08b001b0;
      uStack_ec = DAT_08b001b4;
      uStack_e8 = DAT_08b001b8;
      uStack_e4 = DAT_08b001bc;
      uVar12 = 0;
      iVar21 = param_1 + 0x474;
      iVar9 = param_1;
      do {
        auVar5._4_4_ = uVar8;
        auVar5._0_4_ = uVar7;
        auVar5._8_4_ = uVar2;
        auVar5._12_4_ = uVar6;
        auVar1 = vsat0_q(auVar5);
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar26 = vi2uc_q(auVar1);
        *(undefined4 *)(iVar9 + 0x474) = uVar26;
        uVar15 = (undefined)(int)(fVar24 * 255.0);
        if ((uVar12 & 1) != 0) {
          uVar15 = 0;
        }
        *(undefined *)(iVar21 + 3) = uVar15;
        uVar12 = uVar12 + 1;
        iVar9 = iVar9 + 4;
        iVar21 = iVar21 + 4;
      } while ((int)uVar12 < 3);
LAB_088324fc:
      fVar17 = *(float *)(iVar20 + 0xbc);
    }
    else {
      if (*(int *)(param_1 + 0x398) < 7) goto LAB_088324fc;
      iVar9 = *(int *)(param_1 + 0x4bc);
      fVar23 = (float)iVar9 * 0.05 * fVar17;
      *(int *)(param_1 + 0x4bc) = iVar9 + 1;
      if (fVar23 < 0.0) {
        fVar17 = 0.0;
      }
      else if (fVar23 <= fVar17) {
        fVar17 = fVar23;
      }
      uVar7 = vmul_s(fVar17,in_V7C);
      local_f4 = vsin_s(uVar7);
      local_100 = 0x3f800000;
      local_fc = 0x3f800000;
      local_f8 = 0x3f800000;
      local_84 = local_f4;
      iVar9 = FUN_0884b268();
      local_110 = local_100;
      uStack_10c = local_fc;
      uStack_108 = local_f8;
      uStack_104 = local_f4;
      *(undefined4 *)(iVar9 + 0x4f0) = local_100;
      *(undefined4 *)(iVar9 + 0x4f4) = local_fc;
      *(undefined4 *)(iVar9 + 0x4f8) = local_f8;
      *(undefined4 *)(iVar9 + 0x4fc) = local_f4;
      fVar17 = *(float *)(iVar20 + 0xbc);
    }
    if (fVar17 <= 0.0) {
      bVar3 = true;
    }
    else if (*(float *)(iVar20 + 0xbc) <= 0.3) {
      iVar9 = FUN_0884b268();
      *(undefined4 *)(iVar9 + 0x4e0) = 0;
    }
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x394) = 0x1e;
LAB_08832554:
      iVar9 = FUN_0884b268();
      *(undefined4 *)(iVar9 + 0x4e0) = 0;
      if (*(char *)(param_1 + 0x4c0) == '\0') {
        *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
LAB_0883259c:
        iVar20 = 0;
        iVar21 = *(int *)(*(int *)(param_1 + 0x14) + 0x19c);
        iVar9 = 0;
        *(uint *)(iVar21 + 0xd0) = *(uint *)(iVar21 + 0xd0) & 0xfffffffe;
        do {
          iVar9 = iVar9 + 1;
          iVar21 = *(int *)(*(int *)(param_1 + 0x14) + iVar20 + 0x39c);
          *(uint *)(iVar21 + 0xd0) = *(uint *)(iVar21 + 0xd0) & 0xfffffffe;
          iVar20 = iVar20 + 4;
        } while (iVar9 < 1);
        *(undefined4 *)(param_1 + 0x398) = 0;
        *(undefined4 *)(param_1 + 0x470) = 0x3f800000;
        *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x394) = 0x32;
      }
    }
    break;
  case 0x14:
    goto LAB_08832118;
  case 0x15:
    goto LAB_08832190;
  case 0x1e:
    goto LAB_08832554;
  case 0x1f:
    goto LAB_0883259c;
  case 0x20:
    uVar7 = FUN_0882c15c();
    FUN_0882c394(uVar7);
    *(undefined4 *)(param_1 + 0x394) = 100;
    break;
  default:
    if (iVar9 < 0x32) {
      return;
    }
    *(undefined4 *)(param_1 + 0x398) = 0;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    goto LAB_08832624;
  }
  return;
}

