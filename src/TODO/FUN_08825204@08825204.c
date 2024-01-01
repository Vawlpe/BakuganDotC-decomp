#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08825204(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < DAT_08ab9e2c) {
    piVar5 = &DAT_08ab9e34;
    ppuVar4 = &PTR_s_afx_114m_gmo_08ab9e14;
    do {
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x14) + 0xc))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 8),3);
        *piVar5 = 0;
      }
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar2 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar3 = 0;
      if (iVar2 != 0) {
        FUN_089de2e4(iVar2,*ppuVar4,0);
        iVar3 = iVar2;
      }
      *piVar5 = iVar3;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      ppuVar4 = ppuVar4 + 1;
    } while (iVar6 < DAT_08ab9e2c);
  }
  return;
}

