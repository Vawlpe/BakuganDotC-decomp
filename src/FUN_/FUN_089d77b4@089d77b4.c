#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d77b4(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = 0;
  iVar1 = 0;
  uVar6 = 0xffffffff;
  uVar2 = 0;
  iVar8 = 0;
  if (param_1[4] < 1) {
LAB_089d7874:
    if ((iVar1 != 0) && (iVar8 < param_2)) {
      iVar1 = 0;
      uVar6 = 0xffffffff;
    }
    if (iVar1 != 0) {
      iVar1 = 0;
      uVar2 = uVar6 & 0x1f;
      if (0 < param_2) {
        iVar7 = ((int)(uVar6 + ((uint)((int)uVar6 >> 5) >> 0x1b)) >> 5) << 2;
        iVar8 = param_1[2];
        while( true ) {
          uVar6 = 1 << (uVar2 & 0x1f);
          uVar3 = *(uint *)(iVar8 + iVar7);
          if ((uVar3 & uVar6) == 0) {
            uVar2 = uVar2 + 1;
            *(uint *)(iVar8 + iVar7) = uVar3 | uVar6;
            if (0x1f < (int)uVar2) {
              iVar7 = iVar7 + 4;
              uVar2 = 0;
            }
          }
          iVar1 = iVar1 + 1;
          if (param_2 <= iVar1) break;
          iVar8 = param_1[2];
        }
      }
    }
    return;
  }
  puVar4 = (uint *)param_1[2];
  uVar5 = *puVar4;
  do {
    if ((uVar5 & 1 << (uVar2 & 0x1f)) == 0) {
      if (iVar8 == 0) {
        iVar1 = *param_1 + param_1[3] * uVar3;
        uVar6 = uVar3;
      }
      iVar8 = iVar8 + 1;
      if (param_2 <= iVar8) goto LAB_089d7874;
    }
    else {
      iVar1 = 0;
      iVar8 = 0;
      uVar6 = 0xffffffff;
    }
    uVar2 = uVar2 + 1;
    if (uVar5 == 0xffffffff) {
      uVar3 = uVar3 + 0x20;
      puVar4 = puVar4 + 1;
      uVar2 = 0;
    }
    else {
      if (0x1f < (int)uVar2) {
        puVar4 = puVar4 + 1;
        uVar2 = 0;
      }
      uVar3 = uVar3 + 1;
    }
    if (param_1[4] <= (int)uVar3) goto LAB_089d7874;
    uVar5 = *puVar4;
  } while( true );
}

