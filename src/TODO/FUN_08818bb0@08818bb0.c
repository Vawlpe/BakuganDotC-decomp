#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08818bb0(float param_1,float param_2,float param_3,int param_4,int param_5,
                      uint param_6,undefined4 param_7,char param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec [3];
  float local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc [3];
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  uint local_60;
  undefined4 *local_5c;
  char local_58;
  undefined4 *local_54;
  undefined local_50;
  
  local_60 = param_6 & 0xff;
  local_f8 = 0.0;
  local_68 = 0;
  local_f4 = 0.0;
  local_64 = 0;
  local_50 = 1;
  *(undefined4 *)(param_4 + 0x84) = 0;
  *(undefined4 *)(param_4 + 0x88) = 0;
  local_58 = '\0';
  fVar11 = local_f8;
  local_70 = param_3;
  if ((local_60 != 0) &&
     (FUN_088184e8(0,param_4,param_5,&local_f4,&local_f8,0), fVar11 = DAT_08ab016c,
     *(int *)(param_4 + 0xd8) == 0)) {
    fVar11 = local_f8 * *(float *)(param_4 + 0x94);
  }
  local_f8 = fVar11;
  local_10c = param_2;
  if (param_8 != '\0') {
    local_f4 = local_f4 * *(float *)(param_4 + 0xa8);
    uVar10 = vf2id_s(local_f4 * 0.5 + 0.5,0);
    local_90 = (float)vi2f_s(uVar10,0);
    local_10c = param_2 - local_90;
  }
  local_108 = 0;
  local_104 = 0;
  local_fc = 0;
  local_5c = (undefined4 *)(param_4 + 0xc0);
  local_54 = (undefined4 *)(param_4 + 0xb0);
  local_110 = param_1;
  local_100 = param_7;
LAB_08818d14:
  cVar4 = *(char *)(param_4 + 0xd1);
LAB_08818d18:
  if (cVar4 == '\0') {
    iVar5 = FUN_08818370(param_5,&local_100);
    if ((iVar5 != -0xc) && (iVar5 != -0xb)) {
      local_f0 = local_100;
      uVar10 = FUN_08818370(param_5,&local_f0);
      iVar8 = FUN_088183ec(iVar5,uVar10);
      if (iVar8 != 0) {
        local_ec[0] = local_100;
        iVar8 = 0;
        local_e0 = local_110;
        fStack_dc = local_10c;
        uStack_d8 = local_108;
        uStack_d4 = local_104;
        fVar11 = (float)FUN_088184ac(param_4,0);
        local_e0 = local_e0 + fVar11;
        do {
          iVar13 = FUN_08818370(param_5,local_ec);
          if (iVar13 < 1) {
            iVar3 = FUN_0880dbb4();
            if ((iVar3 == 0) || (iVar13 != -5)) goto LAB_08818e8c;
            local_d0 = local_ec[0];
            uVar10 = FUN_08818370(param_5,&local_d0);
            iVar3 = FUN_088183ec(0xfffffffb,uVar10);
            if (iVar3 != 0) goto LAB_08818e8c;
          }
          iVar8 = iVar8 + 1;
          if (iVar13 == -5) {
            fVar11 = (float)FUN_088184ac(param_4,0);
            local_e0 = local_e0 + fVar11;
          }
          else {
            uVar10 = FUN_088184ac(param_4,iVar13);
            uVar10 = vf2id_s(uVar10,0);
            local_88 = (float)vi2f_s(uVar10,0);
            local_e0 = local_e0 + local_88;
          }
        } while( true );
      }
      iVar8 = *(int *)(param_4 + 0xe4);
      goto LAB_08818ecc;
    }
    param_5 = param_5 + 1;
  }
  else {
    iVar8 = -1;
    iVar5 = -1;
    if (*(int *)(param_4 + 0xd4) != 0) {
      iVar5 = FUN_08818370(*(undefined4 *)(param_4 + 0xd4),&local_fc);
    }
    if (iVar5 != iVar8) goto LAB_08818fa0;
    *(undefined *)(param_4 + 0xd1) = 0;
    *(undefined *)(param_4 + 0xd0) = 0;
  }
  goto LAB_08818d14;
LAB_08818e8c:
  if (iVar8 < 1) {
    iVar8 = *(int *)(param_4 + 0xe4);
  }
  else if ((int)((param_1 + *(float *)(param_4 + 0xe0)) - local_70) < (int)local_e0) {
    iVar5 = -3;
    iVar8 = *(int *)(param_4 + 0xe4);
  }
  else {
    iVar8 = *(int *)(param_4 + 0xe4);
  }
LAB_08818ecc:
  if (((0 < iVar8) && (iVar5 == -3)) && (*(int *)(param_4 + 0xe4) <= local_64 + 1)) {
    iVar5 = -4;
    local_58 = '\x01';
  }
  if (iVar5 == -1) {
    if (local_60 == 0) {
      return local_50;
    }
    for (; local_68 != 0; local_68 = *(int *)(local_68 + 4)) {
      *(float *)(local_68 + 0x60) = *(float *)(local_68 + 0x60) + (param_1 - local_110) * 0.5;
    }
    return local_50;
  }
LAB_08818fa0:
  if (iVar5 == -2) goto LAB_08818d14;
  if ((iVar5 == -3) || (iVar5 == -4)) {
    if (local_60 == 0) {
      fVar11 = *(float *)(param_4 + 0x98);
    }
    else {
      for (; local_68 != 0; local_68 = *(int *)(local_68 + 4)) {
        *(float *)(local_68 + 0x60) = *(float *)(local_68 + 0x60) + (param_1 - local_110) * 0.5;
      }
      local_68 = 0;
      fVar11 = *(float *)(param_4 + 0x98);
    }
    local_10c = local_10c + fVar11 * *(float *)(param_4 + 0xa8);
    if (*(char *)(param_4 + 0xd1) != '\0') {
      *(undefined *)(param_4 + 0xd1) = 0;
      *(undefined *)(param_4 + 0xd0) = 0;
    }
    if (iVar5 == -3) {
      local_64 = local_64 + 1;
    }
    if (iVar5 == -4) {
      local_64 = 0;
    }
    local_110 = param_1;
    if (local_58 != '\0') {
      local_cc[0] = local_100;
      iVar5 = 0;
      uStack_b8 = local_108;
      uStack_b4 = local_104;
      local_c0 = param_1;
      fStack_bc = local_10c;
      fVar11 = (float)FUN_088184ac(param_4,0);
      local_c0 = local_c0 + fVar11;
      puVar7 = local_cc;
      while (iVar8 = FUN_08818370(param_5,puVar7), -1 < iVar8) {
        iVar5 = iVar5 + 1;
      }
      if (0 < iVar5) {
        local_50 = 0;
      }
      *(undefined4 *)(param_4 + 0xe8) = local_100;
      return local_50;
    }
  }
  else {
    if (iVar5 == -0x11) {
      local_110 = local_110 + *(float *)(param_4 + 0x94);
      goto LAB_08818d14;
    }
    if (iVar5 == -5) {
      if (*(int *)(param_4 + 0xd8) == 0) {
        local_110 = local_110 + *(float *)(param_4 + 0x94) * 0.5;
      }
      else {
        fVar11 = (float)FUN_088184ac(param_4,0);
        local_110 = local_110 + fVar11;
      }
      goto LAB_08818d14;
    }
    if ((-6 < iVar5) || (iVar5 < -0xb)) {
      if ((iVar5 < -0xc) && (-0x10 < iVar5)) {
        cVar4 = *(char *)(param_4 + 0xd1);
      }
      else {
        if (iVar5 == -0x13) goto LAB_08818d14;
        if (iVar5 == -0x10) {
          *(undefined *)(param_4 + 0xd0) = 1;
          goto LAB_08818d14;
        }
        if (-1 < iVar5) {
          if (*(float *)(param_4 + 0xa0) < 2.147484e+09) {
            uVar6 = (uint)*(float *)(param_4 + 0xa0);
          }
          else {
            uVar6 = (int)(*(float *)(param_4 + 0xa0) - 2.147484e+09) + 0x80000000;
          }
          if (*(float *)(param_4 + 0xa4) < 2.147484e+09) {
            uVar9 = (uint)*(float *)(param_4 + 0xa4);
          }
          else {
            uVar9 = (int)(*(float *)(param_4 + 0xa4) - 2.147484e+09) + 0x80000000;
          }
          local_6c = 0;
          iVar13 = (0x200 / uVar6) * (0x200 / uVar9);
          uVar10 = *(undefined4 *)(*(int *)(param_4 + 0x80) + (iVar5 / iVar13) * 4);
          iVar8 = FUN_089f58b8(param_4,uVar10,&local_110);
          if (*(int *)(param_4 + 0x84) == 0) {
            *(int *)(param_4 + 0x84) = iVar8;
          }
          iVar5 = iVar5 % iVar13;
          *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + 1;
          if (*(float *)(param_4 + 0xa0) < 2.147484e+09) {
            iVar13 = (int)*(float *)(param_4 + 0xa0);
          }
          else {
            iVar13 = (int)(*(float *)(param_4 + 0xa0) - 2.147484e+09) + -0x80000000;
          }
          iVar13 = (iVar5 % (int)(0x200 / uVar6)) * iVar13;
          fVar11 = (float)iVar13;
          if (iVar13 < 0) {
            fVar11 = fVar11 + 4.294967e+09;
          }
          if (*(float *)(param_4 + 0xa4) < 2.147484e+09) {
            iVar13 = (int)*(float *)(param_4 + 0xa4);
          }
          else {
            iVar13 = (int)(*(float *)(param_4 + 0xa4) - 2.147484e+09) + -0x80000000;
          }
          iVar13 = (iVar5 / (int)(0x200 / uVar9)) * iVar13;
          fVar12 = (float)iVar13;
          if (iVar13 < 0) {
            fVar12 = fVar12 + 4.294967e+09;
          }
          *(undefined4 *)(iVar8 + 0xd4) = uVar10;
          FUN_089f4924(*(undefined4 *)(param_4 + 0xa0),*(undefined4 *)(param_4 + 0xa4),iVar8);
          if (*(float *)(param_4 + 0xa8) == 1.0) {
            local_a8 = *(undefined4 *)(param_4 + 0xa0);
            local_a4 = *(undefined4 *)(param_4 + 0xa4);
            local_b0 = fVar11;
            local_ac = fVar12;
            FUN_089f4060(iVar8,&local_b0);
          }
          else {
            *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 0x20;
            FUN_089f4954(*(undefined4 *)(param_4 + 0xa8),*(undefined4 *)(param_4 + 0xa8),0,iVar8,0);
            local_a0 = fVar11 + 1.0;
            local_9c = fVar12 + 1.0;
            local_98 = *(float *)(param_4 + 0xa0) - 1.0;
            local_94 = *(float *)(param_4 + 0xa4) - 1.0;
            FUN_089f4060(iVar8,&local_a0);
          }
          if (0x205 < iVar5) {
            local_6c = 1;
          }
          *(undefined4 *)(iVar8 + 0xd8) = local_6c;
          uVar10 = local_5c[1];
          uVar1 = local_5c[2];
          uVar2 = local_5c[3];
          *(undefined4 *)(iVar8 + 0xb0) = *local_5c;
          *(undefined4 *)(iVar8 + 0xb4) = uVar10;
          *(undefined4 *)(iVar8 + 0xb8) = uVar1;
          *(undefined4 *)(iVar8 + 0xbc) = uVar2;
          if (local_60 == 0) {
            fVar11 = *(float *)(param_4 + 0xa8);
          }
          else if (local_68 == 0) {
            fVar11 = *(float *)(param_4 + 0xa8);
            local_68 = iVar8;
          }
          else {
            fVar11 = *(float *)(param_4 + 0xa8);
          }
          if (fVar11 == 1.0) {
            uVar10 = vf2id_s(local_110,0);
            local_110 = (float)vi2f_s(uVar10,0);
            local_78 = local_110;
            uVar10 = FUN_088184ac(param_4,iVar5);
            uVar10 = vf2id_s(uVar10,0);
            local_74 = (float)vi2f_s(uVar10,0);
            local_110 = local_110 + local_74;
          }
          else {
            fVar11 = (float)FUN_088184ac(param_4,iVar5);
            local_110 = local_110 + fVar11;
          }
          goto LAB_08818d14;
        }
        cVar4 = *(char *)(param_4 + 0xd1);
      }
      goto LAB_08818d18;
    }
    uVar6 = iVar5 + 0xb;
    if (5 < uVar6) {
      cVar4 = *(char *)(param_4 + 0xd1);
      goto LAB_08818d18;
    }
    if (iVar5 == -0xb) {
      *(undefined4 *)(param_4 + 0xc0) = 0;
      *(undefined4 *)(param_4 + 0xc4) = 0;
      *(undefined4 *)(param_4 + 200) = 0x3f800000;
      *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_4 + 0xcc);
      goto LAB_08818d14;
    }
    if (uVar6 == 1) {
      *(undefined4 *)(param_4 + 0xc0) = 0;
      *(undefined4 *)(param_4 + 0xc4) = 0x3f800000;
      *(undefined4 *)(param_4 + 200) = 0;
      *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_4 + 0xcc);
      goto LAB_08818d14;
    }
    if (uVar6 == 2) {
      *(undefined4 *)(param_4 + 0xc0) = 0x3f800000;
      *(undefined4 *)(param_4 + 0xc4) = 0;
      *(undefined4 *)(param_4 + 200) = 0;
      *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_4 + 0xcc);
      goto LAB_08818d14;
    }
    if (uVar6 == 3) {
      *(undefined4 *)(param_4 + 0xc0) = 0;
      *(undefined4 *)(param_4 + 0xc4) = 0;
      *(undefined4 *)(param_4 + 200) = 0;
      *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_4 + 0xcc);
      goto LAB_08818d14;
    }
    if (uVar6 != 4) {
      uVar10 = local_54[1];
      uVar1 = local_54[2];
      uVar2 = local_54[3];
      *local_5c = *local_54;
      local_5c[1] = uVar10;
      local_5c[2] = uVar1;
      local_5c[3] = uVar2;
      cVar4 = *(char *)(param_4 + 0xd1);
      goto LAB_08818d18;
    }
    *(undefined4 *)(param_4 + 0xc0) = 0x3f800000;
    *(undefined4 *)(param_4 + 0xc4) = 0x3f800000;
    *(undefined4 *)(param_4 + 200) = 0x3f800000;
    *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_4 + 0xcc);
  }
  goto LAB_08818d14;
}

