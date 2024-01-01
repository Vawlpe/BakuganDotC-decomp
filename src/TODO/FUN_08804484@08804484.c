#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08804484(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined auStack_b0 [128];
  
  uVar2 = 0;
  if ((DAT_08aac7d4 != 0) && (param_1 != 0)) {
    iVar5 = 0;
    uVar4 = 0;
    ppuVar6 = &PTR_DAT_08aac764;
    do {
      iVar1 = strcmp(ppuVar6[1],param_1);
      if (iVar1 == 0) break;
      iVar1 = FUN_089be500(*ppuVar6);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + iVar1;
      ppuVar6 = ppuVar6 + 2;
    } while (uVar4 < 0xe);
    iVar1 = DAT_08ac520c;
    if ((-1 < (int)uVar4) && (0 < iVar5)) {
      iVar3 = DAT_08aac7d4 + iVar5;
      if ((param_2 == 0) && (param_3 = iVar5, param_2 = 0, DAT_08ac520c != 0)) {
        FUN_089b4c84(auStack_b0,"%s.rep",param_1);
        param_2 = FUN_089be054(iVar1,auStack_b0);
        param_3 = FUN_089be1b8(iVar1,auStack_b0);
      }
      if (param_2 != 0) {
        memcpy_jak(iVar3,param_2,param_3);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

