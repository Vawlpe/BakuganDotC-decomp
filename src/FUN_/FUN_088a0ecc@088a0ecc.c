#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a0ecc(int param_1)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined auVar17 [12];
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  byte bVar23;
  uint uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined auVar18 [12];
  
  uVar25 = vmul_s((float)*(int *)(param_1 + 400) * 0.005555556 * 3.141593,in_V7C);
  fVar26 = (float)vcos_s(uVar25);
  fVar26 = (1.0 - fVar26) * 0.5 * 2.0;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x18c) + fVar26;
  *(int *)(param_1 + 400) = (*(int *)(param_1 + 400) + 5) % 0x168;
  iVar19 = FUN_088e1948();
  iVar20 = FUN_0881a580(*(undefined4 *)(param_1 + 0x174));
  bVar1 = iVar20 != 0;
  if (bVar1) {
    *(uint *)(*(int *)(param_1 + 0x174) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x174) + 0x130) & 0xfffffffe;
  }
  if (iVar19 == 0) {
    bVar23 = *(byte *)(param_1 + 0x15f);
  }
  else if (*(char *)(param_1 + 0x1a8) == '\0') {
    bVar23 = *(byte *)(param_1 + 0x15f);
  }
  else {
    if (*(char *)(iVar19 + 0x3a1) == '\0') {
      return;
    }
    bVar23 = *(byte *)(param_1 + 0x15f);
  }
  *(byte *)(param_1 + 0x15f) = bVar23 & 0xfd;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x178);
  if (iVar19 != 0) {
    uVar25 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    uVar12 = *(undefined4 *)(param_1 + 0x2c);
    fVar26 = *(float *)(param_1 + 0x24) - fVar26;
    iVar19 = FUN_088e1948();
    if ((iVar19 != 0) && (ABS(fVar26 - *(float *)(iVar19 + 0x24)) <= 22.0)) {
      auVar2._4_4_ = fVar26;
      auVar2._0_4_ = uVar25;
      auVar2._8_4_ = uVar7;
      auVar2._12_4_ = uVar12;
      auVar2 = vsub_q(*(undefined (*) [16])(iVar19 + 0x20),auVar2);
      uVar25 = vzero_s();
      auVar17._8_4_ = auVar2._8_4_;
      auVar17._4_4_ = uVar25;
      auVar17._0_4_ = auVar2._0_4_;
      auVar18._8_4_ = auVar2._8_4_;
      auVar18._4_4_ = uVar25;
      auVar18._0_4_ = auVar2._0_4_;
      uVar25 = vdot_t(auVar17,auVar18);
      fVar26 = (float)vsqrt_s(uVar25);
      if (fVar26 <= *(float *)(param_1 + 0x198)) {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) goto LAB_088a12d8;
  *(undefined *)(param_1 + 0x15e) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = in_V72;
  *(undefined4 *)(param_1 + 0x1c4) = in_V76;
  *(undefined4 *)(param_1 + 0x1c8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1cc) = in_V7E;
  *(undefined4 *)(param_1 + 0x1c4) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  iVar19 = FUN_088243d8(DAT_08ac5c70,0xe,*(int *)(param_1 + 0x130) + 0xb0);
  uVar24 = *(int *)(param_1 + 0x1a0) - 10;
  if (uVar24 < 6) {
    iVar20 = 9999999;
    if (uVar24 == 1) {
LAB_088a1190:
      iVar21 = FUN_089c59d4();
      if (iVar21 != 0) {
        uVar25 = FUN_089c59f0();
        FUN_089c6350(uVar25,0x2c00034,0,0);
      }
      piVar22 = (int *)FUN_0880cc48();
      iVar21 = *(int *)(*piVar22 + 0x464) + 300;
      if ((iVar21 < 10000000) && (iVar20 = iVar21, iVar21 < 0)) {
        iVar20 = 0;
      }
      *(int *)(*piVar22 + 0x464) = iVar20;
      *(undefined4 *)(iVar19 + 0xd8) = 1;
      *(undefined4 *)(iVar19 + 0x70) = 0x40000000;
      *(undefined4 *)(iVar19 + 0x1d4) = 0x41000000;
      *(undefined4 *)(iVar19 + 0x74) = 0x40000000;
      *(undefined4 *)(iVar19 + 0x78) = 0x40000000;
      *(undefined4 *)(iVar19 + 0x7c) = 0;
    }
    else {
      if (uVar24 != 2) {
        if (uVar24 == 4) goto LAB_088a1190;
        if (uVar24 != 5) {
          iVar21 = FUN_089c59d4();
          if (iVar21 != 0) {
            uVar25 = FUN_089c59f0();
            FUN_089c6350(uVar25,0x2c00033,0,0);
          }
          piVar22 = (int *)FUN_0880cc48();
          iVar21 = *(int *)(*piVar22 + 0x464) + 100;
          if ((iVar21 < 10000000) && (iVar20 = iVar21, iVar21 < 0)) {
            iVar20 = 0;
          }
          *(int *)(*piVar22 + 0x464) = iVar20;
          *(undefined4 *)(iVar19 + 0xd8) = 2;
          *(undefined4 *)(iVar19 + 0x70) = 0x3f800000;
          *(undefined4 *)(iVar19 + 0x1d4) = 0x40800000;
          *(undefined4 *)(iVar19 + 0x74) = 0x3f800000;
          *(undefined4 *)(iVar19 + 0x78) = 0x3f800000;
          *(undefined4 *)(iVar19 + 0x7c) = 0;
          goto LAB_088a12b4;
        }
      }
      iVar21 = FUN_089c59d4();
      if (iVar21 != 0) {
        uVar25 = FUN_089c59f0();
        FUN_089c6350(uVar25,0x2c00035,0,0);
      }
      piVar22 = (int *)FUN_0880cc48();
      iVar21 = *(int *)(*piVar22 + 0x464) + 1000;
      if ((iVar21 < 10000000) && (iVar20 = iVar21, iVar21 < 0)) {
        iVar20 = 0;
      }
      *(int *)(*piVar22 + 0x464) = iVar20;
      *(undefined4 *)(iVar19 + 0xd8) = 3;
      *(undefined4 *)(iVar19 + 0x1d4) = 0x41800000;
      *(undefined4 *)(iVar19 + 0x70) = 0x40400000;
      *(undefined4 *)(iVar19 + 0x74) = 0x40400000;
      *(undefined4 *)(iVar19 + 0x78) = 0x40400000;
      *(undefined4 *)(iVar19 + 0x7c) = 0;
    }
  }
LAB_088a12b4:
  *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
  FUN_089e0a70(param_1,&LAB_0889f8fc,0);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
LAB_088a12d8:
  FUN_089dfc04(param_1);
  FUN_089dfdb0(param_1);
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    FUN_0889fe8c(param_1);
    FUN_088a0148(param_1);
  }
  iVar19 = DAT_08ac5c90;
  if (DAT_08ac5c90 != 0) {
    if (*(int *)(param_1 + 0x184) == 0) {
      uVar25 = FUN_089ded60(param_1,param_1 + 0x1e0);
      *(undefined4 *)(param_1 + 0x184) = uVar25;
    }
    if (*(int *)(param_1 + 0x184) != 0) {
      iVar20 = *(int *)(param_1 + 0x184);
      uVar3 = *(undefined4 *)(iVar19 + 0x114);
      uVar8 = *(undefined4 *)(iVar19 + 0x118);
      uVar13 = *(undefined4 *)(iVar19 + 0x11c);
      uVar25 = *(undefined4 *)(iVar19 + 0x120);
      uVar4 = *(undefined4 *)(iVar19 + 0x124);
      uVar9 = *(undefined4 *)(iVar19 + 0x128);
      uVar14 = *(undefined4 *)(iVar19 + 300);
      uVar7 = *(undefined4 *)(iVar19 + 0x130);
      uVar5 = *(undefined4 *)(iVar19 + 0x134);
      uVar10 = *(undefined4 *)(iVar19 + 0x138);
      uVar15 = *(undefined4 *)(iVar19 + 0x13c);
      uVar12 = *(undefined4 *)(iVar19 + 0x140);
      uVar6 = *(undefined4 *)(iVar19 + 0x144);
      uVar11 = *(undefined4 *)(iVar19 + 0x148);
      uVar16 = *(undefined4 *)(iVar19 + 0x14c);
      *(undefined4 *)(iVar20 + 0x80) = *(undefined4 *)(iVar19 + 0x110);
      *(undefined4 *)(iVar20 + 0x84) = uVar3;
      *(undefined4 *)(iVar20 + 0x88) = uVar8;
      *(undefined4 *)(iVar20 + 0x8c) = uVar13;
      *(undefined4 *)(iVar20 + 0x90) = uVar25;
      *(undefined4 *)(iVar20 + 0x94) = uVar4;
      *(undefined4 *)(iVar20 + 0x98) = uVar9;
      *(undefined4 *)(iVar20 + 0x9c) = uVar14;
      *(undefined4 *)(iVar20 + 0xa0) = uVar7;
      *(undefined4 *)(iVar20 + 0xa4) = uVar5;
      *(undefined4 *)(iVar20 + 0xa8) = uVar10;
      *(undefined4 *)(iVar20 + 0xac) = uVar15;
      *(undefined4 *)(iVar20 + 0xb0) = uVar12;
      *(undefined4 *)(iVar20 + 0xb4) = uVar6;
      *(undefined4 *)(iVar20 + 0xb8) = uVar11;
      *(undefined4 *)(iVar20 + 0xbc) = uVar16;
    }
  }
  return;
}

