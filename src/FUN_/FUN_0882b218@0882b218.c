#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_0882b218(int param_1)

{
  undefined auVar1 [16];
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined4 in_V74;
  
  puVar3 = (undefined4 *)FUN_0882affc();
  *puVar3 = 0xdf0000a2;
  puVar3[1] = 0xe0000000;
  puVar3[2] = 0xe1ffffff;
  auVar1._8_4_ = 0x3f800000;
  auVar1._0_8_ = 0x3f8000003f800000;
  auVar1._12_4_ = *(undefined4 *)(param_1 + 0x530);
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar8 = vi2uc_q(auVar1);
  puVar3[3] = uVar8 & 0xffffff | 0x55000000;
  puVar3[4] = uVar8 >> 0x18 | 0x58000000;
  uVar8 = param_1 + 0x20;
  if (*(char *)(param_1 + 0x544) == '\0') {
    *(undefined *)(param_1 + 0x544) = 1;
    iVar5 = 0;
    sVar6 = 0;
    sVar7 = 8;
    do {
      *(short *)(param_1 + 0x20) = sVar6;
      *(short *)(param_1 + 0x2a) = sVar7;
      sVar2 = (short)(iVar5 / 2) * 0xf;
      *(short *)(param_1 + 0x24) = sVar2;
      *(short *)(param_1 + 0x2e) = sVar2 + 0xf;
      *(undefined2 *)(param_1 + 0x22) = 0;
      *(undefined2 *)(param_1 + 0x2c) = 0x100;
      *(undefined2 *)(param_1 + 0x26) = 0;
      *(undefined2 *)(param_1 + 0x30) = 0x110;
      *(undefined2 *)(param_1 + 0x32) = 0;
      *(undefined2 *)(param_1 + 0x28) = 0;
      iVar5 = iVar5 + 2;
      sVar6 = sVar6 + 8;
      param_1 = param_1 + 0x14;
      sVar7 = sVar7 + 8;
    } while (iVar5 < 0x40);
  }
  puVar3[5] = 0x12800102;
  puVar4 = puVar3 + 6;
  if (uVar8 != 0) {
    *puVar4 = (uVar8 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar3[7] = uVar8 & 0xffffff | 0x1000000;
    puVar4 = puVar3 + 8;
  }
  *puVar4 = 0x4060040;
  return puVar4 + 1;
}

