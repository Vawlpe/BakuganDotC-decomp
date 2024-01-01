#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dcad8(uint **param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  
  if ((param_1[5][8] & 0x40000) != 0) {
    puVar1 = *param_1;
    *param_1 = puVar1 + 1;
    *puVar1 = 0xff000000;
    uVar2 = (uint)*(ushort *)((int)param_1[5] + 0x1a);
    iVar4 = 0;
    if (uVar2 == 0) {
      fVar8 = (float)param_1[5][10];
      iVar4 = 0;
      do {
        fVar6 = 1.0 - ABS(fVar8 - (float)iVar4);
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        iVar3 = iVar4 + 0x2c;
        puVar1 = *param_1;
        *param_1 = puVar1 + 1;
        iVar4 = iVar4 + 1;
        *puVar1 = iVar3 * 0x1000000 | (uint)fVar6 >> 8;
      } while (iVar4 < 8);
    }
    else {
      iVar3 = 0;
      if (uVar2 != 0) {
        do {
          iVar5 = iVar4 + 0x2c;
          uVar7 = *(uint *)(param_1[5][3] + iVar3);
          puVar1 = *param_1;
          *param_1 = puVar1 + 1;
          iVar4 = iVar4 + 1;
          *puVar1 = iVar5 * 0x1000000 | uVar7 >> 8;
          iVar3 = iVar3 + 4;
        } while (iVar4 < (int)uVar2);
      }
    }
  }
  return;
}

