#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088efde8(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  uVar4 = 0;
  iVar5 = 0;
  do {
    iVar5 = uVar4 * -4 + iVar5 * 5;
    iVar6 = *(int *)(param_1 + 0x284);
    puVar9 = (undefined4 *)(&DAT_08b00d40)[uVar4];
    iVar10 = iVar6 + iVar5;
    uVar3 = puVar9[1];
    uVar12 = puVar9[2];
    *(undefined4 *)(iVar10 + 0x24) = *puVar9;
    *(undefined4 *)(iVar10 + 0x28) = uVar3;
    *(undefined4 *)(iVar10 + 0x2c) = uVar12;
    iVar10 = *(int *)(param_1 + 0x284) + iVar5;
    uVar3 = puVar9[1];
    uVar12 = puVar9[2];
    *(undefined4 *)(iVar10 + 0x18) = *puVar9;
    *(undefined4 *)(iVar10 + 0x1c) = uVar3;
    *(undefined4 *)(iVar10 + 0x20) = uVar12;
    iVar10 = *(int *)(param_1 + 0x284) + iVar5;
    uVar3 = puVar9[1];
    uVar12 = puVar9[2];
    *(undefined4 *)(iVar10 + 0xc) = *puVar9;
    *(undefined4 *)(iVar10 + 0x10) = uVar3;
    *(undefined4 *)(iVar10 + 0x14) = uVar12;
    uVar3 = puVar9[1];
    puVar7 = (undefined4 *)(iVar6 + iVar5);
    uVar12 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar3;
    puVar7[2] = uVar12;
    iVar6 = (&DAT_08b00d40)[uVar4];
    iVar10 = *(int *)(param_1 + 0x284) + iVar5;
    puVar8 = (undefined2 *)(iVar6 + 0xc);
    uVar1 = *(undefined2 *)(iVar6 + 0xe);
    uVar2 = *(undefined2 *)(iVar6 + 0x10);
    *(undefined2 *)(iVar10 + 0x42) = *puVar8;
    *(undefined2 *)(iVar10 + 0x44) = uVar1;
    *(undefined2 *)(iVar10 + 0x46) = uVar2;
    iVar11 = *(int *)(param_1 + 0x284) + iVar5;
    uVar1 = *(undefined2 *)(iVar6 + 0xe);
    uVar2 = *(undefined2 *)(iVar6 + 0x10);
    *(undefined2 *)(iVar11 + 0x3c) = *puVar8;
    *(undefined2 *)(iVar11 + 0x3e) = uVar1;
    *(undefined2 *)(iVar11 + 0x40) = uVar2;
    iVar11 = *(int *)(param_1 + 0x284) + iVar5;
    uVar1 = *(undefined2 *)(iVar6 + 0xe);
    uVar2 = *(undefined2 *)(iVar6 + 0x10);
    *(undefined2 *)(iVar11 + 0x36) = *puVar8;
    *(undefined2 *)(iVar11 + 0x38) = uVar1;
    *(undefined2 *)(iVar11 + 0x3a) = uVar2;
    uVar1 = *(undefined2 *)(iVar6 + 0xe);
    uVar2 = *(undefined2 *)(iVar6 + 0x10);
    *(undefined2 *)(iVar10 + 0x30) = *puVar8;
    *(undefined2 *)(iVar10 + 0x32) = uVar1;
    *(undefined2 *)(iVar10 + 0x34) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x284) + iVar5 + 0x48) = (&DAT_08b00d40)[uVar4];
    if (*(byte *)(param_1 + 0x2d3) == uVar4) {
      *(undefined *)(param_1 + 0x2d4) = *(undefined *)((&DAT_08b00d40)[uVar4] + 0x3c);
    }
    uVar4 = uVar4 + 1 & 0xff;
    iVar5 = uVar4 << 4;
  } while (uVar4 < *(byte *)(DAT_08abf710 + 0xc9));
  return;
}

