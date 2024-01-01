#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890c138(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_V7C;
  undefined4 in_V7F;
  undefined8 uVar16;
  undefined4 local_150;
  undefined4 local_14c [3];
  undefined local_140 [16];
  float local_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined local_d0 [16];
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_2c;
  float local_20;
  
  iVar9 = param_3 * 0x14;
  uVar11 = 0;
  puVar10 = &DAT_08a9b168;
  switch((int)*(float *)(param_2 + 0x80)) {
  case 0:
    fVar12 = (float)(param_3 * 0x50);
    if (2 < param_3) {
      fVar12 = fVar12 + 240.0;
    }
    *(float *)(param_2 + 0x9c) = fVar12;
    *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + 1.0;
    goto LAB_0890c250;
  case 1:
LAB_0890c250:
    uVar15 = vrndf1_s();
    local_60 = (float)vsub_s(uVar15,in_V7F);
    uVar15 = vrndf1_s();
    local_5c = (float)vsub_s(uVar15,in_V7F);
    *(float *)(param_2 + 0x84) =
         ((float)(int)(short)(&DAT_08a9b168)[param_3 * 10] - local_5c * 4.0) + local_60 * 8.0;
    uVar15 = vrndf1_s();
    local_58 = (float)vsub_s(uVar15,in_V7F);
    uVar15 = vrndf1_s();
    local_54 = (float)vsub_s(uVar15,in_V7F);
    *(float *)(param_2 + 0x88) =
         ((float)(int)(short)(&DAT_08a9b16a)[param_3 * 10] - local_54 * 4.0) + local_58 * 8.0;
    fVar12 = (float)(int)*(short *)(&DAT_08a9b16c + iVar9) + *(float *)(param_2 + 0x84);
    *(float *)(param_2 + 0x90) = fVar12;
    *(float *)(param_2 + 0x60) = fVar12;
    fVar12 = (float)(int)*(short *)(&DAT_08a9b16e + iVar9) + *(float *)(param_2 + 0x88);
    *(float *)(param_2 + 0x94) = fVar12;
    *(float *)(param_2 + 100) = fVar12;
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0;
    *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + 1.0;
LAB_0890c33c:
    fVar12 = *(float *)(param_2 + 0x9c) + -1.0;
    *(float *)(param_2 + 0x9c) = fVar12;
    if (fVar12 <= 0.0) {
      *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + 1.0;
LAB_0890c408:
      fVar13 = 0.995;
      puVar7 = (undefined4 *)(param_2 + 0x60);
      uStack_128 = *(undefined4 *)(param_2 + 0x68);
      uStack_124 = *(undefined4 *)(param_2 + 0x6c);
      local_130 = *(float *)(param_2 + 0x90);
      fStack_12c = *(float *)(param_2 + 0x94);
      uStack_118 = *(undefined4 *)(param_2 + 0x68);
      uStack_114 = *(undefined4 *)(param_2 + 0x6c);
      local_110 = *(float *)(param_2 + 0x84);
      fStack_10c = *(float *)(param_2 + 0x88);
      *(float *)(param_2 + 0x98) = *(float *)(param_2 + 0x98) + 0.018;
      fVar12 = *(float *)(param_2 + 0x98);
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (1.570796 < fVar12) {
        fVar12 = 1.570796;
      }
      *(float *)(param_2 + 0x98) = fVar12;
      uVar15 = vmul_s(fVar12,in_V7C);
      fVar12 = (float)vsin_s(uVar15);
      local_120 = local_110 + (local_130 - local_110) * 0.2;
      fStack_11c = fStack_10c + (fStack_12c - fStack_10c) * *(float *)(&DAT_08a9b174 + iVar9);
      uStack_108 = uStack_118;
      uStack_104 = uStack_114;
      local_100 = local_130;
      local_fc = fStack_12c;
      local_f8 = uStack_128;
      local_f4 = uStack_124;
      local_f0 = local_110;
      local_ec = fStack_10c;
      local_e8 = uStack_118;
      local_e4 = uStack_114;
      local_e0 = local_120;
      local_dc = fStack_11c;
      local_d8 = uStack_118;
      local_d4 = uStack_114;
      local_48 = fVar12;
      uVar16 = FUN_0890c06c(fVar12,param_1,local_140);
      puVar5 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
      puVar6 = (undefined4 *)uVar16;
      uVar15 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar15;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      if (fVar12 < fVar13) {
        fVar12 = *(float *)(param_2 + 0x60);
        goto LAB_0890cac0;
      }
      uVar15 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar15;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      *(undefined4 *)(param_2 + 0x9c) = uVar11;
      *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + 1.0;
    }
    break;
  case 2:
    goto LAB_0890c33c;
  case 3:
    goto LAB_0890c408;
  case 4:
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar14 = *(float *)(param_2 + 0x98) + 1.0;
    *(float *)(param_2 + 0x98) = fVar14;
    if (4.0 <= fVar14) {
      *(undefined4 *)(param_2 + 0x98) = 0;
      *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0x8c) + 1.0;
    }
    if ((param_3 == 1) && (2.0 <= *(float *)(param_2 + 0x8c))) {
      fVar13 = -8.0;
      fVar12 = 6.0;
    }
    if (param_3 == 3) {
      if (3.0 <= *(float *)(param_2 + 0x8c)) {
        fVar12 = 3.0;
        fVar14 = *(float *)(param_2 + 0x84);
      }
      else {
        fVar14 = *(float *)(param_2 + 0x84);
      }
    }
    else {
      fVar14 = *(float *)(param_2 + 0x84);
    }
    *(float *)(param_2 + 0x60) = fVar14 + fVar12;
    *(float *)(param_2 + 100) = *(float *)(param_2 + 0x88) + fVar13;
    if (3.0 <= *(float *)(param_2 + 0x8c)) {
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 100);
      *(undefined4 *)(param_2 + 0x9c) = 0;
      *(undefined4 *)(param_2 + 0x80) = 0x41200000;
    }
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 10:
    *(float *)(param_2 + 0x98) = *(float *)(param_2 + 0x98) + 0.05;
    uVar15 = vmul_s(*(undefined4 *)(param_2 + 0x98),in_V7C);
    local_2c = (float)vsin_s(uVar15);
    *(float *)(param_2 + 100) = *(float *)(param_2 + 0x88) + local_2c * 8.0;
    if (*(float *)(param_2 + 0x98) < 9.424778) {
      fVar12 = *(float *)(param_2 + 0x60);
      goto LAB_0890cac0;
    }
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 100);
    *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + 1.0;
    break;
  case 0xb:
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar13 = *(float *)(param_2 + 0x98) + 1.0;
    *(float *)(param_2 + 0x98) = fVar13;
    if (4.0 <= fVar13) {
      *(undefined4 *)(param_2 + 0x98) = 0;
      *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0x8c) + -1.0;
    }
    if ((param_3 == 1) && (2.0 <= *(float *)(param_2 + 0x8c))) {
      fVar12 = -8.0;
      fVar14 = 6.0;
    }
    if (param_3 == 3) {
      if (3.0 <= *(float *)(param_2 + 0x8c)) {
        fVar14 = 4.0;
        fVar13 = *(float *)(param_2 + 0x84);
      }
      else {
        fVar13 = *(float *)(param_2 + 0x84);
      }
    }
    else {
      fVar13 = *(float *)(param_2 + 0x84);
    }
    *(float *)(param_2 + 0x60) = fVar13 + fVar14;
    *(float *)(param_2 + 100) = *(float *)(param_2 + 0x88) + fVar12;
    if (*(float *)(param_2 + 0x8c) <= 0.0) {
      *(undefined4 *)(param_2 + 0x8c) = 0;
      *(undefined4 *)(param_2 + 0x9c) = 0;
      *(undefined4 *)(param_2 + 0x80) = 0x41a00000;
    }
    break;
  case 0x14:
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 100);
    *(float *)(param_2 + 0x84) =
         *(float *)(param_2 + 0x90) + (float)(int)*(short *)(&DAT_08a9b170 + iVar9);
    sVar1 = *(short *)(&DAT_08a9b172 + iVar9);
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(float *)(param_2 + 0x88) = *(float *)(param_2 + 0x94) + (float)(int)sVar1;
    *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + 1.0;
    goto LAB_0890c8e8;
  case 0x15:
LAB_0890c8e8:
    fVar14 = -80.0;
    fVar13 = 1.0;
    puVar7 = (undefined4 *)(param_2 + 0x60);
    uStack_b8 = *(undefined4 *)(param_2 + 0x68);
    uStack_b4 = *(undefined4 *)(param_2 + 0x6c);
    local_c0 = *(float *)(param_2 + 0x90);
    fStack_bc = *(float *)(param_2 + 0x94);
    uStack_a8 = *(undefined4 *)(param_2 + 0x68);
    uStack_a4 = *(undefined4 *)(param_2 + 0x6c);
    local_a0 = *(float *)(param_2 + 0x84);
    fStack_9c = *(float *)(param_2 + 0x88);
    *(float *)(param_2 + 0x98) = *(float *)(param_2 + 0x98) + 0.015;
    fVar12 = *(float *)(param_2 + 0x98);
    if (fVar12 < 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.570796;
      if (fVar12 <= 1.570796) {
        fVar8 = fVar12;
      }
    }
    *(float *)(param_2 + 0x98) = fVar8;
    uVar15 = vmul_s(fVar8,in_V7C);
    fVar12 = (float)vsin_s(uVar15);
    local_b0 = local_a0 + (local_c0 - local_a0) * 0.2;
    fStack_ac = fStack_9c + (fStack_bc - fStack_9c) * *(float *)(&DAT_08a9b174 + iVar9);
    uStack_98 = uStack_a8;
    uStack_94 = uStack_a4;
    local_90 = local_c0;
    local_8c = fStack_bc;
    local_88 = uStack_b8;
    local_84 = uStack_b4;
    local_80 = local_a0;
    local_7c = fStack_9c;
    local_78 = uStack_a8;
    local_74 = uStack_a4;
    local_70 = local_b0;
    local_6c = fStack_ac;
    local_68 = uStack_a8;
    local_64 = uStack_a4;
    local_20 = fVar12;
    uVar16 = FUN_0890c06c(fVar12,param_1,local_d0,&local_c0,&local_b0,&local_a0);
    puVar6 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
    iVar4 = (int)uVar16;
    uVar15 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar15;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    if (fVar14 <= *(float *)(param_2 + 0x60)) {
      if (*(float *)(param_2 + 0x60) <= 560.0) {
        if (fVar14 <= *(float *)(param_2 + 100)) {
          if (352.0 < *(float *)(param_2 + 100)) {
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 1;
        }
      }
      else {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 1;
    }
    if ((fVar12 < fVar13) && (iVar4 == 0)) {
      fVar12 = *(float *)(param_2 + 0x60);
      goto LAB_0890cac0;
    }
    *(undefined4 *)(param_2 + 0x9c) = uVar11;
    *(undefined4 *)(param_2 + 0x80) = 0x42c80000;
    break;
  case -0x452e541f:
    fVar12 = *(float *)(param_2 + 0x60);
    goto LAB_0890cac0;
  default:
    if ((int)*(float *)(param_2 + 0x80) == 100) {
      *(undefined4 *)(param_2 + 0x9c) = 0x44200000;
      *(undefined4 *)(param_2 + 0x80) = 0x3f800000;
    }
  }
  fVar12 = *(float *)(param_2 + 0x60);
LAB_0890cac0:
  *(float *)(param_2 + 0x60) = (float)(int)fVar12;
  *(float *)(param_2 + 100) = (float)(int)*(float *)(param_2 + 100);
  local_150 = uVar11;
  local_14c[0] = uVar11;
  FUN_0890c100(param_1,*(undefined *)((int)puVar10 + (int)*(float *)(param_2 + 0x8c) + iVar9 + 0x10)
               ,&local_150,local_14c);
  FUN_089f4a90(local_150,local_14c[0],param_2);
  return;
}

