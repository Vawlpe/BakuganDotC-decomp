#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 WIP_Init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_08a029ec();
  iVar1 = WIP_KernCBReg_ExitGameAndPower();
  if (iVar1 != 0) {
                    // Loading some assets i think?
    FUN_089d7b48(DAT_08aac760 * 0x400 + -0x400);
    FUN_089d7ca8();
    FUN_089bc6b8();
    FUN_089be9b4(8);
    FUN_089faed8();
                    // Some kind of main loop maybe?
    iVar1 = WIP_Init_LoopThingIdk();
    if (iVar1 != 0) {
      do {
        do {
          iVar1 = FUN_089bbc5c();
          if (iVar1 != 0) goto LAB_089bb560;
          zz_sceDisplayWaitVblankStartCB();
          uVar2 = DONE_GetPtr_DAT_08AC51F8();
          FUN_089bd3f4(uVar2);
          uVar2 = DONE_GetPtr_DAT_08AC51F8();
          iVar1 = FUN_089bcb20(uVar2);
          if (iVar1 != 0) {
            uVar2 = DONE_GetPtr_DAT_08AC61A8();
            FUN_089fb298(uVar2);
          }
          iVar1 = DONE_Get_DAT_08AC4ED0();
        } while ((iVar1 == 0) || (iVar1 = FUN_089bc814(), iVar1 == 0));
        uVar2 = DONE_GetPtr_DAT_08AC51F8();
        iVar1 = FUN_089bca70(uVar2);
      } while (iVar1 == 0);
      iVar1 = DONE_Get_DAT_08AC5874();
      *(undefined *)(iVar1 + 0x8be4) = 1;
    }
LAB_089bb560:
    while (iVar1 = DONE_NotZero_DAT_08AC5874(), iVar1 != 0) {
      zz_sceDisplayWaitVblankStartCB();
    }
    zz_sceKernelExitGame();
  }
  return 0;
}

