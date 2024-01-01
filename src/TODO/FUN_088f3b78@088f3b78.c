#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

byte FUN_088f3b78(int param_1)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  longlong lVar16;
  
  piVar9 = *(int **)(param_1 + 4);
  if (piVar9[0xc] == 0) {
    return 1;
  }
  bVar4 = *(byte *)(param_1 + 10);
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  uVar5 = (uint)*(byte *)(param_1 + 9);
  uVar12 = (uint)*(byte *)(param_1 + 8);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar12 = (uVar5 << 0xc) / uVar12;
      iVar13 = piVar9[6];
      iVar6 = piVar9[4];
      iVar7 = piVar9[7];
      iVar3 = piVar9[5];
      iVar8 = piVar9[8];
      iVar10 = piVar9[3] - iVar13;
      uVar15 = FUN_08a0d1f4(uVar12,0,iVar10,iVar10 >> 0x1f);
      *piVar9 = ((int)((ulonglong)uVar15 >> 0x20) << 0x14 | (uint)uVar15 >> 0xc) + iVar13;
      uVar15 = FUN_08a0d1f4(uVar12,0,iVar6 - iVar7,iVar6 - iVar7 >> 0x1f);
      piVar9[1] = ((int)((ulonglong)uVar15 >> 0x20) << 0x14 | (uint)uVar15 >> 0xc) + piVar9[7];
      uVar15 = FUN_08a0d1f4(uVar12,0,iVar3 - iVar8,iVar3 - iVar8 >> 0x1f);
      piVar9[2] = ((int)((ulonglong)uVar15 >> 0x20) << 0x14 | (uint)uVar15 >> 0xc) + piVar9[8];
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x48) = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
      FUN_088ea594(*(undefined4 *)(*(int *)(param_1 + 4) + 0x30));
      bVar4 = *(byte *)(param_1 + 9);
      bVar11 = *(byte *)(param_1 + 8);
    }
    else {
      *(short *)(piVar9 + 0x13) =
           *(short *)(piVar9 + 0x16) +
           (short)((int)((((int)*(short *)((int)piVar9 + 0x52) - (int)*(short *)(piVar9 + 0x16)) *
                          0x10000 >> 0x10) * uVar5) / (int)uVar12);
      iVar3 = *(int *)(param_1 + 4);
      *(short *)(iVar3 + 0x4e) =
           *(short *)(iVar3 + 0x5a) +
           (short)((int)((((int)*(short *)(iVar3 + 0x54) - (int)*(short *)(iVar3 + 0x5a)) * 0x10000
                         >> 0x10) * (uint)*(byte *)(param_1 + 9)) /
                  (int)(uint)*(byte *)(param_1 + 8));
      iVar3 = *(int *)(param_1 + 4);
      *(short *)(iVar3 + 0x50) =
           *(short *)(iVar3 + 0x5c) +
           (short)((int)((((int)*(short *)(iVar3 + 0x56) - (int)*(short *)(iVar3 + 0x5c)) * 0x10000
                         >> 0x10) * (uint)*(byte *)(param_1 + 9)) /
                  (int)(uint)*(byte *)(param_1 + 8));
      FUN_088ea620(*(undefined4 *)(*(int *)(param_1 + 4) + 0x30),*(int *)(param_1 + 4) + 0x4c);
      bVar4 = *(byte *)(param_1 + 9);
      bVar11 = *(byte *)(param_1 + 8);
    }
  }
  else if (bVar4 < 3) {
    iVar10 = piVar9[0xf];
    iVar3 = piVar9[0xe] - iVar10;
    if (uVar5 == 0) {
      fVar14 = (float)(uVar5 << 0xc) - 0.5;
    }
    else {
      fVar14 = (float)(uVar5 << 0xc) + 0.5;
    }
    lVar16 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,(int)fVar14,(int)fVar14 >> 0x1f);
    uVar1 = lVar16 + 0x800;
    if (uVar12 == 0) {
      fVar14 = (float)(uVar12 << 0xc) - 0.5;
    }
    else {
      fVar14 = (float)(uVar12 << 0xc) + 0.5;
    }
    iVar3 = FUN_08a0d21c((int)(uVar1 & 0xffffffff000),
                         (uint)((uVar1 & 0xffffffff000) >> 0x20) |
                         ((int)((int)(uVar1 >> 0x20) * 0x100000 | (uint)uVar1 >> 0xc) >> 0x1f) <<
                         0xc,(int)fVar14,(int)fVar14 >> 0x1f);
    piVar9[0xd] = iVar10 + iVar3;
    FUN_088ea75c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x30),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x34));
    bVar4 = *(byte *)(param_1 + 9);
    bVar11 = *(byte *)(param_1 + 8);
  }
  else {
    if (3 < bVar4) {
      bVar2 = uVar5 < uVar12;
      goto LAB_088f3fb8;
    }
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) % *(byte *)(param_1 + 8);
    iVar3 = FUN_088f37fc(((uint)*(byte *)(param_1 + 9) << 0x10) / uVar12 & 0xffff);
    iVar10 = *(int *)(param_1 + 4);
    lVar16 = FUN_08a0d1f4(iVar3,iVar3 >> 0x1f,*(int *)(iVar10 + 0x44),
                          *(int *)(iVar10 + 0x44) >> 0x1f);
    *(uint *)(iVar10 + 4) =
         *(int *)(iVar10 + 0x48) +
         ((int)((ulonglong)(lVar16 + 0x800) >> 0x20) * 0x100000 | (uint)(lVar16 + 0x800) >> 0xc);
    FUN_088ea594(*(undefined4 *)(*(int *)(param_1 + 4) + 0x30));
    bVar4 = *(byte *)(param_1 + 9);
    bVar11 = *(byte *)(param_1 + 8);
  }
  bVar2 = bVar4 < bVar11;
LAB_088f3fb8:
  return bVar2 ^ 1;
}

