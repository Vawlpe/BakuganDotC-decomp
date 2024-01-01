#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f26e4(undefined (*param_1) [16])

{
  undefined auVar1 [16];
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 in_V74;
  
  DAT_08ac5db0 = DAT_08ac5db0 ^ 1;
  DAT_08ac5db4 = (uint *)(DAT_08ac5dc0 + DAT_08ac5db0 * 0x60000);
  DAT_08ac5db8 = (int)DAT_08ac5db4;
  FUN_08a1e4a4(4);
  DAT_08ac5db4 = (uint *)FUN_08a1ee1c(0);
  uVar3 = 0;
  if (DAT_08ac5db0 == 0) {
    uVar3 = 0x88000;
  }
  *DAT_08ac5db4 = 0xd2000003;
  DAT_08ac5db4[1] = 0x9d000200;
  DAT_08ac5db4[2] = uVar3 | 0x9c000000;
  auVar1 = vsat0_q(*param_1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar10 = vi2uc_q(auVar1);
  puVar6 = DAT_08ac5db4 + 5;
  puVar4 = DAT_08ac5db4 + 0x65;
  DAT_08ac5db4[3] = ((uint)puVar4 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  DAT_08ac5db4[4] = (uint)puVar4 & 0xffffff | 0x8000000;
  iVar7 = 0;
  puVar8 = puVar6;
  do {
    *puVar8 = uVar10;
    uVar2 = (ushort)iVar7 & 1;
    if (iVar7 < 0) {
      uVar2 = -uVar2;
    }
    *(ushort *)(puVar8 + 1) = ((short)(iVar7 / 2) + uVar2) * 0x20;
    uVar2 = (ushort)iVar7 & 1;
    if (iVar7 < 0) {
      sVar9 = uVar2 * -0x110;
    }
    else {
      sVar9 = uVar2 * 0x110;
    }
    *(short *)((int)puVar8 + 6) = sVar9;
    *(undefined2 *)(puVar8 + 2) = 0;
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 3;
  } while (iVar7 < 0x20);
  *puVar4 = 0xd3000701;
  DAT_08ac5db4[0x66] = 0x1280011c;
  puVar5 = DAT_08ac5db4 + 0x67;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar5 = ((uint)puVar6 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    DAT_08ac5db4[0x68] = (uint)puVar6 & 0xffffff | 0x1000000;
    puVar5 = DAT_08ac5db4 + 0x69;
  }
  *puVar5 = 0x4060020;
  puVar5[1] = 0xd3000000;
  DAT_08ac5db4 = puVar5 + 2;
  return;
}

