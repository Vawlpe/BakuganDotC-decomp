#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a59fc(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_08ac3d60 == 0) {
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf6e8(0x1fe,100);
    iVar1 = FUN_089be054(DAT_08ac520c,"DWCommon_eu.bin");
    FUN_088cc354(iVar1);
    FUN_0890e844(*(undefined4 *)(iVar1 + 8));
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 1;
    DAT_08ac3d60 = DAT_08ac3d60 + 1;
  }
  else {
    if (1 < DAT_08ac3d60) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf93c(0x1fe,1);
    if (iVar2 == 0) {
      DAT_08ac3d60 = 2;
    }
  }
  return 0;
}

