#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882a694(int *param_1,uint **param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  uint *puVar3;
  undefined (*pauVar4) [16];
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_V74;
  
  puVar5 = *param_2;
  if (0.0 < (float)param_1[0x4b]) {
    *puVar5 = 0xdf000032;
    puVar5[1] = 0xe0000000;
    puVar5[2] = 0xe1000000;
    auVar2 = vsat0_q(*(undefined (*) [16])(param_1 + 0x48));
    auVar2 = vscl_q(auVar2,in_V74);
    auVar2 = vf2iz_q(auVar2,0x17);
    uVar9 = vi2uc_q(auVar2);
    puVar5[3] = uVar9 & 0xffffff | 0x55000000;
    puVar5[4] = uVar9 >> 0x18 | 0x58000000;
    puVar5[5] = 0x1e000001;
    puVar5[6] = 0x17000000;
    puVar5[7] = 0xe7000001;
    puVar5[8] = 0x53000000;
    puVar5[9] = 0x1d000000;
    puVar5[10] = 0x36001804;
    puVar5[0xb] = 0x22000000;
    puVar5[0xc] = 0x24000000;
    puVar5[0xd] = 0x483f8000;
    puVar5[0xe] = 0x493e9999;
    puVar5[0xf] = 0x4a000000;
    puVar5[0x10] = 0x4b3cf5c2;
    puVar5[0x11] = 0x3a000000;
    uVar9 = DAT_08b001c4 >> 8;
    uVar1 = DAT_08b001c8 >> 8;
    puVar5[0x12] = DAT_08b001c0 >> 8 | 0x3b000000;
    puVar5[0x13] = uVar9 | 0x3b000000;
    puVar5[0x14] = uVar1 | 0x3b000000;
    uVar9 = DAT_08b001d4 >> 8;
    uVar1 = DAT_08b001d8 >> 8;
    puVar5[0x15] = DAT_08b001d0 >> 8 | 0x3b000000;
    puVar5[0x16] = uVar9 | 0x3b000000;
    puVar5[0x17] = uVar1 | 0x3b000000;
    uVar9 = DAT_08b001e4 >> 8;
    uVar1 = DAT_08b001e8 >> 8;
    puVar5[0x18] = DAT_08b001e0 >> 8 | 0x3b000000;
    puVar5[0x19] = uVar9 | 0x3b000000;
    puVar5[0x1a] = uVar1 | 0x3b000000;
    uVar9 = DAT_08b001f4 >> 8;
    uVar1 = DAT_08b001f8 >> 8;
    puVar5[0x1b] = DAT_08b001f0 >> 8 | 0x3b000000;
    puVar5[0x1c] = uVar9 | 0x3b000000;
    puVar5[0x1d] = uVar1 | 0x3b000000;
    puVar3 = (uint *)FUN_089f7110(param_1[0x4d],puVar5 + 0x1e,*(int *)(*param_1 + 8) == 0x12);
    puVar7 = puVar3 + 2;
    puVar6 = puVar3 + 0x62;
    *puVar3 = ((uint)puVar6 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar3[1] = (uint)puVar6 & 0xffffff | 0x8000000;
    uVar9 = param_1[0x44];
    iVar8 = 0;
    puVar5 = puVar7;
    do {
      *puVar5 = param_1[uVar9 * 4 + 4];
      puVar5[1] = param_1[uVar9 * 4 + 5];
      puVar5[2] = param_1[uVar9 * 4 + 6];
      pauVar4 = (undefined (*) [16])(param_1 + uVar9 * 4 + 4);
      auVar2 = vsub_q(*(undefined (*) [16])(param_1 + uVar9 * 4 + 0x24),*pauVar4);
      auVar2 = vscl_q(auVar2,0x3eaaa64c);
      auVar2 = vadd_q(*pauVar4,auVar2);
      puVar5[3] = auVar2._0_4_;
      puVar5[4] = auVar2._4_4_;
      puVar5[5] = auVar2._8_4_;
      auVar2 = vsub_q(*(undefined (*) [16])(param_1 + uVar9 * 4 + 0x24),*pauVar4);
      auVar2 = vscl_q(auVar2,0x3f2aa64c);
      auVar2 = vadd_q(*pauVar4,auVar2);
      puVar5[6] = auVar2._0_4_;
      puVar5[7] = auVar2._4_4_;
      puVar5[8] = auVar2._8_4_;
      puVar5[9] = param_1[uVar9 * 4 + 0x24];
      puVar5[10] = param_1[uVar9 * 4 + 0x25];
      puVar5[0xb] = param_1[uVar9 * 4 + 0x26];
      uVar9 = uVar9 - 1 & 7;
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 0xc;
    } while (iVar8 < 8);
    *puVar6 = 0x12000180;
    puVar5 = puVar3 + 99;
    if (puVar7 != (uint *)0x0) {
      *puVar5 = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar3[100] = (uint)puVar7 & 0xffffff | 0x1000000;
      puVar5 = puVar3 + 0x65;
    }
    *puVar5 = 0x60f0804;
    puVar5[1] = 0xe7000000;
    puVar5[2] = 0x36000202;
    puVar5[3] = 0x53000003;
    puVar5[4] = 0x483f8000;
    puVar5[5] = 0x493f8000;
    puVar5[6] = 0x4a000000;
    puVar5[7] = 0x4b000000;
    *param_2 = puVar5 + 8;
  }
  return;
}

