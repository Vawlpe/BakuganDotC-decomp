#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896026c(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  param_2 = param_2 & 0xff;
  iVar8 = param_1 + param_2 * 4;
  memset_jak(iVar8 + 0x4fb8,0xff,4);
  memset_jak(iVar8 + 0x4fc8,0,4);
  memset_jak(param_1 + param_2 * 2 + 0x4fd8,0xff,4);
  uVar9 = 0;
  bVar2 = false;
  iVar8 = 0;
  do {
    piVar4 = (int *)FUN_0880cc48();
    iVar5 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
    uVar6 = (iVar5 * 4 + iVar8) - 4;
    if ((int)uVar6 < 0) {
      uVar7 = -(-uVar6 & 7) & 0x1f;
    }
    else {
      uVar7 = uVar6 & 7;
    }
    if (((uint)*(byte *)(*piVar4 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) + 0x5c8)
        & 1 << uVar7) != 0) {
      cVar3 = FUN_0895647c(param_1,0,*(undefined *)(param_1 + 0x74));
      iVar5 = param_1 + param_2 * 4 + iVar8;
      *(char *)(iVar5 + 0x4fb8) = cVar3 * '\x04' + (char)iVar8 + -4;
      if (uVar9 < 2) {
        bVar1 = *(byte *)(iVar5 + 0x4fc8);
        *(undefined *)(param_1 + param_2 * 2 + uVar9 + 0x4fd8) = *(undefined *)(iVar5 + 0x4fb8);
        *(byte *)(iVar5 + 0x4fc8) = bVar1 | 1;
        if (!bVar2) {
          *(byte *)(iVar5 + 0x4fc8) = *(byte *)(iVar5 + 0x4fc8) | 2;
          bVar2 = true;
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  return;
}

