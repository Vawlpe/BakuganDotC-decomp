#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_0882b0b4(int param_1)

{
  undefined auVar1 [16];
  undefined4 *puVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  undefined4 in_V74;
  
  puVar2 = (undefined4 *)FUN_0882affc();
  *puVar2 = 0xdf000032;
  puVar2[1] = 0xe0000000;
  puVar2[2] = 0xe1000000;
  auVar1._8_4_ = 0x3f800000;
  auVar1._0_8_ = 0x3f8000003f800000;
  auVar1._12_4_ = 0x3f70a3d7;
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar7 = vi2uc_q(auVar1);
  puVar2[3] = uVar7 & 0xffffff | 0x55000000;
  puVar2[4] = uVar7 >> 0x18 | 0x58000000;
  uVar7 = param_1 + 0x2a0;
  if (*(char *)(param_1 + 0x545) == '\0') {
    *(undefined *)(param_1 + 0x545) = 1;
    iVar5 = 0;
    sVar4 = 0;
    sVar6 = 8;
    do {
      *(short *)(param_1 + 0x2a0) = sVar4;
      *(short *)(param_1 + 0x2aa) = sVar6;
      *(short *)(param_1 + 0x2a4) = sVar4;
      *(short *)(param_1 + 0x2ae) = sVar6;
      *(undefined2 *)(param_1 + 0x2a2) = 0;
      *(undefined2 *)(param_1 + 0x2ac) = 0x100;
      *(undefined2 *)(param_1 + 0x2a6) = 0;
      *(undefined2 *)(param_1 + 0x2b0) = 0x100;
      *(undefined2 *)(param_1 + 0x2b2) = 0;
      *(undefined2 *)(param_1 + 0x2a8) = 0;
      iVar5 = iVar5 + 2;
      sVar4 = sVar4 + 8;
      param_1 = param_1 + 0x14;
      sVar6 = sVar6 + 8;
    } while (iVar5 < 0x40);
  }
  puVar2[5] = 0x12800102;
  puVar3 = puVar2 + 6;
  if (uVar7 != 0) {
    *puVar3 = (uVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar2[7] = uVar7 & 0xffffff | 0x1000000;
    puVar3 = puVar2 + 8;
  }
  *puVar3 = 0x4060040;
  return puVar3 + 1;
}

