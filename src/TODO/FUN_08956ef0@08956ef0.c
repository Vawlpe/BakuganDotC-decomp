#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08956ef0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined auStack_a0 [64];
  undefined auStack_60 [64];
  
  uVar6 = 0;
  do {
    bVar1 = false;
    iVar2 = FUN_0880d354();
    uVar6 = uVar6 + 1;
    if (iVar2 == 0) {
      piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
      if ((int)uVar6 < 0) {
        uVar5 = -(-uVar6 & 7) & 0x1f;
      }
      else {
        uVar5 = uVar6 & 7;
      }
      if (((uint)*(byte *)(*piVar3 + ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) + 0x5be
                          ) & 1 << uVar5) != 0) {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      memset_jak(auStack_60,0,0x40);
      uVar5 = uVar6 & 0xff;
      FUN_0892bd00(uVar5,auStack_60);
      FUN_089b4c84(auStack_a0,"%s.gmo",auStack_60);
      uVar4 = FUN_089d9674();
      FUN_089d9914(uVar4,auStack_a0);
      iVar2 = FUN_08956e90(param_1,1,uVar5);
      if (iVar2 == 0) {
        memset_jak(auStack_60,0,0x40);
        FUN_0892c818(uVar5,auStack_60);
        FUN_089b4c84(auStack_a0,"%s.gmo",auStack_60);
        uVar4 = FUN_089d9674();
        FUN_089d9914(uVar4,auStack_a0);
      }
    }
  } while ((int)uVar6 < 0x14);
  return;
}

