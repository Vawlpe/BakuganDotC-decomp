#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a19210(int param_1,undefined4 *param_2,uint *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  
  if ((param_1 == 0) || (iVar20 = *(int *)(param_1 + 0x50), iVar20 == 0)) {
    return 0;
  }
  uVar23 = (uint)*(ushort *)(iVar20 + 0x12);
  uVar24 = uVar23 * 4 + 0xc;
  if (param_2 != (undefined4 *)0x0) {
    puVar22 = (undefined4 *)*param_2;
    if (puVar22 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_3 != (uint *)0x0) {
      if (*param_3 < uVar24) {
        return 0;
      }
      *param_3 = *param_3 - uVar24;
    }
    puVar25 = puVar22 + uVar23 + 3;
    uVar18 = (uint)(puVar22 + 0x10) & 0xffffffc0;
    if ((uVar18 < ((uint)puVar25 & 0xffffffc0)) && (-1 < (int)(uVar18 << 1))) {
      uVar19 = (((((uint)puVar25 & 0xffffffc0) - uVar18) + uVar18) - 0x40 | 0x3f) ^ 0x3f;
      for (uVar18 = (uVar18 + 0x3f | 0x3f) ^ 0x3f; uVar18 <= uVar19; uVar18 = uVar18 + 0x80) {
        cacheOp(0x18,uVar18);
        if (uVar19 < uVar18 + 0x40) break;
        cacheOp(0x18,uVar18 + 0x40);
      }
    }
    puVar22[2] = 0;
    puVar17 = (undefined4 *)((int)puVar22 + 0xfU & 0xfffffff0);
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar25[-1] = 0;
    puVar25[-2] = 0;
    puVar25[-3] = 0;
    if (param_4 < 0) {
      iVar21 = *(int *)(iVar20 + 8);
    }
    else if (param_4 < (int)(uint)*(ushort *)(iVar20 + 0xc)) {
      iVar21 = *(int *)(iVar20 + 8);
      puVar22 = (undefined4 *)(iVar21 + param_4 * (uint)*(ushort *)(iVar20 + 0x10) * 4);
      if (puVar22 != (undefined4 *)0x0) {
        uVar23 = uVar23 << 2;
        if (0x3f < uVar23) {
          puVar16 = (undefined4 *)((uVar23 & 0xffffffc0) + (int)puVar22);
          do {
            uVar4 = puVar22[1];
            uVar8 = puVar22[2];
            uVar12 = puVar22[3];
            uVar1 = puVar22[4];
            uVar5 = puVar22[5];
            uVar9 = puVar22[6];
            uVar13 = puVar22[7];
            uVar2 = puVar22[8];
            uVar6 = puVar22[9];
            uVar10 = puVar22[10];
            uVar14 = puVar22[0xb];
            uVar3 = puVar22[0xc];
            uVar7 = puVar22[0xd];
            uVar11 = puVar22[0xe];
            uVar15 = puVar22[0xf];
            cacheOp(0x1b,puVar22);
            *puVar17 = *puVar22;
            puVar17[1] = uVar4;
            puVar17[2] = uVar8;
            puVar17[3] = uVar12;
            puVar17[4] = uVar1;
            puVar17[5] = uVar5;
            puVar17[6] = uVar9;
            puVar17[7] = uVar13;
            puVar17[8] = uVar2;
            puVar17[9] = uVar6;
            puVar17[10] = uVar10;
            puVar17[0xb] = uVar14;
            puVar17[0xc] = uVar3;
            puVar17[0xd] = uVar7;
            puVar17[0xe] = uVar11;
            puVar17[0xf] = uVar15;
            puVar22 = puVar22 + 0x10;
            puVar17 = puVar17 + 0x10;
          } while (puVar22 != puVar16);
          uVar23 = uVar23 & 0x3f;
        }
        memcpy_jak(puVar17,puVar22,uVar23);
        *param_2 = puVar25;
        return uVar24;
      }
    }
    else {
      iVar21 = *(int *)(iVar20 + 8);
    }
    FUN_08a18d88(puVar17,iVar21,param_1);
    *param_2 = puVar25;
  }
  return uVar24;
}

