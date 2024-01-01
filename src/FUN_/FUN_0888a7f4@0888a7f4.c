#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888a7f4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,uint *param_7,undefined (*param_8) [16])

{
  undefined auVar1 [16];
  ushort *puVar2;
  ushort *puVar3;
  uint *puVar4;
  uint *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 in_V74;
  
  auVar1 = vsat0_q(*param_8);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar12 = vi2uc_q(auVar1);
  uVar6 = (ushort)((uVar12 >> 0x1c) << 0xc);
  uVar11 = uVar6 | (ushort)((uVar12 >> 0x14 & 0xf) << 8) | (ushort)((uVar12 >> 0xc & 0xf) << 4) |
           (ushort)(uVar12 >> 4) & 0xf;
  uVar9 = uVar6 | (ushort)((uVar12 >> 0x16 & 7) << 8) | (ushort)((uVar12 >> 0xe & 7) << 4) |
          (ushort)(uVar12 >> 6) & 7;
  uVar6 = (ushort)(int)param_1;
  uVar7 = (ushort)(int)param_2;
  uVar8 = (ushort)(int)param_3;
  if ((int)(short)uVar8 - (int)(short)uVar6 < 2) {
    uVar8 = (ushort)((uint)(((short)uVar8 + 1) * 0x10000) >> 0x10);
  }
  uVar12 = (int)param_7 + 0x17;
  puVar3 = (ushort *)(uVar12 & 0xfffffff0);
  puVar5 = (uint *)(puVar3 + 0x14);
  *param_7 = ((uint)puVar5 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  param_7[1] = (uint)puVar5 & 0xffffff | 0x8000000;
  puVar2 = puVar3 + 0x18;
  puVar4 = (uint *)(puVar3 + 0x2c);
  *puVar5 = ((uint)puVar4 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  *(uint *)(puVar3 + 0x16) = (uint)puVar4 & 0xffffff | 0x8000000;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  uVar10 = (ushort)(int)param_5;
  puVar3[3] = uVar10;
  *puVar3 = uVar9;
  puVar3[5] = uVar8;
  puVar3[6] = uVar7;
  puVar3[7] = uVar10;
  puVar3[4] = uVar9;
  puVar3[9] = uVar8;
  puVar3[10] = 0xfffe;
  puVar3[0xb] = uVar10;
  puVar3[8] = uVar11;
  puVar3[0xd] = uVar6;
  puVar3[0xe] = 0xfffe;
  puVar3[0xf] = uVar10;
  puVar3[0xc] = uVar11;
  puVar3[0x11] = uVar6;
  puVar3[0x12] = uVar7;
  puVar3[0x13] = uVar10;
  puVar3[0x10] = uVar9;
  puVar3[0x19] = uVar6;
  puVar3[0x1a] = 0xfffe;
  puVar3[0x1b] = uVar10;
  *puVar2 = uVar11;
  puVar3[0x1d] = uVar8;
  puVar3[0x1e] = 0xfffe;
  puVar3[0x1f] = uVar10;
  puVar3[0x1c] = uVar11;
  puVar3[0x21] = uVar8;
  puVar3[0x22] = (ushort)(int)param_4;
  puVar3[0x23] = uVar10;
  puVar3[0x20] = uVar9;
  puVar3[0x25] = uVar6;
  puVar3[0x26] = (ushort)(int)param_4;
  puVar3[0x27] = uVar10;
  puVar3[0x24] = uVar9;
  puVar3[0x29] = uVar6;
  puVar3[0x2a] = 0xfffe;
  puVar3[0x2b] = uVar10;
  puVar3[0x28] = uVar11;
  auVar1._4_4_ = DAT_08b00194;
  auVar1._0_4_ = DAT_08b00190;
  auVar1._8_4_ = DAT_08b00198;
  auVar1._12_4_ = DAT_08b0019c;
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar13 = vi2uc_q(auVar1);
  *puVar4 = uVar13 & 0xffffff | 0x55000000;
  *(uint *)(puVar3 + 0x2e) = uVar13 >> 0x18 | 0x58000000;
  *(undefined4 *)(puVar3 + 0x30) = 0x12000118;
  puVar4 = (uint *)(puVar3 + 0x32);
  if (puVar3 != (ushort *)0x0) {
    *puVar4 = (uVar12 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    *(uint *)(puVar3 + 0x34) = uVar12 & 0xfffff0 | 0x1000000;
    puVar4 = (uint *)(puVar3 + 0x36);
  }
  *puVar4 = 0x4050005;
  puVar4[1] = 0x12000118;
  puVar5 = puVar4 + 2;
  if (puVar2 != (ushort *)0x0) {
    *puVar5 = ((int)puVar3 + 0x3fU >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar4[3] = (uint)puVar2 & 0xffffff | 0x1000000;
    puVar5 = puVar4 + 4;
  }
  *puVar5 = 0x4050005;
  puVar5[1] = 0xc9000103;
  puVar5[2] = 0x23000000;
  return;
}

