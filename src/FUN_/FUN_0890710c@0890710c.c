#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890710c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0x5c);
      goto LAB_08907764;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  else {
    if (1 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x5c);
      goto LAB_08907764;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  uVar5 = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + iVar1 * 0xc + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x4c) * 0xc);
    if (*(int *)(param_1 + 0x38) < iVar1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x4c) * 0xc);
      uVar4 = *(uint *)(piVar2[2] + *(int *)(param_1 + 0x38) * 0x34);
      if (*(int *)(param_1 + 0x38) + 1 < *piVar2) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x4c) * 0xc + 8) +
                *(int *)(param_1 + 0x38) * 0x34;
        local_11c = *(undefined4 *)(iVar1 + 0x34);
        local_118 = *(float *)(iVar1 + 0x38);
        local_114 = *(float *)(iVar1 + 0x3c);
        local_110 = *(float *)(iVar1 + 0x40);
        local_10c = *(undefined4 *)(iVar1 + 0x44);
        local_108 = *(undefined4 *)(iVar1 + 0x48);
        local_104 = *(undefined4 *)(iVar1 + 0x4c);
        local_100 = *(undefined4 *)(iVar1 + 0x50);
        local_fc = *(undefined4 *)(iVar1 + 0x54);
        local_f4 = *(undefined4 *)(iVar1 + 0x5c);
        local_f8 = *(undefined4 *)(iVar1 + 0x58);
        local_f0 = *(undefined4 *)(iVar1 + 0x60);
        local_ec = *(undefined4 *)(iVar1 + 100);
      }
      else if (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x4c) * 0xc) + -1 < 0) {
        memset_jak(&local_11c,0,0x34);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
      else {
        piVar2 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x4c) * 0xc);
        iVar1 = piVar2[2] + *piVar2 * 0x34;
        local_11c = *(undefined4 *)(iVar1 + -0x34);
        local_118 = *(float *)(iVar1 + -0x30);
        local_114 = *(float *)(iVar1 + -0x2c);
        local_110 = *(float *)(iVar1 + -0x28);
        local_10c = *(undefined4 *)(iVar1 + -0x24);
        local_108 = *(undefined4 *)(iVar1 + -0x20);
        local_104 = *(undefined4 *)(iVar1 + -0x1c);
        local_100 = *(undefined4 *)(iVar1 + -0x18);
        local_fc = *(undefined4 *)(iVar1 + -0x14);
        local_f4 = *(undefined4 *)(iVar1 + -0xc);
        local_f8 = *(undefined4 *)(iVar1 + -0x10);
        local_f0 = *(undefined4 *)(iVar1 + -8);
        local_ec = *(undefined4 *)(iVar1 + -4);
      }
      if (*(uint *)(param_1 + 0x30) == uVar4 >> 0x10) {
        local_e0 = local_118 * 0.1;
        fStack_dc = local_114 * 0.1;
        fStack_d8 = local_110 * 0.1;
        local_b4 = 0;
        local_b0 = local_10c;
        local_ac = local_108;
        local_a8 = local_104;
        local_a4 = 0;
        uStack_d4 = 0;
        local_d0 = local_10c;
        uStack_cc = local_108;
        uStack_c8 = local_104;
        uStack_c4 = 0;
        local_c0 = local_e0;
        local_bc = fStack_dc;
        local_b8 = fStack_d8;
        FUN_088fdffc(*(undefined4 *)(param_1 + 0x5c),&local_e0,&local_d0,local_11c._2_2_);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        goto LAB_089074a0;
      }
      iVar1 = *(int *)(param_1 + 0x10);
    }
    else {
      *(int *)(param_1 + 0x38) = iVar1 + -1;
      uVar5 = 1;
LAB_089074a0:
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (*(int *)(iVar1 + 0xa4) == 0) {
      uVar5 = uVar5 + 1;
    }
    else if (*(int *)(param_1 + 0x3c) < *(int *)(iVar1 + 0xa0)) {
      puVar3 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xa4) + *(int *)(param_1 + 0x3c) * 0x30)
      ;
      local_a0 = *puVar3;
      local_9c = puVar3[1];
      local_98 = puVar3[2];
      local_90 = puVar3[4];
      local_94 = puVar3[3];
      local_8c = puVar3[5];
      local_88 = puVar3[6];
      local_80 = puVar3[8];
      local_84 = puVar3[7];
      local_7c = puVar3[9];
      local_78 = puVar3[10];
      local_74 = puVar3[0xb];
      if (*(int *)(param_1 + 0x3c) + 1 < *(int *)(*(int *)(param_1 + 0x10) + 0xa0)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xa4) + *(int *)(param_1 + 0x3c) * 0x30;
        local_70 = *(undefined4 *)(iVar1 + 0x30);
        local_6c = *(float *)(iVar1 + 0x34);
        local_68 = *(float *)(iVar1 + 0x38);
        local_60 = *(undefined4 *)(iVar1 + 0x40);
        local_64 = *(float *)(iVar1 + 0x3c);
        local_5c = *(undefined4 *)(iVar1 + 0x44);
        local_58 = *(undefined4 *)(iVar1 + 0x48);
        local_50 = *(undefined4 *)(iVar1 + 0x50);
        local_54 = *(undefined4 *)(iVar1 + 0x4c);
        local_4c = *(undefined4 *)(iVar1 + 0x54);
        local_48 = *(undefined4 *)(iVar1 + 0x58);
        local_44 = *(undefined4 *)(iVar1 + 0x5c);
      }
      else if (*(int *)(*(int *)(param_1 + 0x10) + 0xa0) + -1 < 0) {
        memset_jak(&local_70,0,0x30);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xa4) +
                *(int *)(*(int *)(param_1 + 0x10) + 0xa0) * 0x30;
        local_70 = *(undefined4 *)(iVar1 + -0x30);
        local_6c = *(float *)(iVar1 + -0x2c);
        local_68 = *(float *)(iVar1 + -0x28);
        local_60 = *(undefined4 *)(iVar1 + -0x20);
        local_64 = *(float *)(iVar1 + -0x24);
        local_5c = *(undefined4 *)(iVar1 + -0x1c);
        local_58 = *(undefined4 *)(iVar1 + -0x18);
        local_50 = *(undefined4 *)(iVar1 + -0x10);
        local_54 = *(undefined4 *)(iVar1 + -0x14);
        local_4c = *(undefined4 *)(iVar1 + -0xc);
        local_48 = *(undefined4 *)(iVar1 + -8);
        local_44 = *(undefined4 *)(iVar1 + -4);
      }
      if (*(uint *)(param_1 + 0x30) == local_a0 >> 0x10) {
        local_40 = local_6c * 0.1;
        fStack_3c = local_68 * 0.1;
        fStack_38 = local_64 * 0.1;
        local_24 = 0;
        uStack_34 = 0;
        local_30 = local_40;
        local_2c = fStack_3c;
        local_28 = fStack_38;
        FUN_088fe07c(local_4c,local_90,*(undefined4 *)(param_1 + 0x5c),&local_40,local_70._2_2_);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x3c) = *(int *)(iVar1 + 0xa0) + -1;
      uVar5 = uVar5 + 1;
    }
  }
  if (uVar5 < 2) {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    iVar1 = *(int *)(param_1 + 0x5c);
  }
LAB_08907764:
  *(undefined4 *)(iVar1 + 0x350) = *(undefined4 *)(param_1 + 0x30);
  return;
}

