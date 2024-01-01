#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089f4cec(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *param_1 = 0x3a000000;
  uVar1 = param_2 + 1U & 3;
  uVar3 = -1 << (4 - uVar1) * 8 & 0x3b000000U | *(uint *)((param_2 + 1U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 5U & 3;
  uVar5 = -1 << (4 - uVar1) * 8 & 0x3b000000U | *(uint *)((param_2 + 5U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 9U & 3;
  uVar7 = -1 << (4 - uVar1) * 8 & 0x3b000000U | *(uint *)((param_2 + 9U) - uVar1) >> uVar1 * 8;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  uVar1 = param_2 + 0x11U & 3;
  uVar3 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x11U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x15U & 3;
  uVar5 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x15U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x19U & 3;
  uVar7 = uVar7 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x19U) - uVar1) >> uVar1 * 8;
  param_1[4] = uVar3;
  param_1[5] = uVar5;
  param_1[6] = uVar7;
  uVar1 = param_2 + 0x21U & 3;
  uVar4 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x21U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x25U & 3;
  uVar6 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x25U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x29U & 3;
  uVar8 = uVar7 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x29U) - uVar1) >> uVar1 * 8;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar8;
  uVar1 = param_3 + 1U & 3;
  uVar3 = param_3 + 5U & 3;
  uVar7 = *(uint *)((param_3 + 5U) - uVar3);
  uVar5 = param_3 + 9U & 3;
  uVar2 = *(uint *)((param_3 + 9U) - uVar5);
  param_1[10] = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 1U) - uVar1) >> uVar1 * 8;
  param_1[0xb] = uVar6 & -1 << (4 - uVar3) * 8 | uVar7 >> uVar3 * 8;
  param_1[0xc] = uVar8 & -1 << (4 - uVar5) * 8 | uVar2 >> uVar5 * 8;
  return param_1 + 0xd;
}

