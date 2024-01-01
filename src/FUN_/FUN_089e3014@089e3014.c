#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_089e3014(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if ((param_3 & 1) != 0) {
    *param_2 = 0x3c000000;
    uVar1 = param_1 + 0x91U & 3;
    uVar3 = -1 << (4 - uVar1) * 8 & 0x3d000000U | *(uint *)((param_1 + 0x91U) - uVar1) >> uVar1 * 8;
    uVar1 = param_1 + 0x95U & 3;
    uVar5 = -1 << (4 - uVar1) * 8 & 0x3d000000U | *(uint *)((param_1 + 0x95U) - uVar1) >> uVar1 * 8;
    uVar1 = param_1 + 0x99U & 3;
    uVar7 = -1 << (4 - uVar1) * 8 & 0x3d000000U | *(uint *)((param_1 + 0x99U) - uVar1) >> uVar1 * 8;
    param_2[1] = uVar3;
    param_2[2] = uVar5;
    param_2[3] = uVar7;
    uVar1 = param_1 + 0xa1U & 3;
    uVar3 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xa1U) - uVar1) >> uVar1 * 8;
    uVar1 = param_1 + 0xa5U & 3;
    uVar5 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xa5U) - uVar1) >> uVar1 * 8;
    uVar1 = param_1 + 0xa9U & 3;
    uVar7 = uVar7 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xa9U) - uVar1) >> uVar1 * 8;
    param_2[4] = uVar3;
    param_2[5] = uVar5;
    param_2[6] = uVar7;
    uVar1 = param_1 + 0xb1U & 3;
    uVar4 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xb1U) - uVar1) >> uVar1 * 8;
    uVar1 = param_1 + 0xb5U & 3;
    uVar6 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xb5U) - uVar1) >> uVar1 * 8;
    uVar1 = param_1 + 0xb9U & 3;
    uVar8 = uVar7 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xb9U) - uVar1) >> uVar1 * 8;
    param_2[7] = uVar4;
    param_2[8] = uVar6;
    param_2[9] = uVar8;
    uVar1 = param_1 + 0xc1U & 3;
    uVar3 = param_1 + 0xc5U & 3;
    uVar7 = *(uint *)((param_1 + 0xc5U) - uVar3);
    uVar5 = param_1 + 0xc9U & 3;
    uVar2 = *(uint *)((param_1 + 0xc9U) - uVar5);
    param_2[10] = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_1 + 0xc1U) - uVar1) >> uVar1 * 8;
    param_2[0xb] = uVar6 & -1 << (4 - uVar3) * 8 | uVar7 >> uVar3 * 8;
    param_2[0xc] = uVar8 & -1 << (4 - uVar5) * 8 | uVar2 >> uVar5 * 8;
    param_2 = param_2 + 0xd;
  }
  if ((param_3 & 2) != 0) {
    param_2 = (uint *)FUN_089e2848(param_2,param_1 + 0xd0);
  }
  if ((param_3 & 4) != 0) {
    fVar10 = *(float *)(param_1 + 0x164);
    fVar9 = *(float *)(param_1 + 0x168);
    uVar3 = (uint)fVar10;
    uVar1 = (int)fVar9;
    if (fVar9 <= fVar10) {
      uVar1 = uVar3;
      uVar3 = (int)fVar9;
    }
    fVar9 = (fVar9 + fVar10) * 0.5;
    DAT_08b0215c = *(float *)(param_1 + 0x154) + fVar9;
    *param_2 = (uint)(fVar9 - fVar10) >> 8 | 0x44000000;
    fVar9 = DAT_08b0215c;
    param_2[2] = uVar3 | 0xd6000000;
    param_2[1] = (uint)fVar9 >> 8 | 0x47000000;
    param_2[3] = uVar1 | 0xd7000000;
    param_2 = param_2 + 4;
  }
  if (param_1 != DAT_08ac5c8c) {
    DAT_08ac5c90 = param_1;
  }
  return param_2;
}

