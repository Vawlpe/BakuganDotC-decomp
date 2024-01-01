#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc4dc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089d3ab4();
  if (iVar1 == 0) {
    FUN_089d37d0();
  }
  do {
    iVar1 = FUN_089d3ab4();
    if (iVar1 == 0) {
LAB_089bc554:
      FUN_089d39c0();
      return 0;
    }
    uVar2 = FUN_089d3adc();
    FUN_089d5024(uVar2);
    uVar2 = FUN_089d3adc();
    iVar1 = FUN_089d4144(uVar2);
    if (iVar1 != 0) {
      FUN_089d3adc();
      iVar1 = FUN_089d3afc();
      if (iVar1 != 0) {
        zz_sceDisplayWaitVblankStartCB();
        goto LAB_089bc554;
      }
    }
    zz_sceDisplayWaitVblankStartCB();
  } while( true );
}

