#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c73ec(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  short sVar7;
  
  FUN_08824ab8(*(undefined4 *)(*param_1 + 8),param_2,DAT_08ac5c90);
  FUN_089f50a0(*(undefined4 *)(*param_1 + 8),param_2,DAT_08ac5c90,0);
  puVar2 = (uint *)FUN_089f1308(param_2);
  puVar3 = puVar2 + 2;
  puVar4 = puVar2 + 0x62;
  *puVar2 = ((uint)puVar4 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  puVar2[1] = (uint)puVar4 & 0xffffff | 0x8000000;
  iVar6 = 0;
  puVar5 = puVar3;
  do {
    *puVar5 = 0;
    uVar1 = (ushort)iVar6 & 1;
    if (iVar6 < 0) {
      uVar1 = -uVar1;
    }
    *(ushort *)(puVar5 + 1) = ((short)(iVar6 / 2) + uVar1) * 0x20;
    uVar1 = (ushort)iVar6 & 1;
    if (iVar6 < 0) {
      sVar7 = uVar1 * -0x110;
    }
    else {
      sVar7 = uVar1 * 0x110;
    }
    *(short *)((int)puVar5 + 6) = sVar7;
    *(undefined2 *)(puVar5 + 2) = 0;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 3;
  } while (iVar6 < 0x20);
  *puVar4 = 0xd3000201;
  puVar2[99] = 0x1280011c;
  puVar5 = puVar2 + 100;
  if (puVar3 != (uint *)0x0) {
    *puVar5 = ((uint)puVar3 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar2[0x65] = (uint)puVar3 & 0xffffff | 0x1000000;
    puVar5 = puVar2 + 0x66;
  }
  *puVar5 = 0x4060020;
  puVar5[1] = 0xd3000000;
  FUN_089f13c8(param_2,puVar5 + 2);
  FUN_088262e0(param_2);
  FUN_089f5084(*(undefined4 *)(*param_1 + 4),param_2);
  return;
}

