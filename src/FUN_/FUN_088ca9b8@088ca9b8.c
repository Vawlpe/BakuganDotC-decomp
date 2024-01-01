#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ca9b8(float param_1,undefined4 param_2,int param_3,undefined (*param_4) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined auVar5 [16];
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 in_V74;
  
  puVar6 = (uint *)FUN_089f1308();
  puVar11 = puVar6 + 2;
  puVar7 = puVar6 + 0x2a;
  *puVar6 = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  puVar6[1] = (uint)puVar7 & 0xffffff | 0x8000000;
  memcpy_jak(puVar11,&DAT_08a932a4,0xa0);
  puVar6[0x18] = (uint)((float)puVar6[0x18] + param_1);
  puVar6[0x1d] = (uint)((float)puVar6[0x1d] + param_1);
  puVar6[0x22] = (uint)((float)puVar6[0x22] + param_1);
  puVar6[0x27] = (uint)((float)puVar6[0x27] + param_1);
  *puVar7 = 0xdf000032;
  puVar6[0x2b] = 0xe0000000;
  puVar6[0x2c] = 0xe1000000;
  auVar5 = vsat0_q(*param_4);
  auVar5 = vscl_q(auVar5,in_V74);
  auVar5 = vf2iz_q(auVar5,0x17);
  uVar12 = vi2uc_q(auVar5);
  puVar6[0x2d] = uVar12 & 0xffffff | 0x55000000;
  puVar6[0x2e] = uVar12 >> 0x18 | 0x58000000;
  puVar6[0x2f] = 0x3a000000;
  uVar12 = DAT_08b001c4 >> 8;
  uVar4 = DAT_08b001c8 >> 8;
  puVar6[0x30] = DAT_08b001c0 >> 8 | 0x3b000000;
  puVar6[0x31] = uVar12 | 0x3b000000;
  puVar6[0x32] = uVar4 | 0x3b000000;
  uVar12 = DAT_08b001d4 >> 8;
  uVar4 = DAT_08b001d8 >> 8;
  puVar6[0x33] = DAT_08b001d0 >> 8 | 0x3b000000;
  puVar6[0x34] = uVar12 | 0x3b000000;
  puVar6[0x35] = uVar4 | 0x3b000000;
  uVar8 = DAT_08b001e0 >> 8 | 0x3b000000;
  uVar9 = DAT_08b001e4 >> 8 | 0x3b000000;
  uVar10 = DAT_08b001e8 >> 8 | 0x3b000000;
  puVar6[0x36] = uVar8;
  puVar6[0x37] = uVar9;
  puVar6[0x38] = uVar10;
  uVar12 = param_3 + 1U & 3;
  uVar4 = param_3 + 5U & 3;
  uVar2 = *(uint *)((param_3 + 5U) - uVar4);
  uVar1 = param_3 + 9U & 3;
  uVar3 = *(uint *)((param_3 + 9U) - uVar1);
  puVar6[0x39] = uVar8 & -1 << (4 - uVar12) * 8 | *(uint *)((param_3 + 1U) - uVar12) >> uVar12 * 8;
  puVar6[0x3a] = uVar9 & -1 << (4 - uVar4) * 8 | uVar2 >> uVar4 * 8;
  puVar6[0x3b] = uVar10 & -1 << (4 - uVar1) * 8 | uVar3 >> uVar1 * 8;
  puVar6[0x3c] = 0x12000183;
  puVar7 = puVar6 + 0x3d;
  if (puVar11 != (uint *)0x0) {
    *puVar7 = ((uint)puVar11 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar6[0x3e] = (uint)puVar11 & 0xffffff | 0x1000000;
    puVar7 = puVar6 + 0x3f;
  }
  *puVar7 = 0x4040008;
  FUN_089f13c8(param_2,puVar7 + 1);
  return;
}

