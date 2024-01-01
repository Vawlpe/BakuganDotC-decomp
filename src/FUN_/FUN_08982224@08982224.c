#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08982224(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  memset_jak(param_1 + 0xbd8,0xff,0x50);
  memset_jak(param_1 + 0xc28,0,0x50);
  uVar4 = 0;
  iVar7 = 0;
  do {
    iVar1 = FUN_089821bc(param_1,1,uVar4 & 0xff);
    iVar5 = 0;
    iVar8 = iVar7 + param_1;
    do {
      piVar2 = (int *)FUN_0880cc48();
      uVar6 = (iVar1 - 1U & 0xffff) * 4 + iVar5;
      if ((int)uVar6 < 0) {
        uVar3 = -(-uVar6 & 7) & 0x1f;
      }
      else {
        uVar3 = uVar6 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) + 0x5d3
                          ) & 1 << uVar3) != 0) {
        *(char *)(iVar8 + 0xbd8) = (char)uVar6;
        piVar2 = (int *)FUN_0880cc48();
        if ((int)uVar6 < 0) {
          uVar3 = -(-uVar6 & 7) & 0x1f;
        }
        else {
          uVar3 = uVar6 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) +
                            0x5f3) & 1 << uVar3) == 0) {
          *(undefined *)(iVar8 + 0xc28) = 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar5 < 4);
    uVar4 = uVar4 + 1;
    iVar7 = iVar7 + 4;
  } while ((int)uVar4 < 0x14);
  return;
}

