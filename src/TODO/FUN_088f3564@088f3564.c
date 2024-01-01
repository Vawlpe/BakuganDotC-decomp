#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

byte FUN_088f3564(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  uVar12 = (uint)*(byte *)(param_1 + 9);
  uVar6 = (uint)*(byte *)(param_1 + 8);
  if (*(byte *)(param_1 + 10) == 0) {
    uVar6 = (uVar12 << 0xc) / uVar6;
    piVar17 = *(int **)(param_1 + 4);
    iVar18 = piVar17[6];
    iVar13 = piVar17[4];
    iVar14 = piVar17[7];
    iVar7 = piVar17[5];
    iVar16 = piVar17[8];
    iVar10 = piVar17[3] - iVar18;
    uVar19 = FUN_08a0d1f4(uVar6,0,iVar10,iVar10 >> 0x1f);
    *piVar17 = ((int)((ulonglong)uVar19 >> 0x20) << 0x14 | (uint)uVar19 >> 0xc) + iVar18;
    uVar19 = FUN_08a0d1f4(uVar6,0,iVar13 - iVar14,iVar13 - iVar14 >> 0x1f);
    piVar17[1] = ((int)((ulonglong)uVar19 >> 0x20) << 0x14 | (uint)uVar19 >> 0xc) + piVar17[7];
    uVar19 = FUN_08a0d1f4(uVar6,0,iVar7 - iVar16,iVar7 - iVar16 >> 0x1f);
    piVar17[2] = ((int)((ulonglong)uVar19 >> 0x20) << 0x14 | (uint)uVar19 >> 0xc) + piVar17[8];
    puVar8 = *(undefined4 **)(param_1 + 4);
    puVar11 = (undefined4 *)puVar8[0x12];
    uVar15 = puVar8[1];
    uVar9 = puVar8[2];
    *puVar11 = *puVar8;
    puVar11[1] = uVar15;
    puVar11[2] = uVar9;
    bVar1 = *(byte *)(param_1 + 9);
    bVar2 = *(byte *)(param_1 + 8);
  }
  else {
    bVar5 = uVar12 < uVar6;
    if (1 < *(byte *)(param_1 + 10)) goto LAB_088f37cc;
    iVar7 = *(int *)(param_1 + 4);
    *(short *)(iVar7 + 0x30) =
         *(short *)(iVar7 + 0x3c) +
         (short)((int)((((int)*(short *)(iVar7 + 0x36) - (int)*(short *)(iVar7 + 0x3c)) * 0x10000 >>
                       0x10) * uVar12) / (int)uVar6);
    iVar7 = *(int *)(param_1 + 4);
    *(short *)(iVar7 + 0x32) =
         *(short *)(iVar7 + 0x3e) +
         (short)((int)((((int)*(short *)(iVar7 + 0x38) - (int)*(short *)(iVar7 + 0x3e)) * 0x10000 >>
                       0x10) * (uint)*(byte *)(param_1 + 9)) / (int)(uint)*(byte *)(param_1 + 8));
    iVar7 = *(int *)(param_1 + 4);
    *(short *)(iVar7 + 0x34) =
         *(short *)(iVar7 + 0x40) +
         (short)((int)((((int)*(short *)(iVar7 + 0x3a) - (int)*(short *)(iVar7 + 0x40)) * 0x10000 >>
                       0x10) * (uint)*(byte *)(param_1 + 9)) / (int)(uint)*(byte *)(param_1 + 8));
    iVar7 = *(int *)(param_1 + 4);
    iVar10 = *(int *)(iVar7 + 0x48);
    uVar3 = *(undefined2 *)(iVar7 + 0x32);
    uVar4 = *(undefined2 *)(iVar7 + 0x34);
    *(undefined2 *)(iVar10 + 0xc) = *(undefined2 *)(iVar7 + 0x30);
    *(undefined2 *)(iVar10 + 0xe) = uVar3;
    *(undefined2 *)(iVar10 + 0x10) = uVar4;
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + 0x2c) =
         *(undefined2 *)(*(int *)(param_1 + 4) + 0x32);
    bVar1 = *(byte *)(param_1 + 9);
    bVar2 = *(byte *)(param_1 + 8);
  }
  bVar5 = bVar1 < bVar2;
LAB_088f37cc:
  return bVar5 ^ 1;
}

