#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089e2848(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  *param_1 = 0x3e000000;
  uVar1 = param_2 + 1U & 3;
  uVar4 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_2 + 1U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 5U & 3;
  uVar6 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_2 + 5U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 9U & 3;
  uVar8 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_2 + 9U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0xdU & 3;
  uVar10 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_2 + 0xdU) - uVar1) >> uVar1 * 8;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  param_1[3] = uVar8;
  param_1[4] = uVar10;
  uVar1 = param_2 + 0x11U & 3;
  uVar4 = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x11U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x15U & 3;
  uVar6 = uVar6 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x15U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x19U & 3;
  uVar8 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x19U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x1fU & 3;
  uVar10 = uVar10 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x1fU) - uVar1) >> uVar1 * 8;
  param_1[5] = uVar4;
  param_1[6] = uVar6;
  param_1[7] = uVar8;
  param_1[8] = uVar10;
  uVar1 = param_2 + 0x21U & 3;
  uVar5 = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x21U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x25U & 3;
  uVar7 = uVar6 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x25U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x29U & 3;
  uVar9 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x29U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x2dU & 3;
  uVar11 = uVar10 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x2dU) - uVar1) >> uVar1 * 8;
  param_1[9] = uVar5;
  param_1[10] = uVar7;
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar11;
  uVar1 = param_2 + 0x31U & 3;
  uVar4 = param_2 + 0x35U & 3;
  uVar10 = *(uint *)((param_2 + 0x35U) - uVar4);
  uVar6 = param_2 + 0x39U & 3;
  uVar2 = *(uint *)((param_2 + 0x39U) - uVar6);
  uVar8 = param_2 + 0x3dU & 3;
  uVar3 = *(uint *)((param_2 + 0x3dU) - uVar8);
  param_1[0xd] = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x31U) - uVar1) >> uVar1 * 8;
  param_1[0xe] = uVar7 & -1 << (4 - uVar4) * 8 | uVar10 >> uVar4 * 8;
  param_1[0xf] = uVar9 & -1 << (4 - uVar6) * 8 | uVar2 >> uVar6 * 8;
  param_1[0x10] = uVar11 & -1 << (4 - uVar8) * 8 | uVar3 >> uVar8 * 8;
  return param_1 + 0x11;
}

