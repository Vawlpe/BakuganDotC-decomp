#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_0888ab98(float param_1,int param_2,uint *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined2 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined2 uVar15;
  uint *puVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  undefined4 in_V74;
  float local_100 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  
  local_100[3] = *(float *)(param_2 + 0x84);
  local_100[0] = 1.0;
  local_100[1] = 1.0;
  local_100[2] = 1.0;
  local_f0 = 0x3f733333;
  local_ec = 0x3e4ccccd;
  local_e8 = 0x3f733333;
  local_e0 = 0x3f800000;
  local_dc = 0x3f680000;
  local_d8 = 0x3e880000;
  local_d0 = 0;
  local_cc = 0x3f580000;
  local_c8 = 0x3f680000;
  local_c0 = 0x3f800000;
  local_bc = 0x3f800000;
  local_b8 = 0x3f800000;
  local_a4 = local_100[3] * 0.5;
  local_b4 = 1.0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_94 = *(float *)(param_2 + 0x94) * local_100[3];
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_98 = 0;
  fVar22 = 3.0;
  local_e4 = local_100[3];
  local_d4 = local_100[3];
  local_c4 = local_100[3];
  local_54 = FUN_0888a044(param_2);
  if (param_1 == -1.0) {
    param_1 = (float)FUN_0888a158(param_2);
  }
  iVar5 = FUN_0888a108(param_2);
  iVar9 = local_54;
  if (iVar5 != 0) {
    fVar22 = 7.0;
  }
  fVar21 = param_1 * -0.5;
  local_60 = -fVar22;
  local_48 = param_1 * 0.5;
  fVar22 = fVar22 + 1.0;
  param_1 = param_1 / *(float *)(param_2 + 0x70);
  auVar1._4_4_ = local_ac;
  auVar1._0_4_ = local_b0;
  auVar1._8_4_ = local_a8;
  auVar1._12_4_ = local_a4;
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar23 = vi2uc_q(auVar1);
  puVar7 = param_3 + 2;
  puVar6 = param_3 + 5;
  *param_3 = ((uint)puVar6 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  param_3[1] = (uint)puVar6 & 0xffffff | 0x8000000;
  local_4c = (int)fVar21;
  *(short *)puVar7 = (short)local_4c;
  local_58 = (int)local_60;
  *(short *)((int)param_3 + 10) = (short)local_58;
  *(undefined2 *)(param_3 + 3) = 0xff9c;
  local_50 = (int)local_48;
  *(short *)((int)param_3 + 0xe) = (short)local_50;
  local_5c = (int)fVar22;
  *(short *)(param_3 + 4) = (short)local_5c;
  *(undefined2 *)((int)param_3 + 0x12) = 0xff9c;
  *puVar6 = uVar23 & 0xffffff | 0x55000000;
  param_3[6] = uVar23 >> 0x18 | 0x58000000;
  param_3[7] = 0x12000100;
  puVar6 = param_3 + 8;
  if (puVar7 != (uint *)0x0) {
    *puVar6 = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    param_3[9] = (uint)puVar7 & 0xffffff | 0x1000000;
    puVar6 = param_3 + 10;
  }
  *puVar6 = 0x4060002;
  puVar6 = puVar6 + 1;
  iVar17 = 0;
  iVar5 = local_54 * 4;
  uVar20 = *(undefined4 *)(param_2 + 0x74);
  while( true ) {
    fVar18 = (float)FUN_0888a35c(uVar20,param_2,iVar17);
    fVar19 = (float)FUN_0888a35c(*(undefined4 *)(param_2 + 0x78),param_2,iVar17);
    fVar19 = fVar19 * param_1;
    if (0.0 < fVar19) {
      fVar18 = fVar18 * param_1 + fVar21;
      if (local_54 == 0) {
        local_90 = local_100[iVar5];
        fStack_8c = local_100[iVar9 * 4 + 1];
        fStack_88 = local_100[iVar9 * 4 + 2];
        fStack_84 = local_100[iVar9 * 4 + 3];
        puVar6 = (uint *)FUN_0888a3f0(fVar21,local_60,fVar18,fVar22,0,param_2,puVar6,&local_90);
      }
      else {
        local_80 = local_100[iVar5];
        fStack_7c = local_100[iVar9 * 4 + 1];
        fStack_78 = local_100[iVar9 * 4 + 2];
        fStack_74 = local_100[iVar9 * 4 + 3];
        puVar6 = (uint *)FUN_0888a7f4(fVar21,local_60,fVar18,fVar22,0xc1f00000,param_2,puVar6,
                                      &local_80);
      }
      if (0.0 < *(float *)(param_2 + 0x88)) {
        local_b4 = *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x84);
        auVar2._4_4_ = local_bc;
        auVar2._0_4_ = local_c0;
        auVar2._8_4_ = local_b8;
        auVar2._12_4_ = local_b4;
        auVar1 = vsat0_q(auVar2);
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar23 = vi2uc_q(auVar1);
        puVar7 = puVar6 + 2;
        puVar8 = puVar6 + 5;
        *puVar6 = ((uint)puVar8 >> 0x18 & 0xf) << 0x10 | 0x10000000;
        puVar6[1] = (uint)puVar8 & 0xffffff | 0x8000000;
        *(short *)puVar7 = (short)(int)fVar18;
        *(short *)((int)puVar6 + 10) = (short)local_58;
        *(undefined2 *)(puVar6 + 3) = 0xffec;
        *(short *)((int)puVar6 + 0xe) = (short)(int)(fVar19 + fVar21);
        *(short *)(puVar6 + 4) = (short)local_5c;
        *(undefined2 *)((int)puVar6 + 0x12) = 0xffec;
        *puVar8 = uVar23 & 0xffffff | 0x55000000;
        puVar6[6] = uVar23 >> 0x18 | 0x58000000;
        puVar6[7] = 0x12000100;
        puVar8 = puVar6 + 8;
        if (puVar7 != (uint *)0x0) {
          *puVar8 = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
          puVar6[9] = (uint)puVar7 & 0xffffff | 0x1000000;
          puVar8 = puVar6 + 10;
        }
        *puVar8 = 0x4060002;
        puVar6 = puVar8 + 1;
      }
    }
    iVar17 = iVar17 + 1;
    if (0 < iVar17) break;
    uVar20 = *(undefined4 *)(param_2 + 0x74);
  }
  auVar3._4_4_ = local_9c;
  auVar3._0_4_ = local_a0;
  auVar3._8_4_ = local_98;
  auVar3._12_4_ = local_94;
  auVar1 = vsat0_q(auVar3);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar23 = vi2uc_q(auVar1);
  puVar8 = puVar6 + 2;
  puVar7 = puVar6 + 5;
  *puVar6 = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  puVar6[1] = (uint)puVar7 & 0xffffff | 0x8000000;
  uVar11 = (undefined2)local_4c;
  *(undefined2 *)puVar8 = uVar11;
  uVar4 = (undefined2)local_58;
  *(undefined2 *)((int)puVar6 + 10) = uVar4;
  *(undefined2 *)(puVar6 + 3) = 0xfff6;
  uVar10 = (undefined2)local_50;
  *(undefined2 *)((int)puVar6 + 0xe) = uVar10;
  uVar12 = (undefined2)local_5c;
  *(undefined2 *)(puVar6 + 4) = uVar12;
  *(undefined2 *)((int)puVar6 + 0x12) = 0xfff6;
  *puVar7 = uVar23 & 0xffffff | 0x55000000;
  puVar6[6] = uVar23 >> 0x18 | 0x58000000;
  puVar6[7] = 0x12000100;
  puVar7 = puVar6 + 8;
  if (puVar8 != (uint *)0x0) {
    *puVar7 = ((uint)puVar8 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar6[9] = (uint)puVar8 & 0xffffff | 0x1000000;
    puVar7 = puVar6 + 10;
  }
  *puVar7 = 0x4060002;
  fVar18 = *(float *)(param_2 + 0x84);
  puVar8 = puVar7 + 3;
  puVar16 = puVar7 + 0x15;
  puVar7[1] = ((uint)puVar16 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  puVar7[2] = (uint)puVar16 & 0xffffff | 0x8000000;
  uVar13 = (ushort)(((int)(fVar18 * 15.0) & 0xffffU) << 0xc);
  uVar14 = uVar13 | 0x888;
  *(ushort *)puVar8 = uVar14;
  *(undefined2 *)((int)puVar7 + 0xe) = uVar11;
  *(undefined2 *)(puVar7 + 4) = uVar4;
  uVar13 = uVar13 | 0xeee;
  uVar15 = (undefined2)(int)((fVar21 + local_48) * 0.5);
  *(ushort *)(puVar7 + 5) = uVar13;
  *(undefined2 *)((int)puVar7 + 0x16) = uVar15;
  *(undefined2 *)(puVar7 + 6) = uVar4;
  *(ushort *)(puVar7 + 7) = uVar14;
  *(undefined2 *)((int)puVar7 + 0x1e) = uVar10;
  *(undefined2 *)(puVar7 + 8) = uVar4;
  uVar4 = (undefined2)(int)((local_60 + fVar22) * 0.5);
  *(ushort *)(puVar7 + 9) = uVar13;
  *(undefined2 *)((int)puVar7 + 0x26) = uVar10;
  *(undefined2 *)(puVar7 + 10) = uVar4;
  *(ushort *)(puVar7 + 0xb) = uVar14;
  *(undefined2 *)((int)puVar7 + 0x2e) = uVar10;
  *(undefined2 *)(puVar7 + 0xc) = uVar12;
  *(ushort *)(puVar7 + 0xd) = uVar13;
  *(undefined2 *)((int)puVar7 + 0x36) = uVar15;
  *(undefined2 *)(puVar7 + 0xe) = uVar12;
  *(ushort *)(puVar7 + 0xf) = uVar14;
  *(undefined2 *)((int)puVar7 + 0x3e) = uVar11;
  *(undefined2 *)(puVar7 + 0x10) = uVar12;
  *(ushort *)(puVar7 + 0x11) = uVar13;
  *(undefined2 *)((int)puVar7 + 0x46) = uVar11;
  *(undefined2 *)(puVar7 + 0x12) = uVar4;
  *(undefined2 *)(puVar7 + 0x13) = *(undefined2 *)puVar8;
  *(undefined2 *)((int)puVar7 + 0x4e) = *(undefined2 *)((int)puVar7 + 0xe);
  *(undefined2 *)(puVar7 + 0x14) = *(undefined2 *)(puVar7 + 4);
  iVar9 = 0;
  puVar6 = puVar8;
  do {
    *(undefined2 *)((int)puVar6 + 6) = 0;
    iVar9 = iVar9 + 1;
    puVar6 = puVar6 + 2;
  } while (iVar9 < 9);
  *puVar16 = 0x55ffffff;
  puVar7[0x16] = 0x580000ff;
  puVar7[0x17] = 0x12000118;
  puVar6 = puVar7 + 0x18;
  if (puVar8 != (uint *)0x0) {
    *puVar6 = ((uint)puVar8 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar7[0x19] = (uint)puVar8 & 0xffffff | 0x1000000;
    puVar6 = puVar7 + 0x1a;
  }
  *puVar6 = 0x4020009;
  return puVar6 + 1;
}

