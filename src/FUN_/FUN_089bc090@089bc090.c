#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc090(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  zz_sceKernelChangeCurrentThreadAttr(0,0x4000);
  while (iVar2 = FUN_089fce78(), iVar2 == 0) {
    zz_sceDisplayWaitVblankStartCB();
  }
  while (iVar2 = FUN_089fe160(), iVar2 == 0) {
    zz_sceDisplayWaitVblankStartCB();
  }
  viim_s(0xff);
  vcst_s(9);
  vcst_s(5);
  vzero_s();
  vzero_q();
  vidt_q();
  FUN_089ce7a8();
  FUN_089ce9b0();
  FUN_089cb844();
  FUN_089bfb34();
  FUN_089cbe1c();
  FUN_088042b8();
  FUN_089bec88();
  FUN_089becd8();
  bVar1 = false;
  do {
    if (!bVar1) {
      uVar3 = FUN_089cb910();
      iVar2 = FUN_089cba7c(uVar3);
      if (iVar2 == 0) {
        FUN_089cbf64();
        FUN_089bfbb8();
        FUN_089cb8d8();
        FUN_089ce82c();
        return 0;
      }
      iVar2 = FUN_089cc058();
      if (iVar2 != 0) {
        uVar3 = FUN_089cc080();
        FUN_089cc0ec(uVar3);
      }
    }
    iVar2 = FUN_0881b22c();
    if (iVar2 != 0) {
      uVar3 = FUN_0881b254();
      FUN_0881bbe4(uVar3);
    }
    FUN_089bf518(DAT_08ac524c);
    iVar2 = FUN_0881b22c();
    if (iVar2 != 0) {
      uVar3 = FUN_0881b254();
      FUN_0881bd80(uVar3);
    }
    bVar1 = false;
    iVar2 = FUN_089bc814();
    if (iVar2 != 0) {
      uVar3 = FUN_089bc83c();
      iVar2 = FUN_089bc984(uVar3);
      if (iVar2 == 0) {
        bVar1 = true;
      }
    }
    FUN_089bf624(DAT_08ac524c);
    FUN_089cea60();
    while (iVar2 = FUN_089bb380(), iVar2 != 0) {
      zz_sceDisplayWaitVblankStartCB();
    }
    FUN_089ce6dc(DAT_08ac5928);
  } while( true );
}

