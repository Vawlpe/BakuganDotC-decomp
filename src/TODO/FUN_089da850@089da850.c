#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089da850(uint **param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar3 = *param_1;
  *param_1 = puVar3 + 0xc;
  uVar1 = param_2 + 1U & 3;
  uVar4 = -1 << (4 - uVar1) * 8 & 0x2b000000U | *(uint *)((param_2 + 1U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 5U & 3;
  uVar6 = -1 << (4 - uVar1) * 8 & 0x2b000000U | *(uint *)((param_2 + 5U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 9U & 3;
  uVar8 = -1 << (4 - uVar1) * 8 & 0x2b000000U | *(uint *)((param_2 + 9U) - uVar1) >> uVar1 * 8;
  *puVar3 = uVar4;
  puVar3[1] = uVar6;
  puVar3[2] = uVar8;
  uVar1 = param_2 + 0x11U & 3;
  uVar4 = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x11U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x15U & 3;
  uVar6 = uVar6 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x15U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x19U & 3;
  uVar8 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x19U) - uVar1) >> uVar1 * 8;
  puVar3[3] = uVar4;
  puVar3[4] = uVar6;
  puVar3[5] = uVar8;
  uVar1 = param_2 + 0x21U & 3;
  uVar5 = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x21U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x25U & 3;
  uVar7 = uVar6 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x25U) - uVar1) >> uVar1 * 8;
  uVar1 = param_2 + 0x29U & 3;
  uVar9 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x29U) - uVar1) >> uVar1 * 8;
  puVar3[6] = uVar5;
  puVar3[7] = uVar7;
  puVar3[8] = uVar9;
  uVar1 = param_2 + 0x31U & 3;
  uVar4 = param_2 + 0x35U & 3;
  uVar8 = *(uint *)((param_2 + 0x35U) - uVar4);
  uVar6 = param_2 + 0x39U & 3;
  uVar2 = *(uint *)((param_2 + 0x39U) - uVar6);
  puVar3[9] = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_2 + 0x31U) - uVar1) >> uVar1 * 8;
  puVar3[10] = uVar7 & -1 << (4 - uVar4) * 8 | uVar8 >> uVar4 * 8;
  puVar3[0xb] = uVar9 & -1 << (4 - uVar6) * 8 | uVar2 >> uVar6 * 8;
  return;
}

