#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bb45c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_08a029ec();
  iVar1 = FUN_089bb3b4();
  if (iVar1 != 0) {
    FUN_089d7b48(DAT_08aac760 * 0x400 + -0x400);
    FUN_089d7ca8();
    FUN_089bc6b8();
    FUN_089be9b4(8);
    FUN_089faed8();
    iVar1 = FUN_089bbbf0();
    if (iVar1 != 0) {
      do {
        do {
          iVar1 = FUN_089bbc5c();
          if (iVar1 != 0) goto LAB_089bb560;
          zz_sceDisplayWaitVblankStartCB();
          uVar2 = FUN_089bc83c();
          FUN_089bd3f4(uVar2);
          uVar2 = FUN_089bc83c();
          iVar1 = FUN_089bcb20(uVar2);
          if (iVar1 != 0) {
            uVar2 = FUN_089fb064();
            FUN_089fb298(uVar2);
          }
          iVar1 = FUN_089bb380();
        } while ((iVar1 == 0) || (iVar1 = FUN_089bc814(), iVar1 == 0));
        uVar2 = FUN_089bc83c();
        iVar1 = FUN_089bca70(uVar2);
      } while (iVar1 == 0);
      iVar1 = FUN_089c59f0();
      *(undefined *)(iVar1 + 0x8be4) = 1;
    }
LAB_089bb560:
    while (iVar1 = FUN_089c59d4(), iVar1 != 0) {
      zz_sceDisplayWaitVblankStartCB();
    }
    zz_sceKernelExitGame();
  }
  return 0;
}

