#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc47c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089d5814();
  if (iVar1 != 0) {
    while( true ) {
      uVar2 = FUN_089d5830();
      iVar1 = FUN_089d6150(uVar2);
      if (iVar1 == 0) break;
      zz_sceDisplayWaitVblankStartCB();
      uVar2 = FUN_089d5830();
      FUN_089d6214(uVar2);
    }
  }
  return 0;
}

