#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc830(uint **param_1)

{
  short sVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  
  if ((param_1[5][8] & 0x20000) != 0) {
    psVar12 = (short *)param_1[7][4];
    if ((psVar12 == (short *)0x0) || (param_1[0x12] == (uint *)0x0)) {
      uVar4 = (uint)*(ushort *)(param_1[5] + 7);
      if (psVar12 == (short *)0x0) {
        puVar3 = *param_1;
        *param_1 = puVar3 + 1;
        *puVar3 = 0xff000000;
      }
      puVar3 = *param_1;
      if (psVar12 != (short *)0x0) {
        puVar5 = *param_1;
        *param_1 = puVar5 + 1;
        *puVar5 = ((uint)(puVar3 + uVar4 * 0xd + 2) >> 0x18) << 0x10 | 0x10000000;
        puVar5 = *param_1;
        *param_1 = puVar5 + 1;
        *puVar5 = (uint)(puVar3 + uVar4 * 0xd + 2) & 0xffffff | 0x8000000;
        puVar3 = *param_1;
      }
      param_1[0x12] = puVar3;
      iVar11 = 0;
      if (uVar4 != 0) {
        iVar10 = 0;
        iVar9 = 0;
        uVar8 = 0;
        do {
          puVar3 = param_1[4];
          uVar6 = puVar3[1];
          sVar1 = *(short *)(param_1[5][4] + iVar10);
          uVar7 = param_1[5][5];
          if (psVar12 == (short *)0x0) {
            puVar5 = *param_1;
            *param_1 = puVar5 + 1;
            *puVar5 = uVar8 | 0x2a000000;
          }
          FUN_089dd67c(param_1 + 0x28,uVar6 + sVar1 * 0xc0 + 0x80,uVar7 + iVar9,puVar3 + 0x18);
          FUN_089da850(param_1,param_1 + 0x28);
          if (psVar12 != (short *)0x0) {
            puVar3 = *param_1;
            *param_1 = puVar3 + 1;
            *puVar3 = 0xb000000;
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 2;
          iVar9 = iVar9 + 0x40;
          uVar8 = uVar8 + 0xc;
        } while (iVar11 < (int)uVar4);
      }
    }
    if (psVar12 != (short *)0x0) {
      puVar3 = *param_1;
      uVar2 = *(ushort *)(param_1[7] + 5);
      *param_1 = puVar3 + 1;
      iVar11 = 0;
      *puVar3 = 0xff000000;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          puVar3 = *param_1;
          *param_1 = puVar3 + 1;
          *puVar3 = uVar4 | 0x2a000000;
          sVar1 = *psVar12;
          puVar3 = param_1[0x12];
          puVar5 = *param_1;
          *param_1 = puVar5 + 1;
          *puVar5 = ((uint)(puVar3 + sVar1 * 0xd) >> 0x18) << 0x10 | 0x10000000;
          puVar5 = *param_1;
          *param_1 = puVar5 + 1;
          iVar11 = iVar11 + 1;
          *puVar5 = (uint)(puVar3 + sVar1 * 0xd) & 0xffffff | 0xa000000;
          uVar4 = uVar4 + 0xc;
          psVar12 = psVar12 + 1;
        } while (iVar11 < (int)(uint)uVar2);
      }
    }
  }
  return;
}

