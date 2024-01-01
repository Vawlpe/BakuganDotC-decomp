#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1cc74(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0;
  }
  if (param_1 != param_2) {
    if ((param_3 & 0x81) == 0) {
      param_3 = 0;
    }
    FUN_08a148f0();
    uVar10 = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined2 *)(param_2 + 0xc);
    uVar2 = *(undefined2 *)(param_2 + 0xe);
    uVar13 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    uVar3 = *(undefined2 *)(param_2 + 0x1c);
    uVar4 = *(undefined2 *)(param_2 + 0x1e);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 8) = uVar10;
    *(undefined2 *)(param_1 + 0xc) = uVar1;
    *(undefined2 *)(param_1 + 0xe) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 0x18) = uVar7;
    *(undefined2 *)(param_1 + 0x1c) = uVar3;
    *(undefined2 *)(param_1 + 0x1e) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar13;
    if (param_3 == 0) {
      FUN_08a13120(1,uVar13);
      FUN_08a13120(1,*(undefined4 *)(param_1 + 8));
      FUN_08a13120(1,*(undefined4 *)(param_1 + 0x14));
      return param_1;
    }
    iVar14 = (uint)*(ushort *)(param_2 + 0x1c) * (uint)*(ushort *)(param_2 + 0x1e);
    uVar5 = *(ushort *)(param_2 + 0xc);
    uVar6 = 1;
    uVar7 = 0x60;
    if ((int)param_3 < 0) {
      uVar6 = 2;
    }
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar7 = 0;
    }
    uVar10 = FUN_08a12ee4(param_4,uVar6,4,uVar7);
    *(undefined4 *)(param_1 + 0x10) = uVar10;
    uVar10 = FUN_08a12ee4(param_4,uVar6,4,(uint)uVar5 << 2);
    *(undefined4 *)(param_1 + 8) = uVar10;
    uVar6 = FUN_08a12ee4(param_4,uVar6,4,iVar14);
    uVar10 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    memcpy_jak(*(undefined4 *)(param_1 + 0x10),uVar10,uVar7);
    memcpy_jak(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),iVar14);
    puVar9 = *(uint **)(param_1 + 8);
    puVar12 = puVar9 + *(ushort *)(param_1 + 0xc);
    puVar11 = *(uint **)(param_2 + 8);
    if (puVar9 < puVar12) {
      uVar8 = *puVar11;
      while( true ) {
        puVar11 = puVar11 + 1;
        *puVar9 = uVar8;
        if (uVar8 >> 0x18 == 1) {
          uVar8 = (puVar9[-1] & 0xff0000) << 8 | uVar8 & 0xffffff;
          if (uVar8 == *(uint *)(param_2 + 0x14)) {
            uVar8 = *(uint *)(param_1 + 0x14);
          }
          if (uVar8 == *(uint *)(param_2 + 0x10)) {
            uVar8 = *(uint *)(param_1 + 0x10);
          }
          *puVar9 = uVar8 & 0xffffff | 0x1000000;
          puVar9[-1] = (uVar8 >> 0x18) << 0x10 | 0x10000000;
        }
        else if (uVar8 >> 0x18 == 9) {
          *puVar9 = (uint)(puVar12 + -1) & 0xffffff | 0x9000000;
          puVar9[-1] = ((uint)(puVar12 + -1) >> 0x18) << 0x10 | 0x10000000;
        }
        if (puVar12 <= puVar9 + 1) break;
        uVar8 = *puVar11;
        puVar9 = puVar9 + 1;
      }
    }
    zz_sceKernelDcacheWritebackAll();
  }
  return param_1;
}

